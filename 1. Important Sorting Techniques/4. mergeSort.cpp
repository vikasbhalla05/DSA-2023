#include <iostream>
#include <vector>
using namespace std;

void mergeSort(int low, int high, vector<int> &nums);
void merge(vector<int> &arr, int low, int mid, int high);

int main() {
  int n;

  cout << "Enter the number of elements: ";
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (auto it : arr) {
    cout << it << " ";
  }
  mergeSort(0, n - 1, arr);

  for (auto it : arr) {
    cout << it << " ";
  }

  return 0;
}

void mergeSort(int low, int high, vector<int> &arr) {
  if (low >= high)
    return;

  int mid = (low + high) / 2;
  mergeSort(low, mid, arr);
  mergeSort(mid + 1, high, arr);

  merge(arr, low, mid, high);
}

void merge(vector<int> &arr, int low, int mid, int high) {

  vector<int> temp;

  int left = low;
  int right = mid + 1;

  while (left <= mid && right <= high) {

    if (arr[left] <= arr[right]) {
      temp.push_back(arr[left]);
      left++;
    } else {
      temp.push_back(arr[right]);
      right++;
    }
  }

  while (left <= mid) {
    temp.push_back(arr[left]);
    left++;
  }

  while (right <= high) {
    temp.push_back(arr[right]);
    right++;
  }

  for (int i = low; i <= high; i++) {
    arr[i] = temp[i-low];
  }
}
