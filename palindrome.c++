#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int left = 0;
    int right = n - 1;

    bool isPalindrome = true;

    while (left < right) {
        if (arr[left] != arr[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    if (isPalindrome)
        cout << "Array is a palindrome" << endl;
    else
        cout << "Array is not a palindrome" << endl;

    return 0;
}