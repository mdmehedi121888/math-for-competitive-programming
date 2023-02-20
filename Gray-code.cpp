#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int gray(int x){
    return x^(x>>1);
}
void solve(){
 int x;cin>>x;
 cout<<gray(x);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}