#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Remove spaces and convert to lowercase
string cleanString(string str) {
    string cleaned = "";
    for (char c : str) {
        if (c != ' ') {  // Ignore spaces
            cleaned += tolower(c);  // Convert to lowercase
        }
    }
    return cleaned;
}

int main() {
    string text1, text2;
    
    cout << "Enter Text 01: ";
    getline(cin, text1);
    cout << "Enter Text 02: ";
    getline(cin, text2);
    
    // Clean and prepare strings
    text1 = cleanString(text1);
    text2 = cleanString(text2);
    
    // Sort both strings
    sort(text1.begin(), text1.end());
    sort(text2.begin(), text2.end());
    
    cout << "\nCleaned & Sorted Text 1: " << text1 << endl;
    cout << "Cleaned & Sorted Text 2: " << text2 << endl;
    
    // Check if they are anagrams
    if (text1 == text2) {
        cout << "\n✓ These strings CREATE an anagram!" << endl;
    } else {
        cout << "\n✗ These strings DO NOT create an anagram." << endl;
    }
    
    return 0;
}
