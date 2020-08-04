https://github.com/Yashwanth-Chennu

Problem Statement: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/friends-relationship-1/description/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int number;
		cin >> number;
		for(int i = 1; i <= number; i++){
			for(int j = 1; j <= i; j++)
				cout << "*";
			for(int j = i + 1; j <= number*2 - i; j++)
					cout << "#";
			for(int j = 1; j <= i; j++)
				cout << "*";
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}

   
