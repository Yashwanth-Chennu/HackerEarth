https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/a-movement-1/description/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int  number;
	scanf("%d", &number);
	if(number%5 == 0)
		cout << number/5;
	else
		cout << number/5 + 1;
	return 0;
}