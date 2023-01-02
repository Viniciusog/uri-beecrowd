/*import java.io.BufferedReader;
import java.util.Scanner;

public class main {

    public static boolean ehPrimo(int numero) {
        boolean flag = true;
        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                    flag = false;
            }
        }
        return flag;
    }

    public static void main(String[] args) {
        BufferedReader =
        Scanner te = new Scanner(System.in);

        int continuar = 1;

        while (continuar == 1) {
            int casos = te.nextInt();

            for (int i = 0; i < casos; i++) {
                System.out.println((i+1) + "º caso: ");
                int qtdNumeros = te.nextInt(); // Quantidade de números que serão lidos
                System.out.println("Quantidade de números: " + qtdNumeros);
                int array[] = new int[qtdNumeros];
                for (int j = 0; j < qtdNumeros; j++) {
                    array[j] = te.nextInt();
                    System.out.println(array[j] + " é o " + (j+1) + "º número do " + (i+1) + "º caso");
                }
                int salto = te.nextInt();
                // se tivermos 7 números e o salto for 2, teremos
                // k = 7-1 = 6
                // k = 4
                // k = 2
                // k = 0
                int soma = 0;
                for (int k = qtdNumeros-1; k >= 0; k -= salto) {
                    soma += array[k];
                    System.out.println("Valor de k: " + k);
                }
                if (ehPrimo(soma)) {
                    System.out.println("O valor da soma " + soma + " é primo!");
                } else {
                    System.out.println("O valor da soma " + soma + " não é primo!");
                }
            }
            System.out.println("Continuar (sim ou não)");
            continuar = te.nextInt();
        }
    }
}
*/