https://github.com/Yashwanth-Chennu

Problem Statement: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/description/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	scanf("%d", &size);
	long number =0, value;
	for(int i = 0; i < size; i++){
		scanf("%d", &value);
	}

	if(value%10 == 0)
		printf("Yes");
	else
		printf("No");
	return 0;
}

   
