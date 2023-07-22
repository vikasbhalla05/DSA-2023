#include <iostream>
using namespace std;

int main() {

  int n,startAlps='A';
  cout << "Enter row\n";
  cin >> n;
    

  for (int i = 0; i < n; i++) {
    for(int j=0; j<=i; j++){
        cout<<(char)(startAlps+j)<<" ";
    }
      
    cout << "\n";
  }

}

// A 
// A B 
// A B C 
// A B C D 
// A B C D E 