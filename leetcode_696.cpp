class Solution {
public:
    //判断从第pos个字符开始往后的n个字符是否都相等
    //如果有不相等的，返回不相等的结点
    //否则返回0
    int issame(string s,int pos,int n)
    {
        for(int k = pos;k < pos + n - 1;k++)
        {
            if(s[k] != s[k+1])
            {
                return k+1;
            }
        }
        return 0;
    }
    int countBinarySubstrings(string s) {
        
        /*
        //运行超时-代码是对的
        int count = 0;
        int len = s.size();
        for(int i = 1;i <= len / 2;i++)//1和0重复出现的次数
        {
            for(int j = 0;(j + 2 * i) <= len;j++)//每次循环字串
            {
                char flag = s[j];//记录首位字符
                if(issame(s,j,i))//不满足连续i个字符相等，j滑动位置
                {
                    j = issame(s,j,i) - 1;
                }
                else if(s[j+i] != flag)//满足前i个字符相等，且后i个字符相等，且前后字符不同
                {
                    if(issame(s,j+i,i))
                    {
                        j = issame(s,j+i,i) - 1;
                    }
                    else{
                        count++;
                        j = j + i - 1;
                    }
                }
                else if(issame(s,j+i,i)){
                    j = issame(s,j+i,i) - i - 1;
                }
                else{
                    j = j + i - 1;
                }
            }

        }
        return count;*/
        
        //妙啊！！！
        int ptr = 0, n = s.size(), last = 0, ans = 0;
        while (ptr < n) {
            char c = s[ptr];
            int count = 0;
            while (ptr < n && s[ptr] == c) {
                ++ptr;
                ++count;
            }
            ans += min(count, last);
            last = count;
        }
        return ans;
    }
};
