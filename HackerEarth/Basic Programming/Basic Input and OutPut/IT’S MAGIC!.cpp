https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/its-magic/description/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	long size, sum = 0, ind = -1, value = INT_MAX;
	cin >> size;
	vector<int> a;
	for(long i = 0; i < size; i++){
		int val;
		cin >> val;
		sum += val;
		a.push_back(val);
	}
	for(long i = 0; i < size; i++){
		if((sum - a[i])%7 == 0){
			if(value > a[i]){
				value = a[i];
				ind = i;
			}
		}
	}
	cout << ind;
	return 0;
}

   
