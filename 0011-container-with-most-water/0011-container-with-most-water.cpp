class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0;

        int len = height.size();
        int i = 0, j = len-1;
        int wdth, hght, maxVal, lastVal = 0;        
        while (j > i)
        {
            wdth = j - i;
            hght = min(height[j], height[i]);
            maxVal = wdth * hght;
            
            result = max(result , maxVal);

            if(height[i] < height[j])
                i++;
            else
                j--;
            
        }

         return result;        
    }
};