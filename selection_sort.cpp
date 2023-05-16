#include<iostream>
#include<iterator>
using namespace std;
//selection sort
int main(){
	int array[]{2,5,7,3,26};
	int len = static_cast<int>(size(array));
	for (int startIndex{0};startIndex<len;++startIndex){
		int smallestIndex{startIndex};
		for (int currentIndex{startIndex+1};currentIndex<len;++currentIndex){
			if (array[currentIndex]<array[startIndex]){
				smallestIndex=currentIndex;
			}
		}
		swap(array[startIndex],array[smallestIndex]);
	}
	for (int index{0};index<len;++index){
			cout<< array[index]<< ' ';
	}
	cout<< "\n";
	return 0;
}