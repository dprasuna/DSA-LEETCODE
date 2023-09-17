class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* slow=head,*fast=head;
        
        while(n--) fast=fast->next;
        
        if(!fast) return head->next;
        
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        
        return head;
    }
};
