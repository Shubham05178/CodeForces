/**
 Problem - https://codeforces.com/contest/1650/problem/B
 Author - Shubham Nagaria
 Date - 9th March 2022
**/

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int l,r,a,p,k,ans,j,maxi;
	while(t--){
		maxi = INT_MIN;
		cin>>l>>r>>a;
		maxi = max(maxi,(r/a)+(r%a));
		if(r>l)
		maxi = max(maxi,(r-1)/a + (r-1)%a);
		j = (r/a)*a;
		if(j>l)
		maxi = max(maxi , (j-1)/a + (j-1)%a);
		if(j>=l)
		maxi = max(maxi, (j/a)+(j%a));
		cout<<maxi<<endl;
	}
}
