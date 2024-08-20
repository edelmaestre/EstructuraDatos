package estructura;

import java.util.Scanner;

public class Binario {

    public static void main(String[] args) {
        int[] binario = new int[20];
        int resultado, i, base;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Número: ");
        resultado = scanner.nextInt();
        System.out.print("Base: ");
        base = scanner.nextInt();
        i = 0;
        while (resultado >= base) {
            binario[i] = resultado % base;
            resultado = resultado / base;
            i++;
        }
        binario[i] = resultado;
        for (int j = i; j >= 0; j--) {
            if (binario[j] > 9) {
                System.out.print(equivalente(binario[j]) + " ");
            } else {
                System.out.print(binario[j] + " ");
            }
        }
        System.out.println();
    }

    private static char equivalente(int numero) {
        switch (numero) {
            case 10:
                return 'A';
            case 11:
                return 'B';
            case 12:
                return 'C';
            case 13:
                return 'D';
            case 14:
                return 'E';
            case 15:
                return 'F';
        }
        return '0';
    }

}
