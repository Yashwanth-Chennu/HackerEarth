https://github.com/Yashwanth-Chennu

Problem Statement:#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int len = s.size(), code = 0;
	for(int i = 0; i < len; i++)
		code += (i + 1) *((int)(s[i] - '0'));
	if(code%11 == 0)
		cout <<"Legal ISBN";
	else
		cout <<"Illegal ISBN";
	return 0;
}

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int len = s.size(), code = 0;
	for(int i = 0; i < len; i++)
		code += (i + 1) *((int)(s[i] - '0'));
	if(code%11 == 0)
		cout <<"Legal ISBN";
	else
		cout <<"Illegal ISBN";
	return 0;
}

   
