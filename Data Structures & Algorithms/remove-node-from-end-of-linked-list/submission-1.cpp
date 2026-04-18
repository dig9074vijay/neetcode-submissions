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
        int size = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            temp=temp->next;
            size++;
        }
        int nth = size-n;
        temp = head;
        if(size==1 && n ==1) return NULL;
        
        while(temp!=nullptr)
        {
           
            if(nth==1)
            {
                break;
            } 
            temp = temp->next;
            nth--;
        }
        if(size==n) return head->next;
        ListNode* deleted = temp->next;
        temp->next = temp->next->next;
        return head;
    }
};
