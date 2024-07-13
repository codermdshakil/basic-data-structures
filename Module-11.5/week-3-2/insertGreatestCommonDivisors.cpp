 class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode * tmp = head;
        while(tmp->next != NULL){
            int gcd = __gcd(tmp->val, tmp->next->val);
            ListNode * newNode = new ListNode(gcd);
            newNode->next = tmp->next;
            tmp->next = newNode;
            tmp = tmp->next->next;
        }
        return head;
        
    }
};