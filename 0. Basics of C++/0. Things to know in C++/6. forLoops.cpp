#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */

        int n;
        cin >> n;
        int res;
        int n1=1,n2=1,n3;

        for(int i=0; i<n-2; i++){
                n3 = n1+n2;
                n1 = n2;
                n2 = n3;
        }

        if(n==1 || n==2)
                cout << 1 <<endl;    
        else
                cout << n3 <<endl;    
}