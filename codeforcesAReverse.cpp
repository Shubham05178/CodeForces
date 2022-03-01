/**
 * https://codeforces.com/problemset/problem/1638/A
 * Author - Shubham Nagaria
 * Date - 1st March 2022
 **/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()  {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    int x =0, n,j;
    while(t--){
        cin>>n;
        x=0; 
        int arr[n];
        while(x<n) cin>>arr[x++];
        x=0;
        while(x<n && arr[x]==x+1)x++;
        if(x<n){
            j = x+1;
            while(j<n && arr[j]!=x+1)
                j++;
            while(x<j){
                arr[x]= arr[x]^arr[j];
                arr[j]= arr[x]^arr[j];
                arr[x]=arr[x]^arr[j];
                x++;
                j--;
            }
        }
        for(int i :arr) cout<<i<<" ";
        cout<<endl;
        }
    return 0;
}