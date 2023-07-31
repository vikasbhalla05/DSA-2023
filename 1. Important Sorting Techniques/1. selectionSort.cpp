#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(int n, vector<int> &nums);

int main() {
  int n;

  cout << "Enter the number of elements: ";
  cin >> n;

  vector<int> nums(n);
  vector<int> ans;

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  ans = selectionSort(n, nums);

  for (auto it : ans) {
    cout << it << " ";
  }

  return 0;
}

vector<int> selectionSort(int n, vector<int> &nums) {
  for (int i = 0; i < n - 1; i++) {
    int min = i;

    for (int j = i + 1; j < n; j++) {
      if (nums[j] < nums[min]) // Corrected the comparison here
        min = j;
    }

    int temp = nums[i];
    nums[i] = nums[min];
    nums[min] = temp;
  }

  return nums;
}
