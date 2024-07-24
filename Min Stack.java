//min-stack 18/31
class MinStack {
    public Stack<Integer>stack;
    public MinStack() {
        stack = new Stack<Integer>();
    }
    
    public void push(int val) {
        stack.push(val);
    }
    
    public void pop() {
        stack.pop();
    }
    
    public int top() {
        return stack.peek();
    }
    
    public int getMin() {
        Stack<Integer>tempstack = new Stack();
        int el;
        while(!stack.isEmpty())
        {
            el = stack.peek();
            tempstack.push(el);
            stack.pop();
        }
        int min = Integer.MAX_VALUE;    
        while(!tempstack.isEmpty())
        {
            el = tempstack.peek();
            min = Math.min(min,el);
            tempstack.pop();
            stack.push(el);
        }
        return min;
    }
}
