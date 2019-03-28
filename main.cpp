#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main(){

	map<char,int> letters;

	string input;
	vector<char> chars;

	while (getline(cin, input)) {
    
    	for(int i = 0; i< input.size();i++){
				if ( letters.find(input[i]) == letters.end() ) {
 					letters[input[i]] = 0;
 					chars.push_back(letters[input[i]]);
 					cout << letters[input[i]];
 					continue;
				}			
    			letters[input[i]]++;
			}

		for(int i = 0; i < chars.size();i++)
		{
			cout << chars[i]<<endl;
		}

	}

	
	return 0;
}