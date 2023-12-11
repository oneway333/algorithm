package oneway.test;

public class Test04 {
    public static void main(String[] args) {
        System.out.println('b' + 'c'); // 表达式的返回值是int
        System.out.println((char)('a' + 4));
        System.out.println('a' + 4); // 因为int更大，所以强转成了int
        bool();
    }

    static void bool(){
        boolean b[][] = new boolean[4][4];
        int i, j;
        for (i = 0; i < 4; i++)
            for (j = 0; j < 4; j++){
                double t = Math.random();
                if (t < 0.5) b[i][j] = true;
                else b[i][j] = false;
            }

        for (i = 0; i < 4; i++){
            for (j = 0; j < 4; j++)
                System.out.print("i:" + i + " j:" + j  + " " + (b[i][j] ? '*' : ' ') + " ");
            System.out.println();
        }
    }
}
