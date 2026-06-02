#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        //initialize k  that will have the count of non-val values in nums
        int k = 0;
        int left = 0, right = nums.size() - 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val) k++;
        }
        while (right > left)
        {
            // traverse the right pointer till it finds a non-val number
            while (nums[right] == val && right > left) right--;
            // if the right traverses too far break the loop
            if (left >= right) break;
            if (nums[left] == val)
            {
                nums[left] = nums[right];
                right--;
            }
            left++;
        }

        if (k <= nums.size())  nums.resize(nums.size() - k);
        else nums.clear();
        return nums.size();
    }
};

int main() {
    Solution solution;

    vector<int> testInput1 = {0,1,2,2,3,0,4,2};
    int val = 2;

    // Call the function
    int result1 = solution.removeElement(testInput1, val);

    //Print the output to verify correctness
    std::cout << "Test Case 1 Output: [" << result1 << std::endl;
    std::cout << "]" << std::endl;
    std::cout << "Expected Output:    " << std::endl;

    // for (size_t i = 0; i < result1.size(); ++i) {
    //     cout << result1[i];
    //     if (i < result1.size() - 1) cout << ", ";
    // }
    // cout << endl;
    return 0;
}
