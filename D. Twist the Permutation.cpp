/**
Problem - https://codeforces.com/contest/1650/problem/D
Author - Shubham Nagaria
Date - 9th March 2022
**/

#include <bits/stdc++.h>
using namespace std;
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long int t,x,c,i,count;
	cin>>t;
	
	while(t--){
		queue<int>q;
		cin>>c;
		i = c;
		while(i--){
			cin>>x;
			q.push(x);
		}
		int count =0;
		vector<int> res(c,0);
		i = c;
		while(i > 1){
			count = 0;
			while(i != q.front()){
				q.push(q.front());
				q.pop();
				count++;
			}
			count++;
			q.pop();
			res[i-1] = count % i;
			i--;
    }
	for(int i : res)
		cout<<i<<" ";
	cout<<endl;
	}
}
