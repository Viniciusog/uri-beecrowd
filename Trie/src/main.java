public class main {
    public static void main(String[] args) {

        Trie trie = new Trie();

        trie.insert("AB");
        trie.insert("AC");
        trie.print();

        System.out.println("\n" + trie.containsWord("AT"));

        /*String word1 = "pudim";
        String word2 = "amdimka";


        for (int i = 0; i < word1.length() - 1; i++) {
            for (int j = i + 1; j < word1.length(); j++) {

            }
        }*/
    }
}