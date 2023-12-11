package oneway.test;

public class Test03 {
    public static void main(String[] args) {
        int arr[] = new int[args.length], i, j;
        for (i = 0; i < arr.length; i++)
            arr[i] = Integer.parseInt(args[i]);
        for (i = 0; i < arr.length; i++) {  // 简单的东西复杂化，嘿嘿
            for (j = i + 1; j < arr.length; j++)
                if (arr[i] != arr[j]) break;
            if (j < arr.length) break;
        }
        if (i >= arr.length) System.out.println("equal");
        else System.out.println("not equal");
    }
}
