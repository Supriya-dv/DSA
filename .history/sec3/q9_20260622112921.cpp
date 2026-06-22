// Palindrome Number
#include<iostream>
using namespace std;
int main(){
    int num,OriginalNum,reverse=0,digit;
    cout << "Enter a Number: " << endl;
    cin >> num;
    OriginalNum= num;
    while(num!=0){
        digit= num % 10;
        reverse= reverse*10+digit;
        num=num/10;
    }

}
