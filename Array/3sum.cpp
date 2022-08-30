class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        vector<vector<int>> s;

        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
            {
                int a = 0 - nums[i];
                int h = nums.size() - 1;
                int l = i + 1;
                while (l < h)
                {

                    if (nums[l] + nums[h] == a)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[h]);
                        s.push_back(temp);
                        while (l < h && nums[l] == nums[l + 1]) l++;
                        while (l < h && nums[h] == nums[h - 1]) h--;

                        h--;
                        l++;
                    }
                    else if(nums[l] + nums[h] < a) l++;
                    else h--;
                    
                }
            }
        }
        return s;
    }
};