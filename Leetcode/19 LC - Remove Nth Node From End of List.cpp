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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        /* APPROACH 1 - BRUTE FORCE
        
        int s=0;
        ListNode* current = head;
        while(current != NULL){
            s++;
            current = current -> next;
        }
        
        if(s==n){
            ListNode* xd = head;
            head = head->next;
            delete xd;
            return head;
        }
        
        int x = s-n;
        current = head;
        int counter = 1;
        while(counter != x){
            counter++;
            current = current -> next;
        }
        
        ListNode* del = current->next;
        current->next = del->next;
        delete del;
        
        return head;
        
        
        APPROACH 2 - 
        */
        
        ListNode* temp = new ListNode();
        temp -> next = head;
        
        ListNode* slow = temp;
        ListNode* fast = temp;
        
        for(int i=0; i<n; i++){
            fast = fast->next;
        }
        
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return temp->next;
    }
};