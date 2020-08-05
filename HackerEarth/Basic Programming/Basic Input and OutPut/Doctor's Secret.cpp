https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/doctors-secret/description/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int l, n;
	cin >> l >> n;
	if(l <=  23 && (n >= 500 && n <= 1000))
		cout << "Take Medicine";
	else
		cout << "Don't take Medicine";
	return 0;
}



   
