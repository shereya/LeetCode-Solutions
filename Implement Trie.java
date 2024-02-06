class TrieNode {
    TrieNode[] children;
    boolean isEndOfWord;

    public TrieNode() {
        children = new TrieNode[26]; // 26 lowercase English letters
        isEndOfWord = false;
    }
}
class Trie {
    TrieNode root;

    public Trie() {
        root = new TrieNode();
    }

    public void insert(String word) {
        TrieNode node = root;
        for(int i=0;i<word.length();i++)
        {
            int index = word.charAt(i)-'a';
            if(node.children[index]==null)
            {
                node.children[index] = new TrieNode();
            }
            if(i==word.length()-1)
            {
                node.children[index].isEndOfWord= true;
            }
            node = node.children[index];
        }
    }

    public boolean search(String word) {
    TrieNode node = root;
    for (int i = 0; i < word.length(); i++) {
        int index = word.charAt(i) - 'a';
        if (node.children[index] == null) {
            return false;
        }
        if (i == word.length() - 1 && node.children[index].isEndOfWord == false) {
            return false;
        }
        node = node.children[index];
    }
    return true;
}


    public boolean startsWith(String prefix) {
        TrieNode node = root;
        for (int i=0;i<prefix.length();i++) {
            int index = prefix.charAt(i) - 'a';
            if (node.children[index] == null) {
                return false;
            }
            node = node.children[index];
        }
        return true;
    }
}

