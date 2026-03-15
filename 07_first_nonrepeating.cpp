#include<iostream>
#include<cctype>
using namespace std;

int main(){

    
    string text;

    
    cout<<"Enter Text: ";
    getline(cin,text);   // getline allows spaces in input

    
    string newtext="";


    // Loop through each character of the input string
    for(char c : text){

        // Ignore spaces
        if(c!=' '){

            // Convert character to lowercase
            // and append it to newtext
            newtext += tolower(c);
        }
    }


    // Frequency array to store count of characters
    // Size 256 is used because ASCII characters range from 0–255
    int freq[256] = {0};


    // Count frequency of each character using ASCII value
    for(int i=0;i<newtext.length();i++){

        // newtext[i] is a character
        // It is automatically converted to its ASCII value
        // and used as an index of the array
        freq[newtext[i]]++;
    }


    // Find the first non-repeating character
    for(int i=0;i<newtext.length();i++){

        // If frequency is 1, it means the character appears only once
        if(freq[newtext[i]] == 1){

            cout<<"First nonrepeating = "<<newtext[i]<<endl;
            return 0;   // stop program after finding first non-repeating character
        }
    }


    // If no unique character is found
    cout<<"No non-repeating character found"<<endl;

}