https://github.com/Yashwanth-Chennu

Problem Statement: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/duration/description/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int sh, sm, eh, em, WH, WM;
		cin >> sh >> sm >> eh >> em;
		WH = eh - sh - 1;
		WM = (60 - sm) + em;
		if(WM >= 60){
			WM = WM - 60;
			WH ++;

		}
		cout <<WH<< " " << WM << endl;
			
	}

	return 0;
}

   
