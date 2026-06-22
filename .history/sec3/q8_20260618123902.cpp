// Reverse Number
#include<iostream>
using namespace std;
int main(){
    int n,reverse=0;
    cout << "Enter a Number:";
    cin >> n;
    while(n!=0){
    n = n%10;
    reverse = reverse * 10 + n; 
        n= n / 10;
    
    }
    cout << "Reverse Number: "<< reverse<< endl;

    return 0;

       

}