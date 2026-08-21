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
    ListNode* reverseList(ListNode* head) {
        ListNode* PREV = NULL;
        ListNode* CURR = head;

        if (CURR == nullptr) {
            return nullptr;
        }

        while (CURR != nullptr) {
            ListNode* NEXT = CURR->next;
            CURR->next = PREV;
            PREV = CURR;
            CURR = NEXT;
        }

        return PREV;
    }
};