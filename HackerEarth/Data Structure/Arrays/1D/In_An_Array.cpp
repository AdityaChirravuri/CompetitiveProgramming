#include<bits/stdc++.h>
using namespace std ;
 
#define fast ios_base::sync_with_stdio(false) ; cin.tie( NULL)
#define cases int testcases ;cin>>testcases ; while( testcases-- ) 
#define ENDL "\n"
 
int main(){
	fast ; 
    //Code
    int n , k , x , y ; cin>>n>>k>>x>>y ;
    
    unsigned long long int m[1001] = {0} ; 
    unsigned long long int co = 0 ; 
    for( int i = 0 ; i < n ; i ++ ){
        int temp ; cin>>temp ;
        m[ temp ]++ ;
    }
    
    for( int i = 1 ; i < 1001 ; i++ ){
        if(  m[i] == 0 ) continue ;
        for( int j = i ; j < 1001 ; j++ ){
            if( ( i + j ) % k == x && ( i * j ) % k == y ) { 
                if( i == j )
                co += (( m[i] * ( m[i]-1 ) )/2 ) ;               
                else
                co += (( m[i] * m[j] )) ;
            }
        }
    }
    cout<<( co )<<ENDL ;
}
