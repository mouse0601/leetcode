class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        /*
        //测试用例都通过，但是超时
        int len = nums.size();
        for(int i = 0;i < len ;i++)
        {
            int left = 0;
            int right = len - 1;
            int sum1 = 0,sum2 = 0;
            while(left < i)
            {
                sum1+=nums[left];
                left++;
            }
            while(i < right)
            {
                sum2+=nums[right];
                right--;
            }
            if(sum1 == sum2)
             return i;
        }
        return -1;
        */

        int len = nums.size();
        int sum = 0;
        int sum_left = 0;
        for(int i=0;i<len;i++)
        {
            sum+=nums[i];
        }
        for(int i=0;i<len;i++)
        {
            if(sum_left*2 + nums[i]== sum)
            return i;
            sum_left+=nums[i];
        }
        return -1;

    }
};