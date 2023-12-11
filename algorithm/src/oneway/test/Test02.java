package oneway.test;

import oneway.util.In;
import oneway.util.Out;

public class Test02 {
    public static void main(String[] args) {
//        test();
        System.out.printf("%d", Math.abs(-2147483648));
        int i = -2147483648, j = 2147483647;
        System.out.println(i);
        System.out.println(-i);
        System.out.println(i < 0);
        System.out.println(j + 1);
        System.out.println(-j);
    }

    private static void test() {
        String str;
        int i = In.readInt();
        str = In.readString();
        System.out.println(i);
        Out.println(i);
        System.out.printf("%c\n", 'a');
        System.out.println(str);

    }

    @Override
    public String toString() {
        return "fuck";
    }

}
