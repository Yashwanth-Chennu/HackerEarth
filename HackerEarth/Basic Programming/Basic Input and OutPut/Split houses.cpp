https://github.com/Yashwanth-Chennu

Problem Statement: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/split-house-547be0e9/submissions/

Solution: 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size, flag = 1;
    string s;
    cin >> size;
    cin >> s;
    for(int i = 0; i < size ; i++){
        if(s[i] == 'H' && s[i + 1] == 'H'){
            flag = 0;
            break;
        }
        if(s[i] == '.')
            s[i] = 'B';
    }
    if(flag == 0)
        cout << "NO";
    else{
        cout <<"YES"<< endl;
        cout << s;
    }
    
    
    return 0;
}
