#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool isPower(int n){
if(n==0)
return false;
return ((n&(n-1))==0);
}
void solve(){
 int n;cin>>n;
 cout<<isPower(n);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}