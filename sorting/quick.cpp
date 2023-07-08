// TODO:
#include <iostream>
#include <vector>
using namespace std;

void swap(int &num1, int &num2) {
  int temp = num2;
  num2 = num1;
  num1 = temp;
}

int divide(vector<int> arr, int low, int high) {
  int pivot = arr[low];
  int begin = low;
  int end = high;

  while (begin < end) {
  }
}

void quickSort(vector<int> arr, int low, int high) {
  if (low < high) {
    int partitionIndex = divide(arr, low, high);
    quickSort(arr, low, partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, high);
  }
}

int main() {
  vector<int> arr = {3, 12, 0, 87, 32, 55, 65, 12, 10};
  int n = arr.size();
  cout << "Before sorting: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  quickSort(arr, 0, n - 1);
  cout << "After sorting: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}