#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
 int n;cin>>n;
 int cnt=2;
 for(int i=2;i*i<=n;++i){
    if(n%i==0){
        if(i!=(n/i))cnt+=2;
        else ++cnt;
    }
 }
 cout<<cnt<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}