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

int main() {
  vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
  int n = arr.size();
  cout << "Before sorting: " << "\n";
  for (int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  selection_sort(arr, n);
  return 0;
}

// TODO
// sorting in different order
// sort characters a, b, c, ..
// sort words