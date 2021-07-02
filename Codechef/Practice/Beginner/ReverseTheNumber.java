import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t>0){
		    String s = sc.next();
		    
		    StringBuilder str = new StringBuilder();
		    
		    str.append(s);
		    
		    str.reverse();
		    s = str.toString();
		    System.out.println(Integer.parseInt(s));
		    //System.out.println(str);
		    
		    t--;
		}
	}
}
