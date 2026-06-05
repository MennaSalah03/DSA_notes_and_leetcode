#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums)
    {

        // sqaure each element in-place
        for (int i = 0; i < nums.size(); i++)
        {
             nums[i] *= nums[i];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            int key = nums[i];
            int j = i - 1;
            if (i != 0)
            {                
                for (;j >= 0 && nums[j] > key; j--)
                {
                        nums[j + 1] = nums[j];
                }
                nums[j + 1] = key;
            }
        }
        return nums;
    }
};


int main()
{
    Solution solution;

    std::vector<int> testInput1 = {-4,-1,0,3,10};

    // Call the function
    std::vector<int> result1 = solution.sortedSquares(testInput1);

    // Print the output to verify correctness
    std::cout << "Test Case 1 Output: [";
    for (size_t i = 0; i < result1.size(); ++i) {
        std::cout << result1[i];
        if (i < result1.size() - 1) std::cout << " ";
    }
    std::cout << "]" << std::endl;
    std::cout << "Expected Output:    [0 1 9 16 100]" << std::endl;

    return 0;
}
