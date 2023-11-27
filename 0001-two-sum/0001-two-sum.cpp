class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        	vector<int> resultVc = {};
	int num1, num2;
	for (int i = 0; i < nums.size(); i++)
	{
		num1 = nums[i];
		for (int j = 1; j < nums.size(); j++)
		{
			num2 = nums[j];

			if(i == j)
			{ 
				break;
			}

			if (target == (num1 + num2 ))
			{
				resultVc.push_back(i);
				resultVc.push_back(j);
				return resultVc;
			}
		}
	}

	return resultVc;
    }
};