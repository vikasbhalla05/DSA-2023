int calcGCD(int n, int m){
    // Write your code here.

    int min, max,ans;

    if(n>m){
        min = m;
        max = n;
    } else{
        min = n;
        max = m;
    }

    while(max%min>0) {
        int temp = min;
        min = max%min;
        max = temp;
    };

    return min;
}

//