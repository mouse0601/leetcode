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

        //哈希表法
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

        //双指针
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
            //当一次性将high跳跃两格的时候会有越界的风险
            //分两次移动指针，并且在之间放置判断条件解决越界问题
            if(high == nullptr)
                return false;
            high = high->next;  
        }
    }
};
