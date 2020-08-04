https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/description/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int x = 0, y = 0, len = s.size();
	for(int i = 0; i < len; i++){
		if(s[i] == 'L')
			x--;
		if(s[i] == 'R')
			x++;
		if(s[i] == 'U')
			y++;
		if(s[i] == 'D')
			y--;
	}
	cout << x << " " << y;
}


   
