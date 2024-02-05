class Solution {
    public int[] topKFrequent(int[] nums, int k) {
          Map<Integer,Integer>hash = new HashMap<>();
          for(int i=0;i<nums.length;i++)
          {
              if(hash.containsKey(nums[i]))
              {
                  int v=hash.get(nums[i]);
                  v=v+1;
                  hash.put(nums[i],v);
              }
              else
              {
                  hash.put(nums[i],1);
              }
          }
          PriorityQueue<Integer>heap=new PriorityQueue<>((a,b)->hash.get(b)-hash.get(a));
          heap.addAll(hash.keySet());
          int[]vals=new int[k];
          for(int i=0;i<k;i++)
          {
              vals[i]=heap.poll();
          }
          return vals;
    }
}
