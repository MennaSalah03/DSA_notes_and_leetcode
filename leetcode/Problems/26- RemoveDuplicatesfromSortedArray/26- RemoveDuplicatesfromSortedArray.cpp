#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int left = 0, right = 1, k = 0;

        // to avoid segfault if the array size is 1
        if (nums.size() == 1) return 1;
        else if (nums.empty()) return 0;

        for (; right < nums.size(); right++)
        {
            if (nums[right] != nums[left])
            {
                nums[++left] = nums[right];
            }
        }

        for (size_t i = 0; i < nums.size(); ++i) {
            cout << nums[i];
            if (i < nums.size() - 1) cout << " ";
        }
        cout << endl;

        return left + 1;
    }
};

int main() {
    Solution solution;

    vector<int> testInput1 = {1,1,2};
    vector<int> testInput2 = {0,0,1,1,1,2,2,3,3,4};
    vector<int> testInput3 = {0, 0, 0, 0, 3, 3, 4, 4, 5};
    vector<int> testInput4 = {0, 0};

    // Call the function
    int result1 = solution.removeDuplicates(testInput1);
    int result2 = solution.removeDuplicates(testInput2);
    int result3 = solution.removeDuplicates(testInput3);
    int result4 = solution.removeDuplicates(testInput4);
    //Print the output to verify correctness
    std::cout << "Test Case 1 Output: [" << result1 << "]" << std::endl;
    std::cout << "Expected Output:  2  " << std::endl;

    std::cout << std::endl;
    std::cout << "Test Case 2 Output: [" << result2 << "]" << std::endl;
    std::cout << "Expected Output:  5 " << std::endl;
    
    std::cout << std::endl;
    std::cout << "Test Case 2 Output: [" << result3 << "]" << std::endl;
    std::cout << "Expected Output:  4 " << std::endl;

    std::cout << std::endl;
    std::cout << "Test Case 2 Output: [" << result4 << "]" << std::endl;
    std::cout << "Expected Output:  1 " << std::endl;

    return 0;
}
