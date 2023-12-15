class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int result = INT_MIN , left = 0, right = 0;
        bool zeroCheck = false;
                
        for(int i=0; i<nums.size(); i++)
        {

            if(nums[i] == 0 )
            {
                if(zeroCheck)
                {
                    result = max(result, (left+right));
                    left = right;
                    right = 0;
                }
                else
                    zeroCheck = true;
            }
            else
            {
                if(zeroCheck)
                {
                    right++;
                }
                else
                {
                    left++;
                }                 
            }
            
        }
        
        result = max(result, (left+right));

        if(!zeroCheck)
        {
            result -= 1;
        }
        
        return result;
    }
};