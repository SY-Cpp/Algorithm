class Solution {
public:
    int maxVowels(string s, int k) {
        int result = -1;
        string vowel = "aeiou";
        int cnt = 0;


        for (int i = 0; i < s.size(); i++)
        {

            if(i < k)
            {
                if (vowel.find(s[i]) != string::npos)
                    cnt++;
            }
            else
            {
                if (vowel.find(s[i]) != string::npos)
                {
                    cnt++;
                }

                if (vowel.find(s[i-k]) != string::npos)
                {
                    cnt--;
                }
                
            }
            result = max(result, cnt);

            if (result == k)
                break;
        }
        result = max(result, cnt);
        return result;
    }
};