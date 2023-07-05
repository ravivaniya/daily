#include<iostream>
#include<vector>
using namespace std;

void swap(int &num1, int &num2) {
  int temp = num2;
  num2 = num1;
  num1 = temp;
}

void insertion_sort(vector<int> &arr, int n) {
  for (int i = 1; i < n; i++) {
    int j = i;
    while (arr[j - 1] > arr[j]) {
      swap(arr[j], arr[j - 1]);
      j--;
    }
  }
  cout << "After insertion sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
  int n = arr.size();
  cout << "Before sorting: " << "\n";
  for (int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  insertion_sort(arr, n);
  return 0;
}