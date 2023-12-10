package oneway.test;

import java.util.Arrays;

public class Test01 {
    public static void main(String[] args) {
        System.out.println(true == true);
        int a = 1, b = 2, i, max, n = args.length;
        int[] arr = new int[n];
        for (i = 0; i < n; i++) arr[i] = Integer.parseInt(args[i]);
        max = arr[0];
        char c = '\111';
        System.out.println((int)c); // 强转啊，包装啊，什么的，大概是的吧
        // 大概是不能嵌套定义吧
//        void inner(int i){
//            System.out.println("fuck");
//        }
        System.out.println(Arrays.toString(args));
        // 数组最大元素
        for (i = 0; i < n; i++) max = max > arr[i] ? max : arr[i];
        System.out.println("max=" + max);

        // 平均值
        int sum = 0;
        double avg;
        for (i = 0; i < n; i++) sum += arr[i];
        avg = 1.0 * sum / n;
        System.out.println("avg=" + avg);

        System.out.format("%f\n", Double.NaN);

        System.out.printf("%d\t%d\t%d\n", isPrime(2) , isPrime(3), isPrime(4));
    }

    public static int isPrime(int n){
        int s = (int) Math.sqrt(n), i;
        for (i = 2; i <= s; i++)
            if (n % i == 0) break;
        if (i > s) return 1;
        return 0;
        // 代码帮我优化了代码了，帅气！！！
//        int s = (int)Math.sqrt((double)n);
//
//        int i;
//        for(i = 2; i <= s && n % i != 0; ++i) {
//        }
//
//        return i > s ? 1 : 0;
    }

}
