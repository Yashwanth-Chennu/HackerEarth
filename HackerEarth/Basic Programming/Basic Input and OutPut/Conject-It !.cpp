https://github.com/Yashwanth-Chennu

Problem Statement:

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){

	int test;
	cin >> test;
	while(test--){

		int number;
		cin >> number;
		while(number > 1){
			if(number%2 == 0)
				number = number/2;
			else
				number = 3 * number + 1;

		}
		cout << "YES" << endl;

	}

	return 0;
}