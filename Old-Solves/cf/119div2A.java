import java.util.*;
 
public class Main {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int t, a, b, c, m = 0;
        try {
        t = sc.nextInt();
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        for (int i = 0; i <= 4000; i++) {
            for(int j = 0; j <= 4000; j++) {
            int d = t - (i * a + j * b);
                if (d < 0)
                    break;
                if (d % c == 0) 
                    m = Integer.max(m, i + j + d/c);
            }
        }
        System.out.println(m);
        sc.close();
        } catch (Exception e) {
            return;
        }
    }
}
