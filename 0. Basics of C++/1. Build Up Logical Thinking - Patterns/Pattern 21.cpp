#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter row\n";
  cin >> n;

  for(int i=0;i<n;i++){
      for(int j=0; j<n; j++){
          if((j==0 || j==n-1) || (i==0 || i==n-1))
              cout<<"* ";
          else
              cout<<"  ";
      }
      cout<<"\n";
  }
}

// * * * * * * 
// *         * 
// *         * 
// *         * 
// *         * 
// * * * * * * 