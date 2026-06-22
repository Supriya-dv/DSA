// Count Digits
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout << "Enter a Number:";
    cin >> n;
    while(n!=0){
    n = n/10;
    count++;
    }
    cout << "Number of Digit: "<< count << endl;

    return 0;

       

}
