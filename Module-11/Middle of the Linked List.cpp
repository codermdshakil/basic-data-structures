class Solution {
public:
    int size(ListNode* head) {
        int cnt = 0;
        ListNode * tmp = head;
        while(tmp != NULL){
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int mid = size(head);
        ListNode * tmp = head;
        for(int i = 0; i<mid/2; i++){
            tmp = tmp->next;
        }
        return tmp;
    }
};