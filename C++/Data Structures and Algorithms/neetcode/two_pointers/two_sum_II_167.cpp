#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;

        for (int i = 0, j = nums.size() - 1; i < j;)
        {

            if (nums[i] + nums[j] > target)
                j--;
            else if (nums[i] + nums[j] < target)
                i++;
            else
                return {i + 1, j + 1};
        }

        return ans;
    }
};

int main()
{

    Solution S;
    vector<int> nums = {2,3,4};
    vector<int> ans = S.twoSum(nums, 6);

    cout << ans[0] << " " << ans[1];
}