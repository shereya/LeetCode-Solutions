//35/51 cases passed
class Solution {
    public int[] maxSlidingWindow(int[] a, int k) {
        int left = 0;
        int count = 0;
        int right;
        int n = a.length;
        int[] result = new int[n - k + 1];
        PriorityQueue<Integer> heap = new PriorityQueue<>(Comparator.reverseOrder());
        for (right = 0; right < a.length; right++) {
            heap.add(a[right]);
            count++;
            if (count == k) {
                result[left] = heap.peek();
                heap.remove();
                while (heap.size() != 0) {
                    heap.remove();
                }
                left++;
                for (int i = left; i <= right; i++) {
                    heap.add(a[i]);
                }
                count--;
            }
        }
        return result;
    }
}
