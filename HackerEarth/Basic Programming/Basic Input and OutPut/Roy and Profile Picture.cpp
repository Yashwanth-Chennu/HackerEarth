https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/submissions/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int l, N;
	cin >> l >>N;
	while(N--){
		int w, h;
		cin >> w >> h;
		if(w < l || h < l)
			cout << "UPLOAD ANOTHER"<< endl;
		else if(sqrt(w * h) == w)
			cout <<"ACCEPTED" << endl;
		else 
			cout << "CROP IT" << endl ;
	}
}