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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = NULL;
        ListNode* head = NULL;
        int carry = 0;
        while(l1 || l2 || carry){
            int val = (l1?l1->val:0) + (l2?l2->val:0) + carry;
            carry = val / 10;
            val %= 10;

            if(l3 == NULL){
                l3 = new ListNode(val);
                head = l3;
            }
            else{
                l3->next = new ListNode(val);
                l3 = l3->next;
            }

            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        l3 = head;
        return l3;
    }
};