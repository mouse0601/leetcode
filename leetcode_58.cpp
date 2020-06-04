class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.size();
        if(len == 0)
            return 0;
        //从前面开始遍历
        /*int word = 0;//判断是否开始计数
        int count = 0;
        for(int i = 0;i < len-1;i++)
        {
            if(s[i] != ' ')
            {
                word = 1;
                count++;
            }
            else if( s[i] == ' ' && s[i+1] != ' ')
            {
                word = 0;
                count = 0;
            }
        }
        if( s[len-1] == ' ')
        return count;
        else return count+1;*/
        //从后面开始遍历
        int word = len - 1;//指针
        int count = 0;
        while(s[word] == ' ' && word > 0)
        {
            word--;
        }
        while(s[word] != ' '&& word > 0)
        {
            word--;
            count++; 
        }
        if(s[word]==' ')
            return count;
        else return count+1;
    }
};