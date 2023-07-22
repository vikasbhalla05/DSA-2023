#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter row\n";
  cin >> n;
    

  for (int i = 0; i < n; i++) {
    
    // For printing the stars in each row
    for (int j = 0; j<i + 1; j++) {
        int s = (i+j)%2? false:true;
        cout << s <<" ";
    }
    cout << "\n";
  }

}

// 1 
// 0 1 
// 1 0 1
// 0 1 0 1 
// 1 0 1 0 1