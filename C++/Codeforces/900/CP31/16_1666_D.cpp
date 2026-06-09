#include <iostream>
#include <vector>
#include <map>
using namespace std;

void program()
{

    string s, t;

    cin >> s >> t;

    map<char, vector<int>> counts;

    // Ensure vectors have size 2 for each character
    for (char c : s + t)
    {
        if (counts[c].size() < 3)
        {
            counts[c].resize(3, 0); // Resize vector to size 2 with default value 0
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        counts[s[i]][0]++;
    }

    for (int i = 0; i < t.length(); i++)
    {
        counts[t[i]][1]++;
    }

    for (auto& count : counts)
    {
        count.second[2] = count.second[0] - count.second[1];

        // cout << count.first << " " << count.second[0] << " " << count.second[1] << " " << count.second[2] << endl;

        if (count.second[2] < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    for (auto& count : counts)
    {

        if (t.find(count.first) == string::npos)
            continue;
        
        if (count.second[2] == 0)
            continue;

        for (int i = 0; i < count.second[2]; i++)
        {
            int index = s.find(count.first);
            // cout << count.first << ' ' << index << endl;
            s[index] = 50;
        }
    }

    vector<int> tIndex;

    for (int i = 0; i < t.length(); i++)
    {
        int index = s.find(t[i]);
        tIndex.push_back(index);

        s[index] = 50;
    }

    // cout << s << " " << t << endl;

    // for (int i = 0; i < tIndex.size(); i++)
    // {
    //     cout << tIndex[i] << " ";
    // }
    // cout << endl;
    
    for (int i = 1; i < tIndex.size(); i++)
    {
        if (tIndex[i] < tIndex[i - 1])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        program();
    }

    return 0;
}