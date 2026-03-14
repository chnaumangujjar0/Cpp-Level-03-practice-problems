#include<iostream>
using namespace std;
int main(){
    cout<<"\n ==========STRING REVERSER=========="<<endl;
    string word;
    cout<<"Enter Word : ";
    getline(cin, word); //======I use this for getting whole line including dashes
    int length =word.length();
    
    for(int i=0;i<length/2;i++){
        char temp=word[i];
        word[i]=word[length-(i+1)];
        word[length-(i+1)]=temp;
    }
    cout<<" Word = [ ";
    for(int i=0;i<length;i++){
        cout<<word[i]<<" ";
    }
    cout<<" ] "<<endl;
}