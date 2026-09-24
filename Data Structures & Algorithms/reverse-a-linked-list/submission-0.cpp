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
        auto atual = head;
        ListNode *prev = nullptr;
        ListNode *ans;
        while (atual != nullptr) {
            auto aux = atual;
            ans = atual;
            atual = atual->next;
            aux->next = prev;
            prev = aux;

        }
        
        return ans;


        

    }
};
