class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        //排序比较法
        /*vector<int> sort_nums(nums);
        sort(sort_nums.begin(),sort_nums.end());
        int low = 0;
        int high = nums.size() - 1;
        while(low < nums.size())
        {
            if(nums[low] == sort_nums[low])
                low++;
                else
                break;
        }
        while(high >=0)
        {
            if(nums[high] == sort_nums[high])
            high--;
            else break;
        }
        if(low == nums.size() && high == -1)
        return 0;
        return high - low + 1;
        */
        //从左到右循环，记录最大值为 max，若 nums[i] < max, 则表明位置 i 需要调整, 循环结束，记录需要调整的最大位置 i 为 high; 
        //同理，从右到左循环，记录最小值为 min, 若 nums[i] > min, 则表明位置 i 需要调整，循环结束，记录需要调整的最小位置 i 为 low.
        int len = nums.size();
        if(len <= 1) {
            return 0;
        }
        int high = 0,low = len-1;
        int curMax = nums[0],curMin=nums[len - 1];
        for(int i = 0;i<len;i++){
            if(nums[i] >= curMax){
                curMax = nums[i];
            } else {
                high = i;
            }
            if(nums[len-i-1] <= curMin){
                curMin = nums[len-i-1];
            } else {
                low = len - i - 1;
            }
        }
        return high > low ? high -low + 1 : 0;
    }
};