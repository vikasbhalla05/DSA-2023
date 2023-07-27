#include <iostream>
#include <vector>
using namespace std;

int sumFirstN(int n);

int main() {
  
    int x;
    cin >> x;

    cout<<sumFirstN(x)<<endl;

    return 0;
}

int sumFirstN(int n) {
    // Write Your Code Here
    // if(n==1) return 1;
    // return sumFirstN(n-1)+n;
    return n*(n+1)/2;
}