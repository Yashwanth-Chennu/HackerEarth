https://github.com/Yashwanth-Chennu

Problem Statement:https:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/submissions/

Solution: 
#include <iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	int len = s.size(), flag = 1;
	for(int i = 0; i < len/2; i++){
		if(s[i] != s[len - 1 -i]){
			flag = 0;
			break;
		}
	}
	if(flag == 1)
		cout << "YES";
	else
		cout << "NO";

}

