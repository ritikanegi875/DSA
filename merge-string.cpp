#include<iostream>
using namespace std;

int main(){
    string s1="abc";
    string s2="pqr";
int i=0;
int j=0;
    string empty="";

    while(i<s1.size() && j<s2.size()){
        empty += s1[i];
        empty += s2[j];
        i++;
        j++;
    }
    while(i<s1.size()){
        empty += s1[i];
        i++;
    }
    while(j<s2.size()){
        empty += s2[j];
        j++;
    }

    cout<<empty;
    return 0;
}