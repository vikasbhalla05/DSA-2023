#include <iostream>
#include <vector>
using namespace std;

vector<string> printNTimes(int x);

int main() {
  
    int x;
    cin >> x;

    vector<string> v = printNTimes(x);

    for(auto it: v){
        cout<< it<<" ";
    }

    return 0;
}

void createArr(int n, vector<string>& ans, string text){
	if(n==0) return;
	createArr(n-1, ans, text);
	ans.push_back(text);
	return;
}

vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string> ans;
	string textToPush = "Coding Ninjas";
	createArr(n, ans, textToPush);

	return ans;
}

// 4
// Coding Ninjas Coding Ninjas Coding Ninjas Coding Ninjas