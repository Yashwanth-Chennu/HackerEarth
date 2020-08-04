https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/lift-queries/description/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test; 
	int a = 0, b = 7, flag;
	while(test--){
		int floor;
		cin >> floor;
		if(abs(floor - a) < abs(floor - b))
			flag =  0;
		else if(abs(floor - a) > abs(floor - b))
			flag = 1;
		else {
			if(a > b) flag = 1;
			if(b > a) flag = 0;
		}


		if(flag == 0){
			cout << "A" << endl;
			a = floor;
		}
		if(flag == 1){
			cout << "B" << endl;
			b = floor;
		}
		
	}
}

   
