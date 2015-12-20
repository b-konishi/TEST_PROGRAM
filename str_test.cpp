#include<iostream>
#include<string>

using namespace std;

int main() {
  string str;
  
  // Error "cin << str".
  cin >> str;
  
  cout << "String is \"" << str << "\"." << endl;
  
  return 0;
}