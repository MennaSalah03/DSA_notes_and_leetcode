#include <iostream>
#include <vector>


class Solution
{
public:
    std::vector<int> runningSum(std::vector<int>& nums)
    {
        for (unsigned int i = 1; i < nums.size(); i++)
        {
            nums[i] = nums[i] + nums[i -1];
        }
        return nums;
    }
};
int main()
{
    Solution solution;

    // Test Case 1: Input array [1,2,3,4]
    std::vector<int> testInput1 = {1,2,3,4};

    // Call the function
    std::vector<int> result1 = solution.runningSum(testInput1);

    // Print the output to verify correctness
    std::cout << "Test Case 1 Output: [";
    for (size_t i = 0; i < result1.size(); ++i)
    {
        std::cout << result1[i];
        if (i < result1.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
    std::cout << "Expected Output:    [1,3,6,10]" << std::endl;

    return 0;
}
