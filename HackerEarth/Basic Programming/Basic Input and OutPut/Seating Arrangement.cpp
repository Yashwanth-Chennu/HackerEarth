https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/

Solution:
#include<bits/stdc++.h>
using namespace std;
void solve(){
	int seatNo, OppositeSeat;
	string seatType;
	cin >> seatNo;
	switch(seatNo%6){
		case 0:
		case 1: seatType = "WS";
			break;
		case 2:
		case 5: seatType = "MS";
			break;
		case 3: 
		case 4: seatType = "AS";
			break;
	}
	if(seatNo%12 == 0)
		OppositeSeat = seatNo - 11;
	else 
		OppositeSeat = 12*(seatNo/12 + 1) - seatNo%12 + 1;
	cout << OppositeSeat << " " << seatType << endl;

}

int main(){
	int test;
	cin >> test;
	while(test--){
		solve();
	}
}