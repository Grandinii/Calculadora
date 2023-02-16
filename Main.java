/******************************************************************************

Gui. Grandini - 16/02/2023

*******************************************************************************/
public class Main
{
    public static void main(String[] args){
        int a = 10, b = 0;
        System.out.println("soma = "+soma(a,b));
        System.out.println("subtracao = "+subtracao(a,b));
        System.out.println("divisao = "+divisao(a,b));
        System.out.println("produto = "+produto(a,b));
    }
    public static int soma(int a, int b){
        return a+b;
    }
    public static int subtracao(int a, int b){
        return a-b;
    }
    public static int divisao(int a, int b){
        if (b==0) return 0;
        return a/b;
    }
    public static int produto(int a, int b){
        return a*b;
    }
}