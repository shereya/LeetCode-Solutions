class Solution {
    public int[] sortArray(int[] nums) {
        PriorityQueue<Integer>heap=new PriorityQueue<>();
        int [] a = new int[nums.length];
        int c=0;
        for(int i=0;i<nums.length;i++)
        {
            heap.add(nums[i]);
        }
        while(heap.size()>0)
        {
            a[c++]=heap.peek();
            heap.remove();
        }   
        return a;
    }
}
