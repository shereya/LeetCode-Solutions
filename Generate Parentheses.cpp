class Solution {
public:
    char stack[8];
    int top = -1;

    void push(char c) {
        stack[++top] = c;
    }

    void pop() {
        top = top - 1;
    }

    int isEmpty() {
        return top == -1;
    }

    void permute(vector<string>& v, string s, int l, int r) {
        if (l == r) {
            v.push_back(s);
            return;
        }
        for (int i = l; i <= r; i++) {
            swap(s[l], s[i]);
            permute(v, s, l + 1, r);
            swap(s[l], s[i]); // Restore to original state
        }
    }
    vector<string> generateParenthesis(int n) {
        map<string,int>m;
        vector<string> v;
        vector<string>remdup;
        string s = "";
        for (int i = 0; i < n * 2; i++) {
            if (i % 2 == 0) {
                s = s + '(';
            } else {
                s = s + ')';
            }
        }

        permute(v, s, 0, s.length() - 1);

        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v[i].size(); j++) {
                if (v[i][j] == '(') {
                    push(v[i][j]);
                }
                if (v[i][j] == ')' && !isEmpty()) {
                    pop();
                }
            }
            if (isEmpty()) {
                m[v[i]]++;
            }
            top = -1; // Reset the stack for the next iteration
        }
        for(int i=0;i<v.size();i++)
        {
            if(m[v[i]]!=0)
            {
                remdup.push_back(v[i]);
                m[v[i]]=0;
            }
        }
        return remdup;
    }
};
