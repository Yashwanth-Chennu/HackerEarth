https://github.com/Yashwanth-Chennu

Problem Statement:https:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/submissions/

Solution: 
#include<bits/stdc++.h>
using namespace std;
void solve(){
	int c1, c2;
	cin >> c1 >> c2;
	int number, l1 = 0, l2 = 0;
	cin >> number;
	while(number--){
		int a, b;
		cin >> a >> b;
		l1 += a*c1 + b*c2;
		l2 += a*c2 + b*c1;
	}
	
	if(l1 > l2)
		cout << l2 << endl;
	else 
		cout << l1 << endl;
}
int main(){
	int test;
	cin >> test;
	while(test--){
		solve();
	}
}
