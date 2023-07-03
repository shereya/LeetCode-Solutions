/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head){
    struct ListNode* ptr=head;
    struct ListNode* temp;
    while(ptr->next!=NULL){
        int s = 0;
        temp=ptr->next;
        while(temp->val!=0){
            s = s + temp->val;
            temp = temp->next;
        }
        temp->val = s;
        ptr->next=temp;
        ptr=ptr->next;
    }
    head=head->next;
    return head;
}
