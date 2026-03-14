#include<iostream>
using namespace std;
int main(){
    cout<<"\n ==========STRING REVERSER=========="<<endl;
    string word;
    cout<<"Enter Word : ";
    getline(cin, word); //======I use this for getting whole line including dashes
    int length =word.length();
    
    string original=word;

   

    for(int i=0;i<length/2;i++){
        char temp=word[i];
        word[i]=word[length-(i+1)];
        word[length-(i+1)]=temp;
    }
   
   cout<<" Reversed = "<<word<<endl;

    if(original == word){
        cout<<"This string is a palindrome."<<endl;
    }else{
        cout<<"This string is not a palidrome."<<endl;
    }
}