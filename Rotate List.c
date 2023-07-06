/*Complexity
- Time complexity:
O(n^2). Runtime = 0ms
- Space complexity:
Memory Occupied - 6.2 MB*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL)
    {
        return head;
    }
    else{
        struct ListNode *ptr=head;
        int length=0;
        while(ptr!=NULL){
            length=length+1;
            ptr=ptr->next;
        }
        k=k%length;
        for(int i=0;i<k;i++){
            ptr=head->next;
            int temp1 = head->val;
            int temp2;
            while(ptr!=NULL)
            {
                temp2=ptr->val;
                ptr->val=temp1;
                temp1=temp2;
                ptr=ptr->next;
            }
            head->val=temp1;
        }
        return head;
    }
}
