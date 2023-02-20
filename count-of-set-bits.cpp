#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
 int n;cin>>n;
 int cnt=0;
 while(n>0){
    if(n&1==1)++cnt;
    n=n>>1;
 }
 cout<<cnt<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}