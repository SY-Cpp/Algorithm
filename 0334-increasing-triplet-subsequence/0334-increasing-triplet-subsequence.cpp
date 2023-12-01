class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int num1 = INT_MAX, num2 = INT_MAX;
        int ind1 = INT_MAX, ind2 = INT_MAX;
        for (int n : nums)
        {
            if (n <= num1)
            {
                num1 = n;
                ind1 = n;
            }
            else if(n <= num2 || ind1 > ind2)		// n > num1 , 
            {
                num2 = n;
                ind2 = n;
            }
            else
            {
                return true;
            }
        }

        return false;
    }
};