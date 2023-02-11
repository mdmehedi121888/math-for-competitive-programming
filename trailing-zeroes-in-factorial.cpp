#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
 int fact;cin>>fact;
 int ans=0;
 for(int i=5;i<=fact;i*=5){
    ans+=fact/i;
 }
 cout<<ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}