#include <iostream>
#include <string>

using namespace std;

void bruteForce(string message) {
	
	int key = 1;

	while (key <= 26) {
	string temp = message;
		for (int i = 0; i < temp.length(); ++i) {
			if (isalpha(temp[i])) {
				temp[i] = tolower(temp[i]);
				for (int j = 0; j < key; ++j)
					if (temp[i] == 'a')
						temp[i] = 'z';
					else
						--temp[i];
			}
		}
		cout << key << ". " << temp << endl;
		++key;
	}
}

int main() {   


	string message;

	cout << "Enter message to crack: ";
	getline(cin, message);

	cout << message << endl;

	bruteForce(message);
}
