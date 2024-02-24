package oneway.test;

public class Test10 {
    public static void main(String[] args) {
        char a[] = "string".toCharArray();
        char b[] = a;
        System.out.printf("%c\n", a[0]);
        System.out.printf("%c\n", b[0]);

        a[0] = 'b';
        System.out.printf("%c\n", a[0]);
        System.out.printf("%c\n", b[0]);

    }
}
