#include <iostream>
using namespace std;

bool palindrome(int n) {
  // Write your code here

  int ans, temp = n;

  while (temp > 0) {
    int rem = temp % 10;
    ans = ans * 10 + rem;
    temp /= 10;
  }

  return n == ans;
}

int main() {

  int n;
  cout << "Enter row\n";
  cin >> n;

  if (palindrome(n) == true) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
  return 0;
}

// Example 2:
// Input: N = 234
// Output: 432
// Explanation: The reverse of 234 is 432