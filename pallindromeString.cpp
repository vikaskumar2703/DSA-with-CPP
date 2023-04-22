#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[20],str2[20];
    int len=0, i,j,flag=0;
    cout<< "enter a string";
    gets(str1);
    len = strlen(str1)-1;
    for(i=len,j=0;i>=0;i++,j--){
        str2[j]=str1[i];
    }
    if(strcmp(str1,str2)){ 
        flag=1;}
    if(flag==1){
        cout<< str1 << "is pallindrome";
    }
    else{
        cout<<str1 << "is not pallindrome ";
    }
    return 0;
}