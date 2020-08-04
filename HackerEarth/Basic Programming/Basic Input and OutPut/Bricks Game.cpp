https://github.com/Yashwanth-Chennu

Problem Statement: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/bricks-game-5140869d/description/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int number, sum = 0, i = 1;
	cin >> number;
	while(i <= sqrt(number)){
		sum += i;
		if(sum >= number){
			cout << "Patlu";
			break;
		}
		sum += i*2;
		if(sum >= number){
			cout << "Motu";
			break;
		}
		i++;
	}
	return 0;
}
   
