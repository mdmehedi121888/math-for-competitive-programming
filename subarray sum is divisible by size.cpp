#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void subarraySum(int ar[],int n){
    vector<int>presum(n),rem(n,-1);
    presum[0]=ar[0];
    if(presum[0]%n==0){
        cout<<0<<" "<<0;
        return;
    }
    rem[presum[0]%n]=0;
    for(int i=1;i<n;++i){
        presum[i] = presum[i-1]+ar[i];
        int r = presum[i]%n;
        if(r==0) {
            cout<<0<<" "<<i;
            return;
        }
        if(rem[r]!=-1){
            cout<<rem[r]+1<<" "<<i;
            return;
        }
        rem[r]=i;
    }
}
void solve(){
 int n;cin>>n;
 int ar[n];
 for(auto &i:ar)cin>>i;
 subarraySum(ar,n);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}