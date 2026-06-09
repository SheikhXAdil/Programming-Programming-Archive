#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        vector<vector<int>> result;
        int n = nums.size();

        if (n < 3)
            return result;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++)
        {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int l = i + 1, r = n - 1;

            while (l < r)
            {
                int threeSum = nums[l] + nums[r] + nums[i];

                if (threeSum > 0)
                    r--;
                else if (threeSum < 0)
                    l++;
                else
                {
                    result.push_back({nums[l], nums[r], nums[i]});
                    do
                    {
                        l++;
                    } while (l < r && nums[l] == nums[l - 1]);
                }
            }
        }

        return result;
    }
};

int main()
{

    Solution S;
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = S.threeSum(nums);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
    
}