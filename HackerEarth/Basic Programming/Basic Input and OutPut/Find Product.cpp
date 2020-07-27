https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/submissions/

Solution: 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin >> size;
	long long arr[size];
	for(int i = 0; i < size; i++)	
		cin >> arr[i];
	long long answer = 1, i, p =1000000007;
	for(i = 0; i < size; i++)	
		answer = ((answer%p) * (arr[i]%p))%p;
	cout << answer << endl;
}