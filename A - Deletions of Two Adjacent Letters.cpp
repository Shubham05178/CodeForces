/**
Problem - https://codeforces.com/contest/1650/problem/A
Author - Shubham Nagaria
Date - 9th March 2022
**/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	char test;
	cin>>test;
	stack<char>st;
	bool pl =false;
	for(char c: s ){
		if(st.empty()){
			if(c==test) {
				pl = true;
				 break;
			}
			st.push(c);
		}
		else{
			st.pop();
		}
	}
	if(pl) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
  }
 return 0;
}
