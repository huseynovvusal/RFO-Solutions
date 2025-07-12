// https://basecamp.eolymp.com/en/problems/9001

import java.util.Scanner;

public class BigProduct {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();

        if (a > 0 && b > 0) {
            System.out.print(1);
        } else if ((a < 0 && b > 0) || a == 0 || b == 0) {
            System.out.print(0);
        } else if (a < 0 && b < 0) {
            long diff = Math.abs(b - a) + 1;
            if (diff % 2 == 1) {
                System.out.print(-1);
            } else {
                System.out.print(1);
            }
        }
    }
}
