/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(head==NULL){
        return NULL;
    }
    else{
        struct ListNode *ptr = head;
        int c=0;
        while(ptr!=NULL){
            c=c+1;
            ptr=ptr->next;
        }
        if (n==c) {
            head = head->next;
            return head;
        }
        else{
            ptr=head;
            for(int i=1;i<c-n;i++){
                ptr=ptr->next;
            }
            ptr->next=ptr->next->next;
            return head;
        }
    }
}

