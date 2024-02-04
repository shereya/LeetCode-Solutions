/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode ptr1 = list1;
        ListNode ptr2 = list2;
        ListNode res = new ListNode(-1);
        ListNode current = res;
        while(ptr1!=null&&ptr2!=null)
        {
            if(ptr1.val<ptr2.val)
            {
                current.next = new ListNode(ptr1.val);
                current = current.next;
                ptr1=ptr1.next;
            }
            else if(ptr1.val>ptr2.val)
            {
                current.next = new ListNode(ptr2.val);
                current = current.next;
                ptr2=ptr2.next;
            }
            else
            {
                current.next = new ListNode(ptr1.val);
                current = current.next;
                current.next = new ListNode(ptr2.val);
                current = current.next;
                ptr2=ptr2.next;
                ptr1=ptr1.next;
            }
            
        }
        while (ptr1 != null) 
        {
            current.next = new ListNode(ptr1.val);
            current = current.next;
            ptr1 = ptr1.next;
        }
        while (ptr2 != null) 
        {
            current.next = new ListNode(ptr2.val);
            current = current.next;
            ptr2 = ptr2.next;
        }
        return res.next;
    }
}
