// Palindrome Number
#include<iostream>
using namespace std;
int main(){
    int n,palindrome=0;
    cout << "Enter a Number:";
    cin >> n;
    while(n!=0){
    int digit = n%10;
    palindrome = reverse * 10 + digit; 
        n= n / 10;
    
    }
    cout << "Reverse Number: "<< reverse<< endl;

    return 0;

       

}
