//it will save the value which occur majority times in the array
// use hash-map because it store the value which is present multiple times

#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<int , int> freq;
    
    int nums[]={2,2,4,3,2,4,2};
    int n= sizeof(nums)/sizeof(nums[0]);

    for(int i=0;i<n;i++){
        freq[nums[i]]++;

        if(freq[nums[i]] > n/2){
            cout << nums[i];
            return 0;
        }
    }

    cout << "No majority element";
    return 0;
}