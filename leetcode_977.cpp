class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        /*
        //暴力法
        vector<int> result;
        for(int i=0;i<A.size();i++)
        {
            result.push_back(A[i]*A[i]);
        }
        sort(result.begin(),result.end());
        return result;*/

         /*
        //别人的
        int len = A.size();
        vector<int> ans(len);
        int a = 0, b = len - 1, i = b;
        while (i >= 0)
        {
            int lef = A[a] * A[a], rig = A[b] * A[b];
            if (lef > rig) ans[i] = lef, a++;
            else ans[i] = rig, b--;
            i--;
        }
        return ans;*/
    }
};