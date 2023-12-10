package oneway.test;


import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * binary search 重新复习了下java的一些写法
 *
 */

public class Test00 {
    public static void main(String[] args) {
        int i, key;
        int[] arr = new int[args.length];
        for (i = 0; i < args.length; i++) arr[i] = Integer.parseInt(args[i]);
        System.out.println(Arrays.toString(arr));
        Scanner scanner = new Scanner(System.in);
        key = scanner.nextInt();
        System.out.println("result " + binarySearch(key, arr));

    }

    public static int binarySearch(int key, int[] arr) {
        int left = 0, right = arr.length - 1, mid;
        while (left <= right) {
            mid = (left + right) / 2;
            if (key < arr[mid]) right = mid - 1;
            else if (key > arr[mid]) left = mid + 1;
            else return mid;
        }
        return -1;
    }

    public static void test() {
        int[] arr = new int[10];
        int i;
        for (i = 0; i < 10; i++) arr[i] = i + 1;
        System.out.println(Arrays.toString(arr));
    }


}
