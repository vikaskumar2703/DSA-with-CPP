#include<iostream>
#include <iterator>
using namespace std;

bool isVowel(char c){
	switch(c){
	case'A':
		case'E':
			case'I':
				case'O':
					case'U':
						case'a':
							case'e':
								case'i':
									case'o':
									case'u':
										return true;
									default :
										return false;
	}
}
int main(){
	char name[]{"Mohit"};
	int arrayLength{static_cast<int>(size(name))};
	int numVowel{0};
	for (char*ptr{name};ptr!=(name+arrayLength);++ptr){
			if (isVowel(*ptr)){
				++numVowel;
			}
	}
	cout<<"The given word has "<<numVowel<<" vowels.";

	return 0;
}

// incase of creating a for loop for counting it is better to use count_if part of algorithm module.
// auto numVowels{count_if(begin(name),end(name),<condition>isVowel)}