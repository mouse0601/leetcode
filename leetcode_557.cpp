class Solution {
public:
    void swapWord(string& s,int i,int j)
    {
        while(i < j)
        {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
    string reverseWords(string s) {
        int i = 0,j = 0;
        while(j < s.size())
        {
            if(s[j] == ' ')
            {
                swapWord(s,i,j-1);
                i = j + 1;
            }
            else if(j == s.size() - 1)
            {
                swapWord(s,i,j);
            }
            j++;
        }
        return s;

        //用时和内存消耗大
        /*string ans;
        int left = 0,right = 0;
        for(int i = 0;i <= s.size();i++)
        {
            if(i == s.size() || s[i] == ' ')
            {
                right = i - 1;
                while(right >= left)
                {
                    ans += s[right];
                    right--;
                }
                if(i != s.size())    ans += ' ';
                left = i + 1;
            }
        }
        return ans;*/
    }
};
