package oneway.test;

/**
 *
 * 斐波那契数列如果递归不用优化，也就是把算了的结果保存下来，那基本是不可能算出来的
 * 所以还是a[i] = a[i - 1] + a[i - 2]好使
 *
 */

public class Test06 {

    static double counted[] = new double[100];

    public static void main(String[] args) {
        int i;
        for (i = 0; i < 100; i++) counted[i] = -1;
        counted[0] = 0;
        counted[1] = 1;
        for (i = 0; i < 100; i++){ // 不用优化几乎计算不出来，优化了之后几乎就是一瞬间的事情，long仍然越界了
            counted[i] = fun(i);
            System.out.println(i + ": " + counted[i]);
        }

    }

    private static double fun(int i) {
        if (i == 0) return 0;
        if (i == 1) return 1;
        if (counted[i] != -1) return counted[i];
        return fun(i - 1) + fun(i - 2);
    }
}
