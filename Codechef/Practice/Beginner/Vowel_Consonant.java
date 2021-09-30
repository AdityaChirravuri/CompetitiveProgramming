import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		for(int i=0; i<t; i++){
		    //System.out.println("Test Case# "+ i);
		    int []a = new int[4];
		    a[0] = sc.nextInt();
		    a[1] = sc.nextInt();
		    a[2] = sc.nextInt();
		    a[3] = sc.nextInt();
		    
		    Arrays.sort(a);
		    
		    if(a[0] == a[1] && a[2] == a[3])System.out.println("YES");
		    else System.out.println("NO");
		}
	}
}
