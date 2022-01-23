/**
https://codeforces.com/problemset/problem/381/A
**/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int i=0;
    while(i<n){
        cin>>a[i];
        i++;
    }
    i=0;
    int j =n-1;
    int s1=0;
    int s2=0;
    int m =0;
    int k=0;
    while(i<=j){
        if(a[i]>a[j])
            m=a[i++];
        else
            m=a[j--];
    if(k&1){
        s1+=m;
    }
    else{
        s2+=m;
        
    }
    k++;
    }
    cout<<s2<<" "<<s1;
    return 0;
}
