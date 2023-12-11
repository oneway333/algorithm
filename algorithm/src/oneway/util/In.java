package oneway.util;

import java.util.Scanner;

public class In {

    public static int readInt(){
        Scanner sc = new Scanner(System.in);
        return sc.nextInt();
    }

    public static double readDouble(){
        Scanner sc = new Scanner(System.in);
        return sc.nextDouble();
    }

    public static String readString(){
        Scanner sc = new Scanner(System.in);
        return sc.nextLine();
    }

}
