https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/submissions/

Solution: 

#include <bits/stdc++.h>
using namespace std;
int main(){
	string zoo;
	cin >> zoo;
	int len = zoo.size();
	if(len > 20)	
		cout << "No";
	else{
		int zc = 0, oc = 0;
		for(int i = 0; i < len; i++){
			if(zoo[i] == 'z')
				zc++;
			if(zoo[i] == 'o')
				oc++;
		}
		if(2*zc == oc)	
			cout <<"Yes";
		else	
			cout <<"No";
	}
	return 0;
}