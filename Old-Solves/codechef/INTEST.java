import java.io.*;
import java.lang.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		try {
			int n = sc.nextInt();
			int j = 0, k  = sc.nextInt();
			for(int i = 0; i < n; i++) {
				int t = sc.nextInt();
				if(t % k == 0) {
					j++;
				}
			}
			System.out.println(j);
			sc.close();
		} catch (Exception er) {
			return;
		}
	}
}
