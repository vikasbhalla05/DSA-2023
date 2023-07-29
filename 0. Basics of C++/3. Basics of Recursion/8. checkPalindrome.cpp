#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string &str);

int main() {

  string str;
  cin >> str;

  cout << isPalindrome(str) << endl;

  return 0;
}

int l = 0;

bool isPalindrome(string &str) {
  int n = str.size();
  if (l >= (n / 2)) {
    return true;
  } else {
    if (str[l] == str[n - l - 1]) {
      l++;
      return isPalindrome(str);
    } else {
      return false;
    }
  }
}
