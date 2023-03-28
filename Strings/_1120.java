import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


public class _1120 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        List<String> entradas = new ArrayList<>();

        String entrada;
        do {
            entrada = scan.nextLine();
            if (!entrada.equals("0 0")) {
                entradas.add(entrada);
            }
        } while (!entrada.equals("0 0"));

        for (String entradaAtual : entradas) {
            String[] valores = entradaAtual.split(" ");
            String a = valores[0];
            String b = valores[1];

            String valorFinal = b.replace(a, "").replaceAll("^0+", "");
            if (valorFinal.isEmpty()) {
                System.out.println("0");
            } else {
                System.out.println(valorFinal);
            }
        }
        scan.close();
    }
}