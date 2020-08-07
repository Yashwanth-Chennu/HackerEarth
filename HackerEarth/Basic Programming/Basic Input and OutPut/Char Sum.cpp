https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/char-sum-2d3a6ab5/description/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int l = s.size(), sum = 0;
	for(int i = 0; i < l; i++){
		sum += (s[i] - 'a' + 1);
	}
	cout << sum ;

	return 0;
}


   
