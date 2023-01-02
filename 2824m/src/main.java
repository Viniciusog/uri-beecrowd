import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.stream.Collectors;

public class main {
    public static void func1() {
        Scanner te = new Scanner(System.in);

        String s1 = "pudim";
        String s2 = "algodimha";

        int max = 0;
        String maxStr = "";

        for (int i = 0; i < s1.length() - 1; i++) {
            for (int j = i + 1; j <= s1.length(); j++) {
                String subs  = s1.substring(i, j);
                if (s2.contains(subs) && subs.length() >= max) {
                    max = subs.length();
                    maxStr = subs;
                }
            }
        }
        System.out.println("Maior subtring: " + maxStr);
    }

    public static void func2() {
        Map map = new LinkedHashMap();
        String str = "vinicius";

        //   o   l  a
        // 0   1   2  3
        for (int i = 0; i < str.length() - 1; i++) {
            for (int j = i + 1; j <= str.length(); j++) {
                map.put(i+""+j, str.substring(i, j));
            }
        }

        for (Object s : map.values()) {
            System.out.println(s + ", key: "  + map.values().stream().filter(k -> map.get(k) == s.toString()).collect(Collectors.toList()));
        }
    }

    public static void func3() {
        char letra = 65;
        Character l = Character.valueOf(letra);
        System.out.println(l);
    }


    public static void main(String[] args) {
        func3();
    }

    private static class Animal {
        private String nome;

    }

    private static class Gato extends Animal {
        private Integer idade;
    }

    private static class GatoAmarelo extends Gato {

    }

}