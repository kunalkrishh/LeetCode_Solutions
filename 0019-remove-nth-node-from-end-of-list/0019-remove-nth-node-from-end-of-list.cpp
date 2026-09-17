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
        vector<ListNode*> arr;
        ListNode* temp = head;
        while(temp != NULL)
        {
            arr.push_back(temp);
            temp = temp->next;
        }
        int i = arr.size() - n;
        if(i == 0)
        {
            return head->next;
        }
        arr[i-1]->next = arr[i]->next;
        return head;
    }
};