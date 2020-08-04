https://github.com/Yashwanth-Chennu

Problem Statement: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cartag-948c2b02/description/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int len = s.size(), flag = 0;

		if((s[0] + s[1])%2 == 0)
			if(s[2] != 'A'&& s[2] != 'E' && s[2] != 'I' && s[2] != 'O' && s[2]!= 'U' && s[2] != 'Y')
				if((s[3] + s[4])%2 == 0 && (s[4] + s[5])%2 == 0 && (s[7] + s[8])%2 == 0)
						flag = 1;


		if(flag == 1)	
		 	cout << "valid";
		else
			cout << "invalid";

	return 0;
}


   
