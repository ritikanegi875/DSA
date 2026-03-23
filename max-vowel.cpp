//sliding window finding no of vowel in the sub string 
#include<iostream>
using namespace std;

bool isVowel(char ch){
    return (ch== 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' );
}

int main(){
    //abciiidef
    string str="abciiidef";
    int k=3;
    int current=0;

    for(int i=0;i<k;i++){
       if(isVowel(str[i])){
        current++;
       }
    }
    int max=current;

    for(int i=k;i<str.size();i++){
        if(isVowel(str[i])){
        current++;
        }
        
        if(isVowel(str[i-k])){
            current--;
        }

        if(current>max){
            max=current;
        }
    }
    cout<<max;;

    return 0;
    
}