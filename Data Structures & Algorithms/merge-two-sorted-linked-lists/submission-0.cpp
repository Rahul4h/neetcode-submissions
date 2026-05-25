/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode nod;
        ListNode *rah=&nod;
        while(list1!=nullptr && list2!=nullptr)
        {
            if(list1->val < list2->val)
            {
                rah->next=list1;
                list1=list1->next;
            }
            else
            {
                rah->next=list2;
                list2=list2->next;
            }
            rah=rah->next;
        }
        if(list1!=nullptr)
        {
            rah->next=list1;
        }
        else
        {
            rah->next=list2;
        }
        return nod.next;

    }
};
