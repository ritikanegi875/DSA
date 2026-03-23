//maximum sum of subarray in array
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,3};
    int n= sizeof(arr) / sizeof(arr[0]);
    int currentSum=0;
    int k=3;
    for(int i=0;i<k;i++){
        currentSum += arr[i];
    }

    int MaxSum=currentSum;

    for(int i=k;i<n;i++){
        currentSum +=arr[i];
        currentSum -= arr[i-k];

        if(currentSum>MaxSum){
            MaxSum=currentSum;
        }
     
    }
       cout<<MaxSum;
       return 0;
}