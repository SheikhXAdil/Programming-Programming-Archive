#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

class Solution
{

public:
    bool containsDuplicates(vector<int> &nums)
    {
        unordered_set<int> s;

        for (int i = 0; i < nums.size(); i++)
        {
            if (s.find(nums[i]) != s.end())
                return true;
            s.insert(nums[i]);
        }
        return false;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 1,1 ,1 , 2, 2};

    Solution S;

    cout << S.containsDuplicates(nums);
}