class Solution {
public:
    string countAndSay(int n) {
        int count=0;
        string ans="1";
        for(int k=1;k<n;k++)
        {
            int i=0,j=0;//指针
            string temp=ans;//要处理的数组，即上一字符串形式
            ans="";//ans只用来存放返回结果
            while(j < temp.size())//计算第k个数的ans
            {
                count = 0;//计算重复数字的个数
                while(temp[i]==temp[j])
                {
                    j++;//j指针挪动
                    count++;//数目增加
                }
                ans += to_string(count) + temp[i];//结果存放，个数+数字
                i = j ;//挪动i指针
            }
        }
        return ans;
    }
};