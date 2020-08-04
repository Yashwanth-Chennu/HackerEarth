https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/arithmetic-progression-1-81131fa7/description/

Solution: 


#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int a, b, c, time;
		cin >> a >> b >> c;
		time = abs(2*b - (a + c));
		if(time%2 == 0)
			cout << time/2 << endl;
		else
			cout << time/2 + 1 << endl;
		
	}
}
   
