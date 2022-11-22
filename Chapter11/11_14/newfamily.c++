#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
struct date
{
  int month;
  int date;
};

map<string, vector<pair<string, date>>> family;

void add_new_family(string last, vector<pair<string, date>> pavector)
{
  family[last] = pavector;
}
void insert_new_child(string lastname, pair<string, date> name)
{
  family[lastname].push_back(name);
}
int main(void)
{
  add_new_family("Black", vector<pair<string, date>>{{"Lily", date{1, 1}}, {"Jasper", date{2, 3}}});
  for (const auto afamily : family)
  {
    cout << afamily.first << ":\t";
    for (const auto child : afamily.second)
    {
      cout << child.first << "\t";
      cout << child.second.month << "\\" << child.second.date << endl;
    }
    cout << endl;
  }
  insert_new_child("Black", {"Jack", date{3, 5}});
  for (const auto afamily : family)
  {
    cout << afamily.first << ":\t";
    for (const auto child : afamily.second)
    {
      cout << child.first << "\t";
      cout << child.second.month << "\\" << child.second.date << endl;
    }
    cout << endl;
  }
}