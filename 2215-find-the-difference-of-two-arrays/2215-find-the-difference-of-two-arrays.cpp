class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result;
        
        /* vector distinct step 1 */
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        /* vector distinct step 2 */
        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());

        int i = 0 , len = nums1.size();
        while (i < len)
        {
            if (find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end())
            {
                int j = find(nums2.begin(), nums2.end(), nums1[i]) - nums2.begin();
                nums1.erase(nums1.begin() + i);
                nums2.erase(nums2.begin() + j);
                len--;
            }
            else
                i++;
        }       
        
        result.push_back(nums1);
        result.push_back(nums2);        
        
        return result;
    }
};