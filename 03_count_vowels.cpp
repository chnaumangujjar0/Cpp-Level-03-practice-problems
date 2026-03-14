#include<iostream>
using namespace std;
int main(){
    cout<<"\n ==========STRING REVERSER=========="<<endl;
    string word;
    cout<<"Enter Word : ";
    getline(cin, word); //======I use this for getting whole line including dashes
    int length =word.length();
    int vowelcounter=0;
    int consonantcounter=0;
  for(int i=0;i<length;i++){
    char w = tolower(word[i]); // i use this for making the whole word to lowercases 
    if(w == 'a' || w== 'e' || w == 'i' || w == 'o' || w=='u'){
        vowelcounter++;
    }else{
       consonantcounter++;
    }
  }
  cout<<vowelcounter<<" Vowels in this word"<<endl;
  cout<<consonantcounter<<" Consonants in this word"<<endl;
}