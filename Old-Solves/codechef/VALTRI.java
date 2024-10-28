import java.io.*;
import java.lang.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		try {
			int s = sc.nextInt();
			if(s % 5 == 0 || s % 6 == 0) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
			sc.close();
		} catch (Exception er) {
			return;
		}
	}
}
