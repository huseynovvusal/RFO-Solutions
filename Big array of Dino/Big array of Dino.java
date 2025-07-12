// https://basecamp.eolymp.com/en/problems/9639

import java.util.*;

public class BigArrayOfDino {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        Map<Long, Long> mp = new TreeMap<>();
        
        for (int i = 0; i < n; i++) {
            long count = sc.nextLong();
            long number = sc.nextLong();
            mp.put(number, mp.getOrDefault(number, 0L) + count);
        }
        
        long m = sc.nextLong();
        long k = 0;
        
        for (Map.Entry<Long, Long> entry : mp.entrySet()) {
            k += entry.getValue();
            if (k >= m) {
                System.out.println(entry.getKey());
                return;
            }
        }
    }
}