class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //暴力解决法
        /*int temp1,temp2;
        for(int i=0;i<k;i++)
        {
            temp2=nums[nums.size()-1];
            for(int j=0;j<nums.size();j++)
                {
                    temp1=nums[j];
                    nums[j]=temp2;
                    temp2=temp1;
                }
        }*/
        //循环移动
        int count = 0;
        int len = nums.size();
        k  = k % len;
        for(int start = 0; count < len; start++)//控制没有全部排完位的情况
        {
            int cur = start; 
            int per = nums[cur];//per用来存放将要挪位置的数
            do{
                 int next = (cur + k ) % len;//要挪到的位置
                int temp = nums[next];//空位，存放将要排位的数
                nums[next] = per;//挪位置
                per = temp;//temp放的是要存放的数，per是存放将挪位数的
                cur = next;//cur指着下一个要挪位置的
                count++;//记录挪动次数
            }
            while(start!=cur);
        }
    }
};