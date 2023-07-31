#include <iostream>
#include <vector>
using namespace std;

vector<int> insertionSort(int n, vector<int> &nums);

int main() {
  int n;

  cout << "Enter the number of elements: ";
  cin >> n;

  vector<int> nums(n);
  vector<int> ans;

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  ans = insertionSort(n, nums);

  for (auto it : ans) {
    cout << it << " ";
  }

  return 0;
}

vector<int> insertionSort(int n, vector<int> &nums) {
  for (int i = 1; i < n; i++) {

      int j=i;

      while(j>0 && nums[j]<nums[j-1]){
          int temp = nums[j];
          nums[j] = nums[j-1];
          nums[j-1] = temp;

          j--;
      }
  }

  return nums;
}
