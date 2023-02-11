#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int fact(int n){
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
void solve(){
 int n;cin>>n;
 cout<<fact(n);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}