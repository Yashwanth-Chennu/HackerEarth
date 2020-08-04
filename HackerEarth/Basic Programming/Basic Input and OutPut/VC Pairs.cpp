https://github.com/Yashwanth-Chennu

Problem Statement:https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/vc-pairs/description/

Solution: 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int size, count = 0;
		cin >> size;
		string s;
		cin >> s;
		for(int i = 0; i < size; i++){
			if(s[i] >= 'a' && s[i] <= 'z'){
				if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o'&& s[i] != 'u'){
					if(s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'i' || s[i+1] == 'o'|| s[i+1] == 'u'){
					count++;
					i++;
					
				}
					
				}

			}
		}
		cout << count << endl;

	}
	return 0;
}



   
