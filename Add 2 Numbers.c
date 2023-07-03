/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//1565/1568 cases passed. Runtime 6ms 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *ptr= l1;
    struct ListNode *head = malloc(sizeof(struct ListNode));
    struct ListNode *newnode;
    long long int n1 = 0;
    long long int n2 = 0;
    long long int n1_rev=0;
    long long int n2_rev=0;
    int r1 =0;
    int r2=0;
    long long int n = 0;
    int r = 0;
    int c1=0;
    int c2=0;
    while(ptr!=NULL && ptr->val==0){
        c1=c1+1;
        ptr=ptr->next;
    }
    ptr=l1;
    while(ptr!=NULL){
        n1=(n1*10) + ptr->val;
        ptr=ptr->next;
    }
    ptr=l2;
    while(ptr!=NULL&&ptr->val==0){
        c2=c2+1;
        ptr=ptr->next;
    }
    ptr=l2;
    while(ptr!=NULL){
        n2=(n2*10) + ptr->val;
        ptr=ptr->next;
    }
    while(n1!=0){
        r1 = n1%10;
        n1_rev = (n1_rev*10)+r1;
        n1 = n1/10;
    }
    while(n2!=0){
        r2 = n2%10;
        n2_rev = (n2_rev*10)+r2;
        n2 = n2/10;
    }
    for(int i=0;i<c1;i++){
        n1_rev=n1_rev*10;
    }
    for(int i=0;i<c2;i++){
        n2_rev=n2_rev*10;
    }
    n = n1_rev+n2_rev;
    r = n%10;
    n = n/10;
    head -> val = r;
    head ->next = NULL;
    ptr = head;
    while(n!=0){
        r = n%10;
        n=n/10;
        newnode = malloc(sizeof(struct ListNode));
        newnode->val = r;
        ptr->next = newnode;
        ptr = ptr->next;
    }
    ptr->next=NULL;
    return head;
}
