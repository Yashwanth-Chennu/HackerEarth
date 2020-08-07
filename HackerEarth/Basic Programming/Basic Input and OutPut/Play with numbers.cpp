https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/play-with-numbers-2/description/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int size, q;
	scanf("%d%d", &size, &q);
	long a[size], sum =0, value;
	for(int i  = 0; i < size; i++){
		scanf("%ld", &value);
		sum += value;
		a[i] = sum;
	}
	while(q--){
		int l, r;
		scanf("%d%d", &l, &r);
		long mean = 0;
		r = r -1;
		l = l -1;
		if(l == 0) mean = (a[r])/(r - l + 1);
		else mean = (a[r] - a[l - 1])/(r - l + 1);
		printf("%ld\n", mean);
	}

	return 0;
}

   
