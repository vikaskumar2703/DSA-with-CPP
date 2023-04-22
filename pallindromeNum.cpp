#include<iostream>
using namespace std;

int main(){
        int n; 
    cout<<"enter a no"<<endl;
    cin>> n ;
    int originalNum=n;
    int remainder;//add this remainder to after multiplying 
    // with 10^i, increment i starting from 0 
    int result=0,i=to_string(n).length()-1;
    while(n>0){
        remainder= n%10;
        result += remainder*pow(10,i) ;
        i--;
        n/=10;
    }
    if(result==originalNum){
    cout<<"Pallindrome number : ttrue";}
    else{
        cout<<"Pallindrome number : false";}
    return 0;
}