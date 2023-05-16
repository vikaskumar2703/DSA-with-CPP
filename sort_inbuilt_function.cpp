#include<iostream>
#include <algorithm>
using namespace std;


int main(){
	//demonstration of inbuilt sort function in algorithm module
    int array[]{2,34,5,3,32};
    sort (begin(array),end(array));
    for(int index{0};index<size(array);++index){
    	cout<< array[index]<<' ';
    }

 	cout<< '\n';
	return 0;
}