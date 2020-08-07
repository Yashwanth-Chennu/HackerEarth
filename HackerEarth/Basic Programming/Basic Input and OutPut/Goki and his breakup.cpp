https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/tds-and-his-breakup/description/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, x;
	cin >> n >> x;
	while(n--){
		int s;
		cin >> s;
		if(s >= x)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

   
