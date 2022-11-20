#include <iostream>
#include <string>
#include <cctype>
#include <map>
#include <algorithm>
using namespace std;
map<string, int> counter;

int main(void)
{
  string input; // leave out punctuation, ignore big Letters
  while (cin >> input)
  {
    for (auto &c : input)
    {
      if (isalpha(c))
        c = tolower(c);
      else
        input.erase(remove(input.begin(), input.end(), c));
    }
    if (input != " ")
      counter[input] += 1;
  }
  for (auto const &e : counter)
  {
    if (e.second >= 1)
      cout << e.first << "\tcounts:" << e.second << endl;
  }
  return 0;
}