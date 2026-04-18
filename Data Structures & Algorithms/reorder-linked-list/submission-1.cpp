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
    ListNode* reverse(ListNode* l2)
    {
        ListNode* curr = l2;
        ListNode* prev = nullptr;
        while(curr!=nullptr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* l2 = slow->next;
        ListNode* l1 = head;
        slow->next = NULL;
        l2 = reverse(l2);
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        bool isFirst = true;
        while(l1!=nullptr && l2!=nullptr)
        {
            if(isFirst)
            {
               
                ListNode* next = l1->next;
                l1->next = l2;
                l1 = next;
            }
            else
            {
                ListNode* next = l2->next;
                l2->next = l1;
                l2 = next;
            }
            isFirst=!isFirst;
        }

       

    }
};
