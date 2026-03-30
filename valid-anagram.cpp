#include<iostream>
using namespace std;

int main(){
    string s="anagram";
    string t="naaram";

    if(s.size() != t.size()){
        cout<<"not anagram";
    }

    else{
    

    int count[26]={0};
    for(int i=0;i<s.size();i++){
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for(int i=0; i<26; i++){
       if(count[i] != 0){
        cout<<"NOt anagram";
       }
    }

    cout<<"anagram";

    return 0;
}
}