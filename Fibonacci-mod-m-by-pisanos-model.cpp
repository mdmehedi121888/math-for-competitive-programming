// pisanos period:
//           fib: 0 1 1 2 3 5 8 13 21 34 55 ...
//     fib mod 2: 0 1 1 0 1 1 0 1   1  0  1 ...
//     fib mod 3: 0 1 1 2 0 2 2 1   0  1  1 2 0 ...
//     repeated each sequence we look it until we found 0 and 1 

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int fiboMod(int n,int m){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    int p;
    for(int i=2;i<=m*m;++i){
        v.push_back((v[i-1]+v[i-2])%m);
        if(v[i]==1 && v[i-1]==0){
            p= i-1;
            //cout<<p<<endl;
            break;
        }
    }
    //for(auto i:v)cout<<i<<" ";
    return v[n%p];
}
void solve(){
 int n,m;cin>>n>>m;
 cout<<fiboMod(n,m);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}