import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		
		int test = sc.nextInt();
		
		while(test>0){
		    String s = sc.next();
		    int first = s.charAt(0)- '0';
		    int last = s.charAt(s.length()-1)-'0';
		    System.out.println(first+last);
		    test--;
		}
	}
}
