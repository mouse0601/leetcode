class Solution {
public:
    int reverse(int x){
        queue<int > num;
        int max=0x7fffffff,min=-0x80000000;
        long n=x;
        if(x<0)
            n=-(long)x;
        while(n){
            num.push(n%10);
            n=n/10;
        }
        while(num.size())
        {
            n+=num.front()*pow(10,num.size()-1);
            num.pop();
        }
        if(n<max && n>min)
        {
            if(x>0)
                return n;
            else return -n;
        }
        else return 0;
    }
};