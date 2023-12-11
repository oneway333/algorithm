package oneway.test;

import oneway.util.In;

public class Test07 {
    public static void main(String[] args) {
        int i;
        for (i = 0; i < 3; i++) {
            String str = In.readString();
            String strs[] = str.split(" ");
            int fir = Integer.parseInt(strs[1]);
            int sec = Integer.parseInt(strs[2]);
            System.out.printf("%s %d %d %f\n", strs[0], fir, sec, 1.0*fir / sec);
        }
    }
}
