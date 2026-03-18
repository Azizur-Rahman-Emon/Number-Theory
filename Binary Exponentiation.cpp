
const ll mod = 1e9+7 ;

ll binExpoIter(ll x , ll n){
    ll res = 1 ; 
    while(n>0){
        if(n&1){
            res *= x ; res %= mod ;
        }
        x *= x ; x %= mod ; n >>= 1 ;
    }
    return res ;
}
