// TODO:
// what happen if we use " " instead ' '
// pls try to do in reverse order also

#include<iostream>
#include<vector>
#include<string>
using namespace std;

void swap(int &num1, int &num2) {
  int temp = num2;
  num2 = num1;
  num1 = temp;
}

void bubble_sort(vector<string> &arr, int n) {
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 0; j <= i - 1; j++) {
      if (arr[j] > arr[j+1]) {
        swap(arr[j], arr[j+1]);
      }
    }
  }
  cout << "After bubble sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<string> arr = {"my", "name", "is", "ravi", "and", "i", "am", "developer", "aa", "aaa", "aab"};
  int n = arr.size();
  cout << "Before sorting: " << "\n";
  for (int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  bubble_sort(arr, n);
  return 0;
}