#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::vector<int> tagretSumIndeces = {0, 0};
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                //if (j != nums.size() - 1)
                if (nums[i] + nums[j] == target)
                {
                    tagretSumIndeces = {i, j};
                    return tagretSumIndeces;
                }
            }
        }
    }
};


int main() {
    Solution solution;

    // Test Case 1: Input array [2,7,11,15]
    vector<int> testInput1 = {2,7,11,15};
    int target = 9;

    // Call the function
    vector<int> result1 = solution.twoSum(testInput1, target);

    // Print the output to verify correctness
    cout << "Test Case 1 Output: [";
    for (size_t i = 0; i < result1.size(); ++i) {
        cout << result1[i];
        if (i < result1.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    cout << "Expected Output: [0,1]]" << endl;

    return 0;
}
