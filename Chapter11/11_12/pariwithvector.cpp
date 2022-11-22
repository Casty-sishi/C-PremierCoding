#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;

int main(void)
{
  vector<pair<string, int>> vecir;
  string buffer;
  int temp;
  while (cin >> buffer >> temp)
    vecir.push_back({buffer, temp}); // v1
  // vecir.push_back(make_pair(buffer, temp)); // v2
  // vecir.push_back(pair<string,int>(buffer,temp))//v3
  // vecir.push_back(pair<string, int>{buffer, temp}); // v4
  for (auto t : vecir)
    cout << t.first << "\t" << t.second << endl;
  return 0;
}