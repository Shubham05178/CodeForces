//https://codeforces.com/problemset/problem/750/A

#include <iostream>

using namespace std;

int main()
{
    
    int h, k;
    cin>>h;
    cin>>k;
    k= 240-k;
    int l=0;
    int mid,ans=0;
    while(l<=h){
        mid = (l+h)>>1;
        int cal = 5*((mid*(mid+1))>>1);
        if(cal<=k){
            ans =mid;
            l=mid+1;
        }
        else
            h= mid-1;
    }
    cout<<ans;
    return 0;
}
