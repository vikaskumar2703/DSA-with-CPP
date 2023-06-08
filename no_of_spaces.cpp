#include<iostream>
#include<iterator>
#include<cstring>
using namespace std;

int main(){
	char buffer[255]{};
	cin.getline(buffer,size(buffer));
	int spacesFound{0};
	int bufferLength{static_cast<int>(strlen(buffer))};

	for (int index{0};index<bufferLength;++index){
		if (buffer[index]==' ')
			++spacesFound;
	}
	cout<<"you have entered "<<spacesFound<<"\n";
	return 0;
}	