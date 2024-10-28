import java.io.*;
import java.lang.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		try {
			int n = sc.nextInt();
			if(n >= 1 && n <= 50) {
				System.out.print("100");
			} else if(n >= 51 && n <= 100){
				System.out.print("50");
			} else {
				System.out.print("0");
			}
			sc.close();
		} catch (Exception er) {
			return;
		}
	}
}
