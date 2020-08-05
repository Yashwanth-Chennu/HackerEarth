https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/aman-mrsharma/description/?sort=recent-comments

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int days, count = 0;
	cin >> days;
	while(days--){
		double r, g;
		cin >> r >> g;
		float area = (double)2.0*(double)(22.0/7.0)*r, walk = 100.0*g;
		
	if(area <= walk)
		count++;
	}
	cout << count;
	return 0;
}


   
