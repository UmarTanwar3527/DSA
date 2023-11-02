#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string sentence;
    
    cout << "Enter a sentence in small letters: ";
    getline(cin, sentence);

    // Convert each character in the sentence to uppercase
    for (char &c : sentence) {
        c = toupper(c);
    }

    cout << "The sentence in capital letters: " << sentence << endl;

    return 0;
}
