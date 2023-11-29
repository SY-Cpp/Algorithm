class Solution {
public:
    string reverseVowels(string s) {
        int strIndx = 0;
        int endIndx = s.size();

        while (strIndx < endIndx)
        {
            bool bst = reversCheck(s[strIndx]);
            bool bend = reversCheck(s[endIndx]);

            if (!bst)
            {
                strIndx++;
            }

            if (!bend)
            {
                endIndx--;
            }

            if (bst && bend)
            {
                char temp = s[strIndx];
                s[strIndx] = s[endIndx];
                s[endIndx] = temp;
                strIndx++;
                endIndx--;
            }
        }
        return s;        
    }
    bool reversCheck(char c){
        switch (tolower(c))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
        }

        return false;
    }
};