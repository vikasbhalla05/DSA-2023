// Brute Force

#include <iostream>
#include <vector>
using namespace std;

vector<long long> factorialNumbers(long long n);
long long findFactorial(long long n);

int main() {
  
    long long x;
    cin >> x;
 
    vector<long long> v = factorialNumbers(x);
    for(auto it:v){
        cout<<it<<endl;
    }

    return 0;
}

// find the factorial of a number
long long findFactorial(long long n){

    if(n==1) return 1;
    return findFactorial(n-1)*n;
}

// create the vector by reference
void recFunction(long long fact, vector<long long>& v, int no){
    long long factorialvalue = findFactorial(fact);
    if(factorialvalue>no) return;

    v.push_back(factorialvalue);
    recFunction(fact+1, v, no);
}

vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long> v;
    long long fact=1;
    recFunction(fact, v, n);
    return v;
}


// optimal

long long f=1,x=2;
vector<long long> v;
vector<long long> factorialNumbers(long long n)
{
    if(f>n)
    {
        return v;
    }
    else
    {
        v.push_back(f);
        f*=x;
        x++;
        factorialNumbers(n);
    }
    return v;
}