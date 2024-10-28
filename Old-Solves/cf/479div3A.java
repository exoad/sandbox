import java.util.*;
 
public class Main {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        try {
            int n = sc.nextInt();
            int k = sc.nextInt();
            for(int i = 0; i < k; i++) {
                if(n % 10 == 0) 
                    n /= 10;
                else 
                    n -= 1;
            }
            System.out.println(n);
        sc.close();
        } catch (Exception e) {
            return;
        }
    }
}
