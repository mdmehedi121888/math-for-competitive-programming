// n a joto digit thakuk take one digit banate hobe..
// n=3749833 -> n=37 -> n=10 -> n=1
int goodNumber(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(sum>=10)
    goodNumber(sum);
    else
    return sum;
}

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
 int n;cin>>n;
 cout<<goodNumber(n)<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
}