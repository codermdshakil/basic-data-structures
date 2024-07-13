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
    int size(ListNode* head) {
        int cnt = 0;
        while (head != NULL) {
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    int getDecimalValue(ListNode* head) {
        int sz = size(head);
        int x = pow(2, sz - 1);
        int ans = 0;
        for (ListNode* tmp = head; tmp != NULL; tmp = tmp->next) {
            if (tmp->val == 1) {
                ans = ans + x;
            }
            x = x / 2;
        }
        return ans;
    }
};