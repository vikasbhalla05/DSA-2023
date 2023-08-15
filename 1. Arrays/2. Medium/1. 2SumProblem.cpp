#include <unordered_map>


string read(int n, vector<int> book, int target)
{
    // Write your code here.
    // unordered_map<int, int> mpp;
    // for (int i = 0; i < n; i++) {
    //     int num = book[i];
    //     int moreNeeded = target - num;
    //     if (mpp.find(moreNeeded) != mpp.end()) {
    //         return "YES";
    //     }
    //     mpp[num] = i;
    // }
    // return "NO";

    unordered_map<int, int> mpp;

    for(int i=0;i<n;i++){
        int found = book[i];
        int need = target-found;

        if(mpp[need]){
            return "YES";
        }
        mpp[found] = i;
    }

    return "NO";
}
