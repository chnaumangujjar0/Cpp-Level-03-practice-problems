#include<iostream>
using namespace std;
int main(){
    // Program: Find frequency of characters in a string
    // Features:
    // 1. Removes spaces from the input
    // 2. Converts characters to lowercase
    // 3. Counts frequency of each character
    // 4. Prints each character with its frequency
    string text;
    cout<<"Enter Text :";
    getline(cin,text);

    string newtext="";
    for(char c:text){
        if(c!= ' '){
         newtext+=tolower(c);
        }
    }
    
    int length=newtext.length();
    int array[length];
     
    for(int i=0;i<length;i++){
        array[i]=1;
        for(int j=i+1;j<length;j++){ // for comparison
            if(newtext[i] == newtext[j]){
               array[i]++;
              
               for(int k=j;k<length;k++){ // for shifting duplictee to end
                 newtext[k]=newtext[k+1];
               }
               length--; // decreasing length after shifting
              j--;  //after shift again check for j index 
            }
        }
       
  
    }

    for(int i=0;i<length;i++){
    	
        cout<<newtext[i]<<" frequency is "<<array[i]<<endl;
    }
}