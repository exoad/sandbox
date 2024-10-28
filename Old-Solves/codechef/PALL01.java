import java.io.*;
import java.lang.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		try {
			int p, r, t = sc.nextInt();
			for(int i = 0; i < t; i++) {
				p = 0;
				int x = sc.nextInt();
				int xx = x;
				while(x != 0) {
					r = x % 10;
					p = p * 10 + r;
					x /= 10;
				}
				if(xx == p) {
					System.out.println("wins");
				} else {
					System.out.println("loses");
				}
			}
			sc.close();
		} catch (Exception er) {
			return;
		}
	}
}
