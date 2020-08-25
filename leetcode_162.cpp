class Solution {
public:

    int findPeakElement(vector<int>& nums) {
        int left = 0,right = nums.size() - 1;
        
        while(left < right)
        {
            int mid = (left + right ) / 2;
            if(nums[mid] > nums[mid + 1])//如果mid高，说明左边有峰值，mid也可能是最大值
            {
                right = mid;
            }
            else left = mid + 1;//如果右边高，峰值在右边，mid不可能是峰值
        }
        return left;
    }
};
