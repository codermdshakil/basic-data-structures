/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        for (ListNode* tmpA = headA; tmpA != NULL; tmpA = tmpA->next) {
            for (ListNode* tmpB = headB; tmpB != NULL; tmpB = tmpB->next) {
                if(tmpA == tmpB){
                    return tmpA;
                }
            }
        }
        return NULL;
    }
};