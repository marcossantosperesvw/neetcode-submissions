class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Stack dummy node to serve as the start anchor
        ListNode dummy(0);
        ListNode* tail = &dummy;

        // Traverse both lists and append the smaller node
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        // Attach remaining nodes from list1 or list2
        tail->next = (list1 != nullptr) ? list1 : list2;

        return dummy.next;
    }
};