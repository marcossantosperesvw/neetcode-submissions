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
        if (head == nullptr) {
            return {};

        }

        ListNode *prev = nullptr;
        ListNode *atual = head;

        while (atual != nullptr) {
            ListNode *tmp = atual;
            atual = atual->next;
            tmp->next = prev;
            prev = tmp;
            if (atual == nullptr) {
                return prev;
            }

        }

        return nullptr;
        
    }
};
