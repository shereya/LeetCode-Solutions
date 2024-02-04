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
    public ListNode mergeKLists(ListNode[] lists) {
        PriorityQueue<Integer>heap=new PriorityQueue<>();
        for(ListNode list:lists)
        {
            ListNode curr=list;
            while(curr!=null)
            {
                heap.add(curr.val);
                curr=curr.next;
            }
        }
        ListNode dummy = new ListNode(-1);
        ListNode current = dummy;
        while (!heap.isEmpty()) {
            current.next = new ListNode(heap.poll());
            current = current.next;
        }
        return dummy.next;
    }
}
