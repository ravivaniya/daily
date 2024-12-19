// Declaration and Initialization

#include <iostream>
#include <utility> // for std::pair
using namespace std;

int main() {
  pair<int, string> myPair(1, "Hello");
  cout << myPair.first << " " << myPair.second << endl;
  return 0;
}