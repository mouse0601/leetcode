//暴力处理法
        /*for(int i=0;i<ransomNote.size();i++)
        {
            int j;
            int sign = 0;
            for( j=0 ;j<magazine.size();j++)
            {
                if(ransomNote[i]==magazine[j])
                {
                    magazine.erase(j,1);
                    sign = 1;
                    break;
                }
            }
            if(sign == 0)
                return false;
        }
        return true;
        */
        //哈希表法
        int a[26] = {0};
        for(int i=0; magazine[i];i++)
        {
            a[magazine[i]-'a']+=1; 
        }
        for(int i=0;ransomNote[i];i++)
        {
            a[ransomNote[i]-'a']-=1;
            if(a[ransomNote[i]-'a'] < 0)
            {
                return false;
            }
        }
        
        return true;
    }
};