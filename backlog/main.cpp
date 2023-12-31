#include<iostream>
#include<vector>
using namespace std;

void swap(int &num1, int &num2) {
  int temp = num2;
  num2 = num1;
  num1 = temp;
}

void mergeArray(vector<int> &arr, int low, int mid, int high) {
  
}

void mergeSort(vector<int> &arr, int low, int high) {
  if (low >= high) return;
  int mid = (low + high) / 2;
  mergeSort(arr, low, mid);
  mergeSort(arr, mid + 1, high);
  mergeArray(arr, low, mid, high); 
}

int main() {
  vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
  int n = arr.size();
  cout << "Before sorting: " << "\n";
  for (int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  mergeSort(arr, 0, n - 1);
  return 0;
}