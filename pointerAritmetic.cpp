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
// pointer arithmetic conveys that integer adition to a pointer is possible.
// just that adding +1 to integer pointer will result into the address
//ext integer in memory after ptr. ptr - 1 is the address of the previous integer before ptr. 