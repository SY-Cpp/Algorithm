class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int result = 0;
        int i=0, j = nums.size()-1;
        sort(nums.begin(), nums.end());
        
        while(i< j && nums[i] < k)
        {
            if(nums[i]+nums[j] == k)
            {
                i++;
                j--;
                result++;
            }
            else if(nums[i]+nums[j] > k)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
            
        return result;        
    }
};