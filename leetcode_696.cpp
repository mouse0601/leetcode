class Solution {
public:
    //�жϴӵ�pos���ַ���ʼ�����n���ַ��Ƿ����
    //����в���ȵģ����ز���ȵĽ��
    //���򷵻�0
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
        //���г�ʱ-�����ǶԵ�
        int count = 0;
        int len = s.size();
        for(int i = 1;i <= len / 2;i++)//1��0�ظ����ֵĴ���
        {
            for(int j = 0;(j + 2 * i) <= len;j++)//ÿ��ѭ���ִ�
            {
                char flag = s[j];//��¼��λ�ַ�
                if(issame(s,j,i))//����������i���ַ���ȣ�j����λ��
                {
                    j = issame(s,j,i) - 1;
                }
                else if(s[j+i] != flag)//����ǰi���ַ���ȣ��Һ�i���ַ���ȣ���ǰ���ַ���ͬ
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
        
        //�������
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
