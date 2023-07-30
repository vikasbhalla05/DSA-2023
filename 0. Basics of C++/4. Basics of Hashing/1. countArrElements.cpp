vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    vector<int> ans(n,0);

    for(int i=0;i<n;i++){
        if(nums[i]<n+1){
            ans[nums[i]--]++;
        }
    }

    // ans.erase(ans.begin());
    return ans;
}