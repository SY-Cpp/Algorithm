class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        int indx = 0;
        
        while(indx < len )
        {
            int left = 0 , right = 0;
            for(int i = 0; i < indx; i++)
                left += nums[i];
            
            for(int j = len -1; j > indx; j--)
                right += nums[j];

            if(left == right)
                return indx;          
            
            indx++;
                            
        }
        
        return -1;
    }
};