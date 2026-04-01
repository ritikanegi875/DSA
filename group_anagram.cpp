#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());  // sort to form key
            mp[key].push_back(s);
        }

        vector<vector<string>> result;

        for (auto it : mp) {
            result.push_back(it.second);
        }

        return result;
    }
};

int main() {
    Solution obj;

    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> result = obj.groupAnagrams(strs);

    // Print output
    for (auto group : result) {
        cout << "[ ";
        for (auto word : group) {
            cout << word << " ";
        }
        cout << "]";
    }

    return 0;
}