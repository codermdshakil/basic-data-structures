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
    // print function
    void printList(ListNode* head) {
        while (head != NULL) {
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl << endl;
    }
    // insert at tail function
    void insertAtTail(ListNode*& head, ListNode*& tail, int val) {
        ListNode* newNode = new ListNode(val);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }

    // reverse function
    void reverse(ListNode*& head, ListNode* cur) {
        if (cur->next == NULL) {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;

        ListNode* tmp = head;
        while (tmp != NULL) {
            insertAtTail(newHead, newTail, tmp->val);
            tmp = tmp->next;
        }

        reverse(newHead, newHead);
        tmp = head;
        ListNode* newTmp = newHead;
        while (tmp != NULL) {
            if (tmp->val != newTmp->val) {

                return false;
            }
            tmp = tmp->next;
            newTmp = newTmp->next;
        }
        return true;
    }
};

/**
 * steps
 * 1. make a new singly list using current singly list
 * 2. reverse new singly list 
 * 3. compare 2 linked list value if value not same then return false 
*/