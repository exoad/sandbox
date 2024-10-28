import java.io.*;
import java.lang.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		StringBuilder strb = new StringBuilder("");
		StringTokenizer st = null;
		try {
			int f, n = sc.nextInt();
			sc.nextLine();
			for(int i = 0; i < n; i++) {
				strb.append(sc.nextLine().toLowerCase());
			}
			
			String s = strb.toString();
			st = new StringTokenizer(s, "' ',,,;,.,:");
			f = st.countTokens();
			String a[] = new String[f];
			for(int j = 0; j < f; j++) {
				a[j] = st.nextToken();
			}
			Arrays.sort(a);
			ArrayList<String> al = new ArrayList<>();
			al.add(a[0]);
			for(int k = 0; k < f - 1; k++) {
				if(a[k].equals(a[k+1])) 
					continue;
				else
					al.add(a[k+1]);
			}
			System.out.println(al.size());
			for(int j = 0; j < al.size(); j++) {
				System.out.println(al.get(j));
			}
			
			
		} catch (Exception er) {
			return;
		}
	}
}
