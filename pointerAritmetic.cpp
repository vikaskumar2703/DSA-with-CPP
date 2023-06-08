#include<iostream>
#include<iterator>
using namespace std;

int main(){
short value{7};
short *ptr{&value};
cout<<ptr<<"\n";
cout<<ptr+1<<"\n";
cout<<ptr+2<<"\n";
	return 0;
}
