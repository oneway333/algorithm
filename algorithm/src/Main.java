public class Main {
    public static void main(String[] args) {
        System.out.println("Hello world!");
        System.out.println("fuck you");
        Main main = new Main();
        int i;
        for (i = 2; i < 5; i++)
            System.out.println(main.fun(i));
    }

    int fun(int n){
        if (n == 1) return 1;
        return n * fun(n - 1);
    }
}