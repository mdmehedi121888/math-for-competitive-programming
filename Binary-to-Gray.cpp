#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int toBinary(int x){
    int res=0 ;
    while(x>0){
        res^=x;
        x=x>>1;
    }
    return res;
}
void solve(){
 int x;cin>>x;
 cout<<toBinary(x);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}