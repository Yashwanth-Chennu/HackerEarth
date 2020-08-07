https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/back-to-school-1/description/

Solution: 


#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a >= b && a >= c)
		printf("%d", a);
	else if(b >= c)
		printf("%d", b);
	else	
		printf("%d", c);


	return 0;
}
   
