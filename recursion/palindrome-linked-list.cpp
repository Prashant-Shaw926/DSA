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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* PREV = NULL;
        ListNode* CURR = slow;
        while (CURR != nullptr) {
            ListNode* NEXT = CURR->next;
            CURR->next = PREV;
            PREV = CURR;
            CURR = NEXT;
        }

        ListNode* temp = head;
        while (PREV != nullptr) {
            if (temp->val != PREV->val) {
                return false;
            }
            temp = temp->next;
            PREV = PREV->next;
        }
        return true;
    }
};