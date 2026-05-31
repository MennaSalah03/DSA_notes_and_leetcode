#include <iostream>
#include <vector>


class Solution {
public:
    int findNumbers(std::vector<int>& nums)
    {
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if ((nums[i] >= 100000 && nums[i] % 1000000 == nums[i]) ||
                (nums[i] >= 1000 && nums[i] % 10000 == nums[i]) ||
                (nums[i] >= 10 && nums[i] % 100 == nums[i])
                )
            {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution solution;

    // Test Case 1: Input array [555,901,482,1771]
    std::vector<int> testInput1 = {100000,90,482,1771};

    // Call the function
    int result1 = solution.findNumbers(testInput1);

    // Print the output to verify correctness
    std::cout << "Test Case 1 Output: [" << result1 << std::endl;
    std::cout << "]" << std::endl;
    std::cout << "Expected Output:    1" << std::endl;

    return 0;
}
