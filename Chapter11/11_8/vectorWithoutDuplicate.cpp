#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> set_like;

void set_insert(string ele)
{
  if (find(set_like.begin(), set_like.end(), ele) == set_like.end())
    set_like.push_back(ele);
}
int main(void)
{
  set_insert("1");
  set_insert("2");
  set_insert("1");
  set_insert("3");
  cout << set_like.size() << endl;
}