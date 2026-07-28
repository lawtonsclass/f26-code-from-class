#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
 
int main() {
  unordered_map<string, int> m; 
  m.emplace("Lawton", 8675309);
  m.emplace("Mom", 8675310);

  cout << m.count("Lawton") << endl;
  cout << m.count("Mom") << endl;
  cout << m.count("Dad") << endl;

  m.at("Lawton")--;

  cout << m.at("Lawton") << endl;
  cout << m.at("Mom") << endl;
  // cout << m.at("Dad") << endl;
 
  return 0;
}
