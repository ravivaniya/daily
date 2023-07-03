#include<iostream>
#include<vector>
using namespace std;

void swap(int &num1, int &num2) {
  int temp = num2;
  num2 = num1;
  num1 = temp;
}

void selection_sort(vector<int> &arr, int n) {
  for (int i = 0; i < n-1; i++) {
    int min_i = i;
    for (int j = i+1; j < n; j++) {
      if(arr[j] < arr[min_i]) {
        min_i = j;
      }
    }
    swap(arr[i], arr[min_i]);
  }

  cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void bubble_sort(vector<int> &arr, int n) {
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
  // selection_sort(arr, n);
  // bubble_sort(arr, n);
  // insertion_sort(arr, n);
  mergeSort(arr, 0, n - 1);
  return 0;
}