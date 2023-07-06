/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//25/30 Testcases passed
struct ListNode* sortList(struct ListNode* head){
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    else{
        int temp;
        int arr[50000],e=0;
        struct ListNode *ptr=head;
        while(ptr!=NULL)
        {
            arr[e]=ptr->val;
            e++;
            ptr=ptr->next;
        }
        for(int i=0;i<e;i++)
        {
            for(int j=0;j<e-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        ptr=head;
        e=0;
        while(ptr!=NULL)
        {
            ptr->val=arr[e];
            e++;
            ptr=ptr->next;
        }
        return head;
    }
}
