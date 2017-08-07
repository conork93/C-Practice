//Conor Kennedy
//8/27/2017


#include <iostream>
#include <string>

using namespace std;
int main() {


	
	string word;
	int vowels = 0, a = 0, e =0, i = 0, o = 0, u = 0;

	cout << "Enter a word: ";
	getline(cin, word);
	for (auto w: word) {
		w = (tolower(w));

		switch (w) {
		case 'a':
			a++;
			vowels++;
			break;
		case 'e':
			e++;
			vowels++;
			break;
		case 'i':
			i++;
			vowels++;
			break;
		case 'o':
			o++;
			vowels++;
			break;
		case 'u':
			u++;
			vowels++;
			break;
		default:
			break;

		}
		
	}
	cout << "Total vowels: " << vowels << endl;
	cout << a << "\'a\' " << e << "\'e\' " << i << "\'i\' " << o << "\'o\' " << u << "\'u\' \n";
	
}
