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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* ptr = nullptr;

        if(temp == nullptr){
            return nullptr;
        }

        while(temp != nullptr && temp->val == val){
            if(temp->next != nullptr){
                head = temp->next;
                temp = head;
            }else{
                return nullptr;
            }
        }

        while (temp != nullptr && temp->next != nullptr) {
            if (temp->next->val == val) {
                ptr = temp->next;
                temp->next = temp->next->next;
                delete ptr;
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};