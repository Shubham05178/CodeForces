/**
Problem - https://codeforces.com/contest/1650/problem/C
Author - Shubham Nagaria
Date - 10th March 2022
**/

#include <bits/stdc++.h>
using namespace std;
bool comp(vector<long int>a,vector<long int>b){
	if(a[1]<b[1])
		return true;
	return false;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	long int t;
	long int n ,m,i,x,w,j;
	cin>>t;
	while(t--){
		cin>>n>>m;
		i = 0;
		vector<vector<long int>>p;
		while(i<m){
			cin>>x>>w;
			p.push_back({x,w,i});
			i++;
		}
		sort(p.begin(),p.end(),comp);
		int pp = n*2;

		vector<vector<long int>>arr(p.begin(),p.begin()+pp);
		sort(arr.begin(),arr.end());
		long int sum=0;
		for(auto ii : arr){
			sum += ii[1]; 
		}
		cout<<sum<<endl;
		i =0; j = arr.size()-1;
		while(i<j)
			cout<<arr[i++][2]+1<<" "<<arr[j--][2]+1<<endl;
		cout<<endl;
	}
} 
