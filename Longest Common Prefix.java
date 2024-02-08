class TrieNode {
    TrieNode[] children;
    boolean eow;

    public TrieNode() {
        children = new TrieNode[26];
        eow = false;
    }
}

class Solution {
    TrieNode root;

    public Solution() {
        root = new TrieNode();
    }

    public void insert(String word) {
        TrieNode node = root;
        for (int i = 0; i < word.length(); i++) {
            int index = word.charAt(i) - 'a';
            if (node.children[index] == null) {
                node.children[index] = new TrieNode();
            }
            if (i == word.length() - 1) {
                node.children[index].eow = true;
            }
            node = node.children[index];
        }
    }

    public int prefix(String word) {
        TrieNode node = root;
        int right = 0;
        for (int i = 0; i < word.length(); i++) {
            int index = word.charAt(i) - 'a';
            if (node.children[index] == null) {
                return right;
            } 
            right = right + 1;
            node = node.children[index];
        }
        return right;
    }
        public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) {
            return "";
        }
        for (String word : strs) {
            insert(word);
        }
        StringBuilder prefix = new StringBuilder();
        for (int i = 0; i < strs[0].length(); i++) {
            char c = strs[0].charAt(i);
            for (int j = 1; j < strs.length; j++) {
                if (i >= strs[j].length() || strs[j].charAt(i) != c) {
                    return prefix.toString();
                }
            }
            prefix.append(c);
        }
        return prefix.toString();
    }
}
