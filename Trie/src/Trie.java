import java.util.Map;

public class Trie {

    private TrieNode root = new TrieNode();

    public Trie() {

    }

    public void insert(String word) {
        addWord(word, root);
    }

    private void addWord(String word, TrieNode node) {
        int index = 0;
        Character c = word.charAt(index);
        TrieNode currentNode = node.getChildren().get(c);
        // Se o char c ainda não tiver sido adicionado
        if (currentNode == null) {
            add(c, node);
        }
        index++;
        // Se não for a última letra, então continua inserindo as próximas letras
        if (index < word.length()) {
            addWord(word.substring(index), node.getChildren().get(c));
        }
    }

    private void add(Character c, TrieNode node) {
        TrieNode newNode = new TrieNode();
        newNode.setEndOfWord(false);
        node.getChildren().put(c, newNode);
    }

    // Funciona como wrapper
    public boolean containsWord(String word) {
        return containsWordFunc(word, root);
    }

    // Verifica se uma palavra está dentro da trie
    public boolean containsWordFunc(String word, TrieNode node) {
        int index = 0;
        Character c = word.charAt(index);

        if (node.getChildren().get(c) == null) {
            return false;
        }
        index++;
        // Se chegou aqui e está tentando verificar a próxima letra depois da última, então é porque
        // a palavra completa está dentro da trie, pois se não estivesse, teria saído antes pelo return false.
        if (index == word.length()) {
            return true;
        }
        return containsWordFunc(word.substring(index), node.getChildren().get(c));
    }

    // Funciona como wrapper
    public void print() {
        printFunc(root.getChildren());
    }

    public void printFunc(Map<Character, TrieNode> map) {
        Integer cont = 0;
        System.out.print("[");
        for (Map.Entry<Character, TrieNode> e : map.entrySet()) {
            System.out.print("key:" + e.getKey() + ", value:");
            printFunc(e.getValue().getChildren());
            cont++;
            if (cont < map.size()) {
                System.out.print("; ");
            }
        }
        System.out.print("]");
    }
}