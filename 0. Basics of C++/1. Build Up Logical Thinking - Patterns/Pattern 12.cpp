#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter row\n";
  cin >> n;
    

  for (int i = 0; i < n; i++) {
    
    // For printing the stars in each row
    for(int j=0; j<i+1;j++){
        cout<<j+1<<" ";
    }

    for(int j=0; j<2*n-2*(i+1); j++){
        cout<<"  ";
    }

    for(int j=i+1; j>0;j--){
        cout<<j<<" ";
    }
      
    cout << "\n";
  }

}

// 1                     1 
// 1 2                 2 1 
// 1 2 3             3 2 1 
// 1 2 3 4         4 3 2 1 
// 1 2 3 4 5     5 4 3 2 1 
// 1 2 3 4 5 6 6 5 4 3 2 1 