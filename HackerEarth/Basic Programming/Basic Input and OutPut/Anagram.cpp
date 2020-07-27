https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/anagrams-651/submissions/

Solution: 
#include<bits/stdc++.h>
using namespace std;
void solve(){
	string a, b;
	cin >> a >> b;
	long long alen = a.size(), blen = b.size(), count = 0;
	for(int i = 0; i < alen; i++)
		for(int j = 0; j < blen; j++)
			if(a[i] == b[j]){
				count++;
				b[j] = ' ';
				break;
			}
	cout << alen + blen - (2*count) << endl;
}
int main(){
	int test;
	cin >> test;
	while(test--){
		solve();
	}
}