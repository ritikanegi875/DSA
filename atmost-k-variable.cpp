//longest Substring with K Uniques
#include<iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(){
    string str="aabacbebebe";
    int current=0;
    int maxL=0;
    int k=3;

  //  if(k==0 || str.size()==0){
   //     return 0;
   // }

    unordered_map<char , int> freqMap;
    int left=0;
    
    for(int right =0;right <str.size();right++){
        freqMap[str[right]]++;

        while(freqMap.size() > k){
            freqMap[str[left]]--;

            if(freqMap[str[left]]==0){
                freqMap.erase(str[left]);
            }
            left++;
        }
        maxL= max(maxL , right -left +1);
    }
     cout<<"Longest Length of String is :"<<maxL;

     return 0;

}