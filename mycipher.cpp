#include <iostream>
using namespace std;

string caesar_cipher(string text, int shift) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += (c - base + shift) % 26 + base;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    string message;
    int shift;

    cout << "Enter message: ";
    getline(cin, message);
    cout << "Enter shift: ";
    cin >> shift;

    cout << "Encrypted: " << caesar_cipher(message, shift) << endl;
    return 0;
}
