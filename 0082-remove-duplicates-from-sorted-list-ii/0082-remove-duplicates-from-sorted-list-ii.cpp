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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode temp(0);
        temp.next = head;
        ListNode *prev = &temp;
        ListNode *cur = head;
        while(cur != nullptr )
        {
            if(cur->next != nullptr && cur->val == cur->next->val)
            {
                while(cur->next != nullptr && cur->val == cur->next->val)
                {
                    cur = cur->next;
                }
                prev->next = cur->next;
            }
            else{
                prev = prev->next;
            }
            cur = cur->next;
        }
        return temp.next;

    }
};