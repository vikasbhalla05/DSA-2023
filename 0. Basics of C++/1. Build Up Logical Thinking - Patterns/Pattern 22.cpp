#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter row\n";
  cin >> n;

  for(int i=0;i<2*n-1;i++){
      for(int j=0; j<2*n-1; j++){

          // all distances
          int top = i;
          int bottom = 2*n-i-2;
          int left = j;
          int right = 2*n-j-2;

          // the minimum of all the distances
          cout<<(n-min(min(left, right), min(top, bottom)));
      }
      cout<<"\n";
  }
}

// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4