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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //时间和空间复杂度高
        /*ListNode *p1,*p2;
        p1 = headA;
        p2 = headB;
        while(p1)
        {
            p2 = headB;
            while(p2)
            {
                if(p1 == p2)
                {
                    return p1;
                }
                p2 = p2->next;
            }
            p1 = p1->next;
        }
        return nullptr;*/
        //时间和空间复杂度都高
        /*unordered_map<ListNode*,int> hash;
        ListNode *p1 = headA,*p2 = headB;
        while(p1)
        {
            hash[p1]++;
            p1 = p1->next;
        }
        while(p2)
        {
            if(hash[p2])
            {
                return p2;
            }
            hash[p2]++;
            p2 = p2->next;
        }
        return nullptr;*/
        //双指针法
        ListNode *p1 = headA,*p2 = headB;
        if(!p1 || !p2)
            return nullptr;
        int flag1 = 1,flag2 = 0;
        while(p1 != p2)
        {
            if(p1 == nullptr && p2 == nullptr)
                return nullptr;
            if(p1 == nullptr && flag1 == 1)
            {
                p1 = headB;
                flag1 ^= 1;
                continue;
            }
            else if(p1 == nullptr)
            {
                p1 = headA;
                flag1 ^= 1;
                continue;
            }

            if(p2 == nullptr && flag2 == 1)
            {
                p2 = headB;
                flag2 ^= 1;
                continue;
            }
            else if(p2 == nullptr)
            {
                p2 = headA;
                flag2 ^= 1;
                continue;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return p1;
    }
};
