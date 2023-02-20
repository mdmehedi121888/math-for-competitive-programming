#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector < int > primes; /*এখানে primes ভেক্টরে sieve এর মাধ্যমে প্রাইম নাম্বারগুলো জেনারেট করে নেওয়া হয়েছে  */


void segmentedSieve(ll L, ll R)
{
    int n = sqrt(R);
    vector<bool>Prime(n+1,true);
    for(ll i=2;i<=n;++i){
        if(Prime[i]==true){
        primes.push_back(i);
        for(ll j=i*i;j<=n;++j){
            Prime[j]=false;
        }
        }
        
    }
 bool isPrime[R-L+1];
 for(int i=0 ; i<=R-L+1 ; i++)
    isPrime[i]=true;
    
 if(L==1)
    isPrime[0]=false;
    
 for(int i=0 ; primes[i]*primes[i]<=R ; i++)
 {
    ll curPrime=primes[i];
    ll base=curPrime*curPrime;
    if(base<L)
    {
       base=((L+curPrime-1)/curPrime)*curPrime;
    }
    for(ll j=base ; j<=R ; j+=curPrime)
    isPrime[j-L]=false;
 }
 for(int i=0 ; i<=R-L ; i++)
 {
    if(isPrime[i]==true)
        cout<<L+i<<endl;
 }
 cout<<endl;
}
int main(){
    ll l,h;cin>>l>>h;
    segmentedSieve(l,h);
}