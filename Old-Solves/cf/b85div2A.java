import java.util.*;
import java.io.*;
import java.lang.*;

public class Main {
  public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);
    try {
      String str1 = sc.nextLine().toLowerCase();
      String str2 = sc.nextLine().toLowerCase();
      if(str1.compareTo(str2) < 0) 
        System.out.println("-1");
      else if(str1.compareTo(str2) > 0)
        System.out.println("1");
      else 
        System.out.println("0");
      sc.close();
    } catch (Exception e) {
      return;
    }
  }
}
