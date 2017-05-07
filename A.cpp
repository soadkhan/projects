#include<bits/stdc++.h>
using namespace std  ;

typedef long long int ll ;
#define inll(a) scanf("%lld"  , &a)

int main(){
   // freopen("in.txt" , "r" , stdin) ;
    ll n ;
    ll be[1100] ;
    ll af[1100] ;

    ll tr = LONG_LONG_MAX ;

    ll un = 0 ;

    inll(n) ;
    for(ll i  =0  ; i< n ; i++){
        inll(be[i]) ; inll(af[i]) ;
        if(be[i] != af[i]){
            cout<<"rated"<<endl;
            return  0 ;
        }
        if(tr - af[i] < 0 ){
            un = 1 ;
        }
        tr = af[i] ;
    }
    if(un == 1)
        cout<<"unrated"<<endl ;
    else
        cout<<"maybe"<<endl;

    return  0 ;
}
