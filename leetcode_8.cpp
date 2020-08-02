class Solution {
public:
    int myAtoi(string str) {
        //�ַ���Ϊ�յ����
        if(str.size() == 0){
            return 0;
        }
        vector<int> nums;//�洢����
        int symbol = 1;//��¼����λ
        long long int ans = 0;
        int i = 0;
        //�����ַ���ǰ�ߵĿո��
        while(str[i] == ' '){
            i++;
        }
        //��Ч��+��-�����
        if(str[i] == '+'){
            i++;
        }
        else if(str[i] == '-'){
            i++;
            symbol = -1;
        }
        //����ǰ��0�����
        while(str[i] == '0'){
            i++;
        }
        //�����ַ�������¼�����ַ�
        for(;i < str.size();i++)
        {
            if(str[i] >= '0' && str[i] <= '9'){
                nums.push_back(str[i] - '0');//�洢�����ַ�
            }
            else if(nums.size() == 0){//����ǰ���ַ��޷�ת��
                return 0;
            }
            else {//���ֺ����ַ����ٱ���
                break;
            }
        }
        if(nums.size() > 10)//λ�����࣬������Χ
        {
            if(symbol == 1)
                return INT_MAX;
            else if(symbol == -1)
                return INT_MIN;
        }
        for(i = 0;i < nums.size();i++){//����ת����������С
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
