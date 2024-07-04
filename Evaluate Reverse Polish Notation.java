class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> st = new Stack<>();
        int a, b, val = 0;
        for (String token : tokens) 
        {
            if (token.matches("-?\\d+")) 
            { 
                st.push(Integer.parseInt(token));
            } else 
            {
                b = st.pop();
                a = st.pop();
                switch (token) 
                {
                    case "+":
                        val = a + b;
                        break;
                    case "-":
                        val = a - b;
                        break;
                    case "*":
                        val = a * b;
                        break;
                    case "/":
                        val = a / b;
                        break;
                }
                st.push(val);
            }
        }
        return st.peek();
    }
}
