#include <iostream>
using namespace std;

int main() {

  int n, prevJ = 0, count=0;
  cout << "Enter row\n";
  cin >> n;
    

  for (int i = 0; i < n; i++) {
    for(int j=0; j<=i; j++){
        count++;
        cout<<count<<" ";
    }
      
    cout << "\n";
  }

}

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 