/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        //��ϣ��
        /*unordered_map<ListNode*,int> hash;
        ListNode* p = head;
        while(p != nullptr)
        {
            
            if(hash[p])
                return true;
            hash[p] = 1;
            p = p->next;
        }
        return false;*/

        //˫ָ��
        ListNode *high,*low;
        if(head != nullptr)
            high = head->next;
        else return false;
        low = head;
        while(1)
        {
            if(high == low)
                return true;
            if(high == nullptr)
                return false;
            low = low->next;
            high = high->next;    
            //��һ���Խ�high��Ծ�����ʱ�����Խ��ķ���
            //�������ƶ�ָ�룬������֮������ж��������Խ������
            if(high == nullptr)
                return false;
            high = high->next;  
        }
    }
};
