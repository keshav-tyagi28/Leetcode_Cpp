class Solution {
public:
    string minWindow(string s, string t) {
        
         unordered_map<char, int> mp;
        int np = t.length();
        int ns = s.length();
        for (int i = 0; i < np; i++)
        {
            mp[t[i]]++;
        }
        int count = mp.size();
        int i = 0;
        int j = 0;
        int len = INT_MAX;
        pair<int, int> ans;
        while (j < ns)
        {
            if (mp.find(s[j]) != mp.end())
            {
                mp[s[j]]--;
                if (mp[s[j]] == 0)
                {
                    count--;
                }
                if (count == 0)
                {
                    while (count == 0)
                    {
                        if (j - i + 1 < len)
                        {
                            len = j - i + 1;
                            ans = {i, len};
                        }
                        if (mp.find(s[i]) != mp.end())
                        {
                            mp[s[i]]++;
                            if (mp[s[i]] == 1)
                            {
                                count++;
                            }
                        }
                        i++;
                    }
                }
            }
            j++;
        }
        return (len == INT_MAX ? "" : s.substr(ans.first, ans.second));
    }
    
};