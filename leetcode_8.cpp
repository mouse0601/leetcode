class Solution {
public:
    int myAtoi(string str) {
        //字符串为空的情况
        if(str.size() == 0){
            return 0;
        }
        vector<int> nums;//存储数字
        int symbol = 1;//记录符号位
        long long int ans = 0;
        int i = 0;
        //跳过字符串前边的空格符
        while(str[i] == ' '){
            i++;
        }
        //有效符+、-的情况
        if(str[i] == '+'){
            i++;
        }
        else if(str[i] == '-'){
            i++;
            symbol = -1;
        }
        //数字前有0的情况
        while(str[i] == '0'){
            i++;
        }
        //遍历字符串，记录数字字符
        for(;i < str.size();i++)
        {
            if(str[i] >= '0' && str[i] <= '9'){
                nums.push_back(str[i] - '0');//存储数字字符
            }
            else if(nums.size() == 0){//数字前有字符无法转换
                return 0;
            }
            else {//数字后有字符不再遍历
                break;
            }
        }
        if(nums.size() > 10)//位数过多，超出范围
        {
            if(symbol == 1)
                return INT_MAX;
            else if(symbol == -1)
                return INT_MIN;
        }
        for(i = 0;i < nums.size();i++){//计算转换的整数大小
            ans += pow(10 ,(nums.size() - 1 - i)) * nums[i];
        }
        ans = ans * symbol;
        if(ans > INT_MAX)
            return INT_MAX;
        else if(ans < INT_MIN)
            return INT_MIN;
        else return (int)ans;
    }
};
