//Conor Kennedy
//7/31/17


#include <iostream>
#include <string>

using namespace std;

void encypt(string &message, int key) {
	for (int i = 0; i < message.length(); ++i) {
		if (isalpha(message[i])) {
			message[i] = tolower(message[i]);
			for (int j = 0; j < key; ++j) {
				if (message[i] == 'z')
					message[i] = 'a';
				else
					message[i]++;
			}
		}
	}
}

void decrypt(string &message, int key) {
	for (int i = 0; i < message.length(); ++i) {
		if (isalpha(message[i])) {
			message[i] = tolower(message[i]);
			for (int j = 0; j < key; ++j) {
				if (message[i] == 'a')
					message[i] = 'z';
				else
					message[i]--;
			}
		}
	}

}

int main() {

	string message;
	int key;

	cout << "Enter message for encryption: ";
	getline(cin, message);
	cout << "Enter key: ";
	cin >> key;

	encypt(message, key);
	cout << message << endl;
	
	decrypt(message, key);
	cout << message << endl;

	return 0;
}
