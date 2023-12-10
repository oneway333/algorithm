public class Main {
    public static void main(String[] args) {
        System.out.println("Hello world!");
        System.out.println("fuck you");
        Main main = new Main();
        int i;
        for (i = 2; i < 5; i++){
            System.out.println("fun: " + fun(i));
            System.out.println("fun2: " + main.fun2(i));
        }
    }

    static int fun(int n){
        if (n == 1) return 1;
        return n * fun(n - 1);
    }

    int fun2(int n){
        if (n == 1) return 1;
        return n * fun2(n - 1);
    }

}