class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     
        vector<bool> result;
        
        for_each(candies.begin(), candies.end(), [&](int& n)
                 {
                    if( *max_element(candies.begin(), candies.end())  <= n + extraCandies) 
                    {
                        result.push_back(true);
                    }
                    else
                    {
                        result.push_back(false);     
                    }
                 });
        
        return result;
    }
};