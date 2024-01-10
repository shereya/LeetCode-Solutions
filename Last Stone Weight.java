    class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> heap = new PriorityQueue<>(Comparator.reverseOrder());
        int n = stones.length;
        for (int i = 0; i < n; i++) {
            int el = stones[i];
            heap.add(el);
        }
        while (heap.size() > 1) {
            int f = heap.remove();
            int s = heap.remove();
            if (f != s) {
                heap.add(Math.abs(f - s));
            }
        }
        if (heap.size() == 1) {
            return heap.remove();
        } else {
            return 0;
        }
    }
}
