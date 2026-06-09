#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> prevMap;
        int diff;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            diff = target - nums[i];

            if (prevMap.find(diff) != prevMap.end())
            {
                return {prevMap[diff], i};
            }

            prevMap.insert({nums[i], i});
        }

        return ans;
    }
};

int main()
{

    Solution S;
    vector<int> nums = {4,5,6};
    vector<int> ans = S.twoSum(nums, 10);

    cout << ans[0] << " " << ans[1];
}