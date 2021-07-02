import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		long []arr = new long[t];
		
		for(int  i=0; i<t; i++){
		    arr[i] = sc.nextLong();
		}
		
		Arrays.sort(arr);
		
		for(int i=0; i<t; i++)System.out.println(arr[i]);
	}
}
