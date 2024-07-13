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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
      
        ListNode* tmp1 = list1;
        for (int i = 1; i < a; i++) {
            tmp1 = tmp1->next;
        }

        ListNode* tmp2 = tmp1->next;
        for (int i = a; i <= b; i++) {
            tmp2 = tmp2->next;
        }

        tmp1->next = list2;
        ListNode * tmp3 = list2;

        while(tmp3->next != NULL){
            tmp3= tmp3->next;
        }

        tmp3->next = tmp2;
        return list1;

    }
};