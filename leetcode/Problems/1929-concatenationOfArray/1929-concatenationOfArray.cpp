#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    std::vector<int> getConcatenation(vector<int>& nums)
    {
        std::vector<int> ans = nums;

        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(nums[i]);
        }

        return ans;
    }
};
// ==========================================
// 2. LOCAL TEST RUNNER
// (This stays on your machine)
// ==========================================
int main() {
    Solution solution;

    // Test Case 1: Input array [1, 2, 1]
    vector<int> testInput1 = {1, 2, 1};

    // Call the function
    vector<int> result1 = solution.getConcatenation(testInput1);

    // Print the output to verify correctness
    cout << "Test Case 1 Output: [";
    for (size_t i = 0; i < result1.size(); ++i) {
        cout << result1[i];
        if (i < result1.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    cout << "Expected Output:    [1, 2, 1, 1, 2, 1]" << endl;

    return 0;
}
