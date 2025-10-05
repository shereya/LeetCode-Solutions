class Solution {
    public int numberOfSteps(int num) {
        int ans = countSteps(num, 0);
        return ans;
    }
    public int countSteps(int n, int count){
        if(n==0){
            return count;
        }
        else{
            if(n%2==0){
                count++;
                return countSteps(n/2, count);
            }
            else{
                count++;
                return countSteps(n-1,count);
            }
        }
    }
}
