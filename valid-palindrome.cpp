#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string &s, int left, int right){
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right){
            if(s[left] != s[right]){
                return isPalindrome(s, left + 1, right) || 
                       isPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    Solution obj;
    
    string s="deeee";
    
    if(obj.validPalindrome(s)) {
        cout << "Valid Palindrome (at most one deletion allowed)" << endl;
    } else {
        cout << "Not a Valid Palindrome" << endl;
    }

    return 0;
}