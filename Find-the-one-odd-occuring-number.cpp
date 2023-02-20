#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
 int n;cin>>n;
 int res=0;
 for(int i=0;i<n;++i){
    int x;cin>>x;
    res^=x;
 }
 cout<<res<<endl;

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}