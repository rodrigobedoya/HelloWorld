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
 					letters[input[i]] = 1;
 					chars.push_back(input[i]);
 					continue;
				}			
    			letters[input[i]]++;
			}
		
		for(int i = 0; i < chars.size();i++)
		{
			cout << chars[i]<<" " << letters[chars[i]] << endl;
		}

	//a comment

	}

	
	return 0;
}