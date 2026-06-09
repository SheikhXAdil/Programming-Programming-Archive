#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {

        unordered_set<int> set;
        int longest = 0;
        int length = 0;

        for (int i = 0; i < nums.size(); i++)
            set.insert(nums[i]);

        for (int i = 0; i < nums.size(); i++)
        {
            if (set.find(nums[i] - 1) == set.end())
            {
                length = 0;

                while (set.find(nums[i] + length) != set.end())
                    length++;

                longest = length > longest ? length : longest;
            }
        }

        return longest;
    }
};

int main()
{
    Solution s;

    vector<int> nums = {1,2,3,100,200,4};
    cout << s.longestConsecutive(nums);

    return 0;
}