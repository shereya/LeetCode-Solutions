import java.util.*;
public class connectSticks
{
    public static void main(String[]args)
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        PriorityQueue<Integer>heap=new PriorityQueue<>();
        for(int i=0;i<n;i++)
        {
            int el=in.nextInt();
            heap.add(el);
        }
        if(n==1)
        {
            System.out.print(0);
        }
        else
        {
            int cost=0;
            while(heap.size()!=1)
            {
                int f =heap.remove();
                int s=heap.remove();
                cost=cost+f+s;
                heap.add(f+s);
            }
            System.out.print(cost);
        }
    }
}
