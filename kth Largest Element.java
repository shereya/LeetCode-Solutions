class Solution {
    public int findKthLargest(int[] nums, int k) {
        int n=nums.length;
        PriorityQueue<Integer>heap=new PriorityQueue<>(Comparator.reverseOrder());
        for(int i=0;i<n;i++)
        {
            heap.add(nums[i]);
        }
        k=k-1;
        while(k>0)
        {
            heap.remove();
            k--;
        }
       int v = heap.remove();
       return v;
    }
}
