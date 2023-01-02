public class main {
    public static void main(String[] args) {

        TrieNode node = new TrieNode();
        node.setEndOfWord(false);

        node.addWord("AB", node);
        node.addWord("AC", node);
        node.print(node.getChildren());

        System.out.println("\n" + node.containsWord("AT", node));
    }
}