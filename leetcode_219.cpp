class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //³¬Ê±
        /*for(int i = 0;i < nums.size() - k;i++)
        {
            int j = i + 1;
            while((j <= (i + k)) && (j < nums.size()))
            {
                if(nums[i] == nums[j])
                {
                    return true;
                }    
                j++;
            }
        }
        return false;*/

        //É¢ÁÐ±í
        unordered_map<int,int> set;
        for(int i = 0;i < nums.size();i++)
        {
            set[nums[i]]++;
            if(set[nums[i]] > 1)
            {
                return true;
            }    
            if(set.size() > k)
            {
                set.erase(nums[i - k]);
            }
        }
        return false;
    }
};
