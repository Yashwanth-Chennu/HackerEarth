https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/submissions/

Solution: 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int l, r, k, count = 0;
	cin >> l >> r >> k;
	for(int i = l; i <= r; i++)
		if(i%k == 0)
			count++;
	cout << count << endl;

	return  0;
}
