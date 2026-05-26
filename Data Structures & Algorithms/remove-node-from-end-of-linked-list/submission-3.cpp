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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr)
        
        {
            head=nullptr;
           return head;
        }
       else if(head->next->next==nullptr)
       {
         if(n==2)
         {
            head=head->next;
            return head;
         }
         if(n==1)
         {
              head->next=nullptr;
              return head;
         }
       }
        stack<ListNode*>st;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            st.push(curr);
            curr=curr->next;
        }

        int x=st.size();
        ListNode* a=nullptr;
        ListNode* b=nullptr;
        ListNode* c=nullptr;
        if(n==x)
        {
            head=head->next;
            return head;
        }
        else
        {
        for(int i=1;i<=n+1;i++)
        {
            if(i==n+1)
            {
                 a=st.top();

            }
            if(i==n)
            {
                b=st.top();
            }
            if(i==n-1)
            {
                 c=st.top();
            }
            st.pop();
        }
        a->next=c;
        return head;
        }
        
    }
};
