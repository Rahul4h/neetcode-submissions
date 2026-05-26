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
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;
        stack<ListNode*>st;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            st.push(curr);
             curr=curr->next;
        }
        curr=head;
        int x=st.size();
        for(int i=0;i<x/2;i++)
        {
           ListNode* last=st.top() ;
           st.pop();
           ListNode* net=curr->next;
           curr->next=last;
           last->next=net;
           curr=net;

        }
         curr->next=nullptr;   
         
        
    }
};
