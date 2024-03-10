#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class type1>
#define ll long long int
#define endl "\n"
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using ordered_multiset = tree <type1, null_type, less_equal <type1>, rb_tree_tag, tree_order_statistics_node_update>;
 //ordered_multiset <ll> kek;(declaration for multiorder set)
// ordered_set o_set;(declaration)
//kek.order_of_key(i);(strictly less then i for multi order set)
//o_set.order_of_key(5) ;(strictly less then i for multi order set)
#define yes cout << "YES\n"
#define no cout << "NO\n"
const ll mxN=1000000;
ll isPrime[mxN];
void sieve()
{
     isPrime[0]=1;
     isPrime[1]=1;
     for(ll i=2;i*i<=mxN;i++)
     {
         if(isPrime[i]==0)
         {
             for(ll j=i*i;j<=mxN;j+=i)
             {
                 isPrime[j]=1;
             }
         }
     }
}

int main()
{
     sieve();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
     ll t;
     cin>>t;

     while(t--)
     {
        ll n;
        cin>>n;
        if(isPrime[n]==0)cout<<"yes\n";
        else cout<<"no\n";
     }

    return 0;
}
