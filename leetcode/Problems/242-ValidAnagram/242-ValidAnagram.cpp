#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t)
    {
        // checking both words got the same length
        if (s.size() != t.size()) return false;

        std::unordered_map<char, int> freq;

        for (char c : s)
            freq[c]++;

        for (char c : t)
            // checking if the subtraction goes beyond 0 to see if it's the same letters
            if (--freq[c] < 0) return false;

        return true;
    }
};