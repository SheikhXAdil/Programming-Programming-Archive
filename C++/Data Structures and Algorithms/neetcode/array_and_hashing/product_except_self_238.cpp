#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {

        vector<int> res(nums.size());

        for (int i = 0; i < res.size(); i++)
        {
            res[i] = 1;
        }
        
        int prefix = 1;

        for (int i = 0; i < nums.size(); i++)   
        {
            res[i] = prefix;
            prefix *= nums[i];
        }

        int postfix = 1;

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            res[i] *= postfix;
            postfix *= nums[i];
        }

        return res;
    }
};

int main()
{

    Solution s;
    vector<int> nums = {1,2,3,4};

    vector<int> ans = s.productExceptSelf(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;

    return 0;
}