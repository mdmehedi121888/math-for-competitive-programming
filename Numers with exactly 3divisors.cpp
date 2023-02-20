// prime number square have 3divisors
// 4 9 25 

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void divisors(int n){
    int d = sqrt(n);
    vector<int>v(d+1);
    for(int i=2;i*i<=d;++i){
        if(v[i]==0){
            for(int j=i*i;j<=d;j+=i){
                v[j]=1;
            }
        }
    }
    //for(auto i:v)cout<<i<<" ";
    for(int i=2;i<=d;++i){
        if(v[i]==0) cout<<i*i<<" ";
    }
    cout<<endl;
}
void solve(){
 int n;cin>>n;
 divisors(n);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}