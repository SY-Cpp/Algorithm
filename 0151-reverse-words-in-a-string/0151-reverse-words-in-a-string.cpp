class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);

        vector<string> words;
        string temp;

        while (getline(ss, temp, ' '))
        {
            if(temp.length() > 0)
                words.push_back(temp);
        }

        int st = 0;
        int ed = words.size()-1;
        string spc = " ";

        while (st < ed)
        {
            temp = words[st];
            words[st] = words[ed];
            words[ed] = temp;

            st++;
            ed--;
        }
        temp.clear();
        for (int i =0; i< words.size(); i ++)
        {
            temp.append(words[i]);
            if (i != (words.size()-1))
            {
                temp.append(spc);
            }
        }
        return temp;        
    }
};