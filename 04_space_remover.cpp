#include<iostream>
using namespace std;

int main(){
    string text;
    cout<<"Enter Text : ";
    getline(cin,text);

    int length = text.length();

    // ================= Method 01 =================
    // Remove spaces by modifying the original string

    string textMethod1 = text;

    for(int i=0;i<length;i++){
        if(textMethod1[i] == ' '){
            for(int j=i;j<length;j++){
                textMethod1[j] = textMethod1[j+1];
            }
            length--;
            i--;
        }
    }

    cout<<"Method 01 Output = "<<textMethod1<<endl;

    // ================= Method 02 =================
    // Create a new string without spaces

    string newtext="";

    for(char c : text){  //// Range-based for loop: iterates through each character in the string 'text'
        if(c != ' '){
            newtext += c;
        }
    }

    cout<<"Method 02 Output = "<<newtext<<endl;

    return 0;
}