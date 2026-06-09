#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {

        unordered_map<string, vector<string>> m;
        for (int i = 0; i < strs.size(); i++)
        {
            string key = getKey(strs[i]);
            // cout << strs[i] << " " << key << endl;
            m[key].push_back(strs[i]);
        }

        vector<vector<string>> result;

        for (auto it = m.begin(); it != m.end(); it++)
        {
            result.push_back(it->second);
        }

        return result;
    }

private:
    string getKey(string s)
    {

        vector<int> count(26);

        for (int i = 0; i < s.size(); i++)
        {
            count[s[i] - 'a']++;
        }

        string key = "";
        for (int i = 0; i < count.size(); i++)
        {
            key.append(to_string(count[i]) + '#');
        }

        return key;
    }
};

int main()
{

    Solution S;
    vector<vector<string>> result;
    vector<string> strs = {"act", "pots", "tops", "cat", "stop", "hat"};

    result = S.groupAnagrams(strs);

    cout << result.size() << endl;

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << endl;
        }
    }
}