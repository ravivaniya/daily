// This is non case sensitive search
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int linearSearch(vector<string> arr, int size, string toFind) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == toFind) {
      return i;
    }
  }
  return -1;
}

int main() {
  vector<string> arr = {"I", "am", "ravi", "working", "on", "linear", "not"};
  int n = arr.size();
  string toFind;
  cin >> toFind;
  int foundAt = linearSearch(arr, n, toFind);
  if (foundAt == -1) {
    cout << "Sorrry! not found" << endl;
  } else {
    cout << "Found " << toFind << " inside array at " << (foundAt + 1) << "th location." << endl;
  }
  return 0;
}