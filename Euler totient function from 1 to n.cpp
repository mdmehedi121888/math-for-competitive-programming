#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void totientFunction(int n){
    int ar[n+2];
    for(int i=1;i<=n;++i)
    ar[i]=i;
    cout<<ar[1]<<" ";
    for(int i=2;i<=n;++i){
        if(ar[i]==i){
            ar[i]=i-1;
            for(int j=i*2;j<=n;j+=i){
                ar[j]=(ar[j]/i)*(i-1);
            }
        }
        cout<<ar[i]<<" "; 
    }
}
void solve(){
 int n;cin>>n;
 totientFunction(n);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}