#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.

    int maxInt = arr[0];
    for(auto i : arr){
        if(i>maxInt){
            maxInt=i;
        }
    }

    return maxInt;
}
