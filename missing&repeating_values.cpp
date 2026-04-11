//to find the repeating and missing values
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int a = -1, b;

        int actualSum = 0;
        int expectSum = 0;

        int n = grid.size();

        unordered_set<int> freq;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                actualSum += grid[i][j];

                if(freq.find(grid[i][j]) != freq.end()){
                    a = grid[i][j];
                }

                freq.insert(grid[i][j]);
            }
        }

        expectSum = (n * n * (n * n + 1)) / 2;

        b = expectSum + a - actualSum; 

        ans.push_back(a);
        ans.push_back(b);

        return ans;
    }
};

int main() {
    int n;
    cout << "Enter n (size of grid): ";
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));

    cout << "Enter grid elements:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    Solution obj;
    vector<int> result = obj.findMissingAndRepeatedValues(grid);

    cout << "Repeated Number: " << result[0] << endl;
    cout << "Missing Number: " << result[1] << endl;

    return 0;
}