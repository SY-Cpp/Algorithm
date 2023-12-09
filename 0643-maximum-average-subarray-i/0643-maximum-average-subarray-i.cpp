class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double result= INT_MIN, temp = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(i < k) temp += nums[i];
            else
            {
                result = max(result,temp);
                temp += nums[i] - nums[i-k];
            }
        }
        
        result = max(result,temp);
        return result/k;
    }
};