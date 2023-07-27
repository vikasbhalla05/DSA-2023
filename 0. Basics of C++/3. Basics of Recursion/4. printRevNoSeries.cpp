#include <iostream>
#include <vector>
using namespace std;

vector<int> printNos(int x);

int main() {
  
    int x;
    cin >> x;

    vector<int> v = printNos(x);

    for(auto it: v){
        cout<< it<<" ";
    }

    return 0;
}

void createArr(int x, vector<int>& v) {

    // get the black vector by reference
    if(x==0) return; // return if count goes to 0
    
    v.push_back(x); // push the digits 5->4->3->2->1
    createArr(x-1, v); // create recursive cycle
    
    return;
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> v; // create a blank vector
    
    createArr(x, v); // create recursive functin
    
    return v;
    
}

// 8
// 8 7 6 5 4 3 2 1