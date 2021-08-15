import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
	    Scanner sc = new Scanner(System.in);
	    
	    int t = sc.nextInt();
	    
	    for(int j=0; j<t; j++){
	        //System.out.println("Test Case# "+j);
	        int a = sc.nextInt();
	        int b = sc.nextInt();
	        int ans = 0;
	        for(int i=1; i<=b; i++){
	            ans = Math.max(ans, a%i);
	        }
	        System.out.println(ans);
	    }
	}
}
