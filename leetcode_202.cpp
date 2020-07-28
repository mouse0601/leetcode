class Solution {
public:
    int Num(int n)
    {
        int sum = 0;
        while(n)
        {
            sum = sum + (n %10) * (n % 10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_map<int,bool> hash;

        while(1)
        {
            int sum = Num(n);
            if(sum == 1)
            {
                return true;
            }
            if(hash[sum])
            {
                return false;
            }
            hash[sum]= true;
            n = sum;
        }
    }
};
