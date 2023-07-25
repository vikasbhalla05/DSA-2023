#include <iostream>
using namespace std;

int main() {
    int count=0, temp=n;

	while(temp>0){
		int rem = temp%10;
		if(rem>0 && n%rem==0) count++;
		temp /=10;
	}

    cout<<count<<endl
	return 0;
}

// No or digits in 'n' that  evenly divides 'n'