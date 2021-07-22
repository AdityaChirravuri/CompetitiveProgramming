/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t>0){
		    int n = sc.nextInt();
		    int[] arr = new int[n];
		    for(int i=0; i<n; i++)
		    arr[i] = sc.nextInt();
		    //for(int i=0; i<n; i++)System.out.printf("%d ", arr[i]);
		    //System.out.println("");
		    Arrays.sort(arr);
		    System.out.println((arr[0] + arr[1]));
		    
		    t--;
		}
	}
}
