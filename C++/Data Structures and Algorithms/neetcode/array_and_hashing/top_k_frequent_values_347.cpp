#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        unordered_map<int, int> counts;
        vector<vector<int>> freq(nums.size() + 1);

        for (int i = 0; i < nums.size(); i++)
        {
            counts[nums[i]]++;
        }

        for (auto it = counts.begin(); it != counts.end(); it++)
        {
            freq[it->second].push_back(it->first);
        }

        vector<int> res;

        for (int i = freq.size() - 1; i >= 0; i--)
        {
            for (int j = 0; j < freq[i].size(); j++)
            {
                if ((res.size()) != k)
                {
                    res.push_back(freq[i][j]);
                }
                else
                {
                    return res;
                }
            }
        }

        return res;
    }
};

int main()
{

    Solution s;
    vector<int> nums = {1, 1, 2, 2, 2, 100};

    vector<int> ans = s.topKFrequent(nums, 2);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}