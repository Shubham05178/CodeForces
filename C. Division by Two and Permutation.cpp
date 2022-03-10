/**
Problem - https://codeforces.com/contest/1624/problem/C
Author - Shubham Nagaria
Date - 11th March 2022
**/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,x,front,i;
    bool ps;
    cin>>t;
    while(t--){
        cin>>n;
        ps= false;
        vector<bool> p(n+1, false);
        
        queue<int>s;
        
        i = n;
        
        while(i--){
            cin>>x;
            if(x>=1 && x<=n && !p[x]){
                p[x]=true;
            }
            else
                s.push(x);
        }

        while(s.size()>0){
            front = s.front();
            s.pop();
            while(front){
                front/=2;
                if(front>0 && front<=n && !p[front]){
                    p[front]=true;
                    break;
                }
            }
        }
        for(int i = 1; i <=n ;i++){
            if(!p[i]){
                ps=true;
                break;
                }
            }

        if(ps) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}
