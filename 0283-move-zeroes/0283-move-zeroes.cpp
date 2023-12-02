class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        for (int n : nums)
        {
            if (n == 0)
                cnt++;
        }

        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());

        while (cnt > 0)
        {
            nums.push_back(0);
            cnt--;
        }
    }
};