#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string str1;
	char target;
	char vowels[]={'A','E','I','O','U','a','e','i','o','u'};
	cout<< "enter a string\n";
	int exists=0;
    cin>>str1;
    int len=sizeof(vowels) / sizeof(*vowels);
    cout << "first alphabet of string  \n";
    target=str1[0];
    for(int i=0;i<len;i++){
    	if(target==vowels[i]){
    		exists=1;
    		break;
    	}
    }
    if(exists){cout<<"vowel";}
    else{cout<<"consonant";}
	return 0;
}