class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* nextNode = curr->next; // save next node
            curr->next = prev;              // reverse link
            prev = curr;                    // move prev forward
            curr = nextNode;                // move curr forward
        }

        return prev;
    }
};