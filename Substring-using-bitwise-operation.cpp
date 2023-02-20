#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void substring(string s){
    int n=s.length();
    int d = pow(2,n);
    for(int i=0;i<d;++i){
        for(int j=0;j<n;++j){
            if((i&(1<<j))!=0)
            cout<<s[j];
        }
        cout<<"\n";
    }
    
}
void solve(){
 string s;cin>>s;
 substring(s);
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}