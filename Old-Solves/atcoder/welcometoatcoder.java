//very bloat :p

import java.io.IOException;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		String s = sc.next();
		System.out.println((a + b + c) + " " + s);
		sc.close();
	}
}
