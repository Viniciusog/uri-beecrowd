import javax.swing.text.html.HTMLDocument;
import javax.swing.text.html.Option;
import java.util.*;

public class TrieNode {

    private Map<Character, TrieNode> children = new LinkedHashMap<>();
    private boolean endOfWord;

    public TrieNode() {

    }

    // Verifica se uma palavra está dentro da trie
    public boolean containsWord(String word, TrieNode node) {
        int index = 0;
        Character c = word.charAt(index);

        if (node.getChildren().get(c) == null) {
            return false;
        }
        index++;
        // Se chegou até aqui e está tentando verificar a próxima letra depois da última, então é porque
        // a palavra completa está dentro da trie, pois se não estivesse, teria saído antes pelo return false.
        if (index == word.length()) {
            return true;
        }
        return containsWord(word.substring(index), node.getChildren().get(c));
    }

    public void addWord(String word, TrieNode node) {
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

    public void add(Character c, TrieNode node) {
        TrieNode newNode = new TrieNode();
        newNode.setEndOfWord(false);
        node.getChildren().put(c, newNode);
    }

    public void print(Map<Character, TrieNode> map) {
        Integer cont = 0;
        System.out.print("[");
        for (Map.Entry<Character, TrieNode> e : map.entrySet()) {
            System.out.print("key:" + e.getKey() + ", value:");
            print(e.getValue().getChildren());
            cont++;
            if (cont < map.size()) {
                System.out.print("; ");
            }
        }
        System.out.print("]");
    }

    public Map<Character, TrieNode> getChildren() {
        return this.children;
    }

    public boolean getEndOfWord() {
        return this.endOfWord;
    }

    public void setEndOfWord(Boolean endOfWord) {
        this.endOfWord = endOfWord;
    }
}