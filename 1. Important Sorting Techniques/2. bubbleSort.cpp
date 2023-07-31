#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSort(int n, vector<int> &nums);

int main() {
  int n;

  cout << "Enter the number of elements: ";
  cin >> n;

  vector<int> nums(n);
  vector<int> ans;

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  ans = bubbleSort(n, nums);

  for (auto it : ans) {
    cout << it << " ";
  }

  return 0;
}

vector<int> bubbleSort(int n, vector<int> &nums) {
  for (int i = 0; i < n - 1; i++) {
    int swapCount = 0;

    for (int j = 0; j < n - i; j++) {
      if (nums[j] > nums[j + 1]) {
        int temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;

        swapCount++;
      }
    }

    if (swapCount == 0)
      break;
  }

  return nums;
}
