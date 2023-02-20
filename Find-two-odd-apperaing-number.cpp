// 3 3 4 4 8 32
// first a sobgular xor bahir korte hobe tahole 32 er 8 er xor 40 bahir hobe...
// then 40 er last set bit bahir korte hobe ..eijonno 40 & ~(40-1) = 8 ..40 er last set bit 8
// array er value er sathe 8 and korte hobe jader result 1 hobe tara ekta group er 0 gula onno group 
// ek group a 32 a bahir hobe...onno group a 8 bahir hobe..

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
 int n;cin>>n;
 int ar[n];int num=0;
 for(int i=0;i<n;++i){
    int x;cin>>x;
    ar[i]=x;
    num^=x;
 }
 int setbit = num&(~(num-1));
 //cout<<num<<" "<<setbit<<endl;
 int res1=0,res2=0;
 for(int i=0;i<n;++i){
    if((ar[i]&setbit) == 0) res1^=ar[i];
    else res2^=ar[i];
 }
 cout<<res1<<" "<<res2<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}