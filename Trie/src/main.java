public class main {
    public static void main(String[] args) {

        Trie trie = new Trie();
        trie.print();

        String word1 = "pudimo";
        String word2 = "amdimkadimo";

        for (int i = 0; i <= word1.length() - 1; i++) {
            for (int j = i + 1; j <= word1.length(); j++) {
                String subs = word1.substring(i, j);
                trie.insert(subs);
            }
        }

        int maxLength = 0;
        String max = "";
        for (int i = 0; i <= word2.length() - 1; i++) {
            for (int j = i + 1; j <= word2.length(); j++) {
                String subs = word2.substring(i, j);
                if (trie.containsWord(subs) && subs.length() > maxLength) {
                    maxLength = subs.length();
                    max = subs;
                }
            }
        }

        System.out.println("Max string: " + max + ", max size: " + maxLength);

        trie.print();
    }
}