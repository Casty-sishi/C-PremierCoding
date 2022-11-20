#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
map<string, vector<string>> family;

void add_new_family(string last, vector<string> name)
{
  family[last] = name;
}
void insert_new_child(string lastname, string name)
{
  family[lastname].push_back(name);
}
int main(void)
{
  add_new_family("Black", vector<string>{"Lily", "Jasper"});
  for (const auto afamily : family)
  {
    cout << afamily.first << ":\t";
    for (const auto child : afamily.second)
    {
      cout << child << "\t";
    }
    cout << endl;
  }
  insert_new_child("Black", "Jack");
  for (const auto afamily : family)
  {
    cout << afamily.first << ":\t";
    for (const auto child : afamily.second)
    {
      cout << child << "\t";
    }
    cout << endl;
  }
}