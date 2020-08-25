class Solution {
public:

    int findPeakElement(vector<int>& nums) {
        int left = 0,right = nums.size() - 1;
        
        while(left < right)
        {
            int mid = (left + right ) / 2;
            if(nums[mid] > nums[mid + 1])//���mid�ߣ�˵������з�ֵ��midҲ���������ֵ
            {
                right = mid;
            }
            else left = mid + 1;//����ұ߸ߣ���ֵ���ұߣ�mid�������Ƿ�ֵ
        }
        return left;
    }
};
