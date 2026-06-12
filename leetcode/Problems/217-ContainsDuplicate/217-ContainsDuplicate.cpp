#include <vector>
#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums)
    {
        std::unordered_map<int, int> frequency;
        for (int num : nums)
        {
            if (++frequency[num] > 1) return true;
        }
        return false;
    }
};