// Sum of digits.
#include<iostream>
using namespace std;
int main(){
    int num=9876,sum =0;
    while(num >0){
        int digit = num % 10;
        sum += digit;
        num = num/10;
       
        

    

    }
     cout << sum;
    return 0;
   
}