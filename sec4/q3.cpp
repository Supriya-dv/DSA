// Print all even numbers from 1 to N.
#include<iostream>
using namespace std;
int main(){
     int n =10;
     for( int i=1;i<=n;i++){
        if(i%2==0){
            cout << i << ":" <<"this is a prime number" << endl ;
        
        }
        else{
            cout << i << ":" << "not prime" << endl;
        }
     }
     return 0 ;
}