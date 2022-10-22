
ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        if(head == NULL || head->next == NULL)
            return head;
        while(temp != NULL && temp->next!=NULL){
            if(temp -> val == temp->next->val){
                temp->next = temp->next->next;
                
            }
            else{
                temp = temp->next;
            }
        }
        return head;
        
    }