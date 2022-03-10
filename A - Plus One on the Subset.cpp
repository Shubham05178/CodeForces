/**
* Problem - https://codeforces.com/contest/1624/problem/A
* Author - Shubham Nagaria
* Date - 11th March 2022
**/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	long long int mini,maxi,x,n,t;
	cin>>t;
	
	while(t--){
		cin>>n;
	
		maxi = INT_MIN;
		mini = INT_MAX;
	
		while(n--){
			cin>>x;
	
			maxi = max(maxi,x);
			mini = min(mini ,x);
		}
		cout<<maxi-mini<<endl;
  }
 return 0;
}
