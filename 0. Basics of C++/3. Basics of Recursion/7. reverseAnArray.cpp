#include <iostream>
#include <vector>
using namespace std;

void revArr(int n, vector<int> &nums, vector<int> &ans);
vector<int> reverseArray(int n, vector<int> &nums);

int main() {

  int x;
  cin >> x;

  vector<int> v(x), ans(x);
  for (int i = 0; i < x; i++) {
    int no;
    cin >> no;
    v[i] = no;
  }

  ans = reverseArray(x, v);

  for (auto it : ans) {
    cout << it << " ";
  }

  return 0;
}

void revArr(int n, vector<int> &nums, vector<int> &ans) {
  if (n <= 0)
    return;
  ans.push_back(nums[n - 1]);
  return revArr(n - 1, nums, ans);
}

vector<int> reverseArray(int n, vector<int> &nums) {
  vector<int> ans;
  revArr(n, nums, ans);
  return ans;
}
