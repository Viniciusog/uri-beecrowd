import javax.swing.text.html.HTMLDocument;
import javax.swing.text.html.Option;
import java.util.*;

public class TrieNode {

    private Map<Character, TrieNode> children = new LinkedHashMap<>();
    private boolean endOfWord;

    public TrieNode() {

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