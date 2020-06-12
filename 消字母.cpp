#include<iostream>

#include<string>
using namespace std;
void deltes(string s1,string s2)
{
    string result;
    int i;
    int asc[256] = {0};
    for(i = 0; i < s2.size(); i++)
    {
        asc[s2[i]]=1;
    }
    for(i=0;i < s1.size(); i++)
    {
        if(asc[s1[i]]==0)
        {
            result=result+s1[i];
        }
    }
    cout << result;
}
int main()
{
    string s1 , s2;
    //cin >> s1 ;
    getline(cin,s1);
    getline(cin,s2);
    //cin >> s2;
    for(int i=0;i<s1.size();i++)
       for(int j=0;j<s2.size();j++)
           if(s1[i]==s2[j])
               s1.erase(i,1);
    //deltes(s1,s2);
    cout << s1;
}
