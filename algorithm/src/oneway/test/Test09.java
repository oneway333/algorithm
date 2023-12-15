package oneway.test;

public class Test09 {
    public static void main(String[] args) {
    }

    public static boolean backwards(String str){
        int i = 0, j = str.length() - 1;
        while (i < j) {
            if (str.charAt(i) != str.charAt(j)) return false;
            i++;
            j--;
        }
        return true;
    }

}
