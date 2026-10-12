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
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode*p = head;
        ListNode*temp = head;
        while(temp != NULL){
            st.push(temp->val);
            temp = temp->next;
        }
        while(p!=NULL){
            if(st.top() != p->val){
                return false;
            }
            st.pop();
            p = p->next;
        }
        return true;
    }
};