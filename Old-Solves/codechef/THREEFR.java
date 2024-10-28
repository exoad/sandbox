import java.io.*;
import java.lang.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		try {
			int T = sc.nextInt();
			for(int i = 0; i < T; i++) {
				int X = Math.abs(sc.nextInt());
				int Y = Math.abs(sc.nextInt());
				int Z = Math.abs(sc.nextInt());
				if(X + Y == Z || X + Z == Y || Y + Z == X) {
					System.out.println("yes");
				} else {
					System.out.println("no");
				}				


			}
			sc.close();
		} catch (Exception er) {
			return;
		}
	}
}
