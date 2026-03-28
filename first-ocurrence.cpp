#include<iostream>
using namespace std;

int main(){
    string haystack = "sadbutsad";
    string needle = "sad";

    for(int i=0;i<=haystack.size()-needle.size();i++){
        int j=0;
        while(j<needle.size() && haystack[i+j]==needle[j]){
            j++;
        }
        if(j==needle.size()){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}