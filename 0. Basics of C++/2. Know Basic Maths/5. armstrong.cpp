#include <iostream>
#include <math.h>
using namespace std;

bool armstrong(int n) {
  // Write your code here

  int temp = n, sum = 0;
  int power = to_string(n).size();

  while (temp > 0) {
    int rem = temp % 10;
    sum += pow(rem, power);
    temp /= 10;
  }
  return n == sum;
}

int main() {

  int n;
  cout << "Enter row\n";
  cin >> n;

  if (armstrong(n) == true) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
  return 0;
}

// Armstrong Numbers
// Example 1:
// Input:153 
// Output: Yes, it is an Armstrong Number
// Explanation: 1^3 + 5^3 + 3^3 = 153

// Input:170 
// Output: No, it is not an Armstrong Number
// Explanation: 1^3 + 7^3 + 0^3 != 170