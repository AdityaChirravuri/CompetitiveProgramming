import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static int GCD(int a, int b)
    {
        if(a == 0)return b;
        
        return GCD(b%a, a);
    }
    
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t>0){
		    //System.out.println("Test Cases: "+t);
		    int n;
		    n = sc.nextInt();
		    int[] arr = new int [n];
		    for(int i=0; i<n; i++){
		        arr[i] = sc.nextInt();
		    }
		    
		    int gcd = GCD(arr[0], arr[1]);
		    for(int i=1; i<n; i++){
		        gcd = GCD(gcd, arr[i]);
		    }
		    for(int i=0; i<n; i++)arr[i] = arr[i]/gcd;
		    for(int i=0; i<n; i++)System.out.print(arr[i] + " ");
		    System.out.println("");
		    t--;
		}
		
	}
}
