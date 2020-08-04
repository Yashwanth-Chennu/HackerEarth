https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/two-strings-4/description/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		string a, b;
		cin >> a >> b;
		int s1[26] = {0}, s2[26]={0}, flag =1 ;
		if(a.size() == b.size()){
			int len = a.size();
			for(int i = 0; i < len; i++){
				s1[a[i] - 97]++ ;
				s2[b[i] - 97]++ ;
			}
			for(int i = 0; i < 26; i++){
				if(s1[i] != s2[i]){
					flag = 0;
					break;
				}
				flag = 1;

			}
			if(flag == 1) cout << "YES" << endl;
			else cout <<"NO" << endl;
		}else{
			cout << "NO" << endl;
		}
	}

	return 0;
}