package oneway.test;

public class Test08 {
    public static void main(String[] args) {
        System.out.println(gcd(1111111, 1234567));
    }

    private static int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
}
