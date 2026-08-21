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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0, newDigit = 0;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        while (temp1 != nullptr || temp2 != nullptr || carry != 0) {

            int val1 = temp1 != nullptr ? temp1->val : 0;
            int val2 = temp2 != nullptr ? temp2->val : 0;

            int newDigit = val1 + val2 + carry;
            carry = newDigit / 10;
            newDigit = newDigit % 10;

            ListNode* newNode = new ListNode(newDigit);
            temp->next = newNode;
            temp = temp->next;

            if (temp1 != nullptr) {
                temp1 = temp1->next;
            }
            if (temp2 != nullptr) {
                temp2 = temp2->next;
            }
        }

        ListNode* ans = dummy->next;
        delete dummy;

        return ans;
    }
};