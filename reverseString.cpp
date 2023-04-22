#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string str1,str2;
    int len=0, i,j,flag=0;
    cout<< "enter a string\n";
    cin>>str1;
    
    len = str1.length()-1; 
    //this is done for allowing string traversal from last term
    cout << "reverse of string  \n";
    for(i=len;i>=0;i--){
        cout<<str1[i];
        
    }
    
	return 0;
}