import java.io.*;
import java.util.*;
import java.lang.*;

public class Main {
	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		try {
			String temp = "", str = sc.next().toLowerCase();
			for(char x : str.toCharArray()) {
				if(x == 'a' || x == 'y' || x == 'e' || x == 'i' || x == 'o' || x == 'u') 
					continue;
				else 
					temp += String.format(".%c", x);
			}
			System.out.println(temp);
			sc.close();
		} catch (Exception er) {
			return;
		}
	}
}
		
