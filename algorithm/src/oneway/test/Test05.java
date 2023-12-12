package oneway.test;

import java.util.Arrays;

public class Test05 {
    public static void main(String[] args) {
        int a[] = {1, 2, 3, 4, 0, 1, 2, 3};
        int b[] = histogram(a, a.length);
        System.out.println(Arrays.stream(b).sum());
        System.out.println("" + 1 + 3);
        System.out.println(1 + 3 + "");
        System.out.println(1 + " " + 3);

    }

    public static int[] histogram(int a[], int M){
        int b[] = new int[M];
        int cnt, i, j;
        for (i = 0; i < M; i++) {
            cnt = 0;
            for (j = 0; j < M; j++)
                if (a[j] == i) cnt++;
            b[i] = cnt;
        }
        return b;
    }
}
