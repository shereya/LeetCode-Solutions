class Solution {
    public boolean isPathCrossing(String path) {
        String s = path;
        Set<ArrayList<Integer>>set=new HashSet<>();
        int x=0;
        int y=0;
        ArrayList<Integer>o=new ArrayList<>();
        o.add(0);
        o.add(0);
        set.add(o);
        boolean flag=false;
        for(int i=0;i<s.length();i++)
        {
        ArrayList<Integer>l=new ArrayList<>();
        char c = s.charAt(i);
        if(c=='N')
        {
            x++;
        }
        else if(c=='S')
        {
            x--;
        }
        else if(c=='E')
        {
            y++;
        }
        else
        {
            y--;
        }
        l.add(x);
        l.add(y);
        if(!set.contains(l))
        {
            set.add(l);
        }
        else
        {
            flag=true;
            break;
        }
        return flag;
    }
}
