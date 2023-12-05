class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cnt = 0, slen = s.size(), tlen = t.size();
        int j = 0;
        for (int i=0; i < slen; i++)
        {
            for (; j < tlen; j++)
            {
                if (s[i] == t[j])
                {
                   j++;
                   cnt++;
                   break;
                }
            }
        }

        if (slen == cnt)
        {
            return true;
        }

        return false;
    }
};