//Sum of even & odd

#include<iostream>
using namespace std;

bool isEven(int n);

int main() {
	// Write your code here
	int n;
	cin >> n;

	int temp = n;

	int evenSum, oddSum;
	while(n>0){
		int digit = n%10;
		if(isEven(digit))
			evenSum +=digit;
		else
			oddSum += digit;

		n/=10;
	}

	cout << evenSum <<" "<<oddSum<<endl;
}

bool isEven(int n){
	if(n%2==0) return true;

	return false;
}