import java.io.*;
import java.lang.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		try {
			int a = sc.nextInt();
			int b = sc.nextInt();
			int c = a - b;
			if(c % 10 != 9) {
				System.out.print(c + 1);
			} else {
				System.out.print(c - 1);
			}

			sc.close();
		} catch (Exception er) {
			return;
		}
	}
}
