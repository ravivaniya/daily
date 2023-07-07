#include <iostream>
#include <vector>
using namespace std;

void swap(int &num1, int &num2) {
  int temp = num2;
  num2 = num1;
  num1 = temp;
}

void mergeArray(vector<int> &arr, int low, int mid, int high) {
  vector<int> temp;     // temporary array
  int left = low;       // starting index of left half of arr
  int right = mid + 1;  // starting index of right half of arr

  // storing elements in the temporary array in a sorted manner//
  while (left <= mid && right <= high) {
    if (arr[left] <= arr[right]) {
      temp.push_back(arr[left]);
      left++;
    } else {
      temp.push_back(arr[right]);
      right++;
    }
  }

  // if elements on the left half are still left //
  while (left <= mid) {
    temp.push_back(arr[left]);
    left++;
  }

  //  if elements on the right half are still left //
  while (right <= high) {
    temp.push_back(arr[right]);
    right++;
  }

  // transfering all elements from temporary to arr //
  for (int i = low; i <= high; i++) {
    arr[i] = temp[i - low];
  }
}

void mergeSort(vector<int> &arr, int low, int high) {
  if (low >= high)
    return;
  int mid = (low + high) / 2;
  mergeSort(arr, low, mid);
  mergeSort(arr, mid + 1, high);
  mergeArray(arr, low, mid, high);
}

int main() {
  vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
  int n = arr.size();
  cout << "Before sorting: "
       << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  mergeSort(arr, 0, n - 1);
  cout << "After sorting: "
       << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}