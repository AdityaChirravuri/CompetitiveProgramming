import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		for(int i=0; i<t; i++){
		    //System.out.println("Test Cases# "+i);
		    int n = sc.nextInt();
		    if(n%5 == 0  && n%2 == 0)System.out.println(0);
		    else if (n%5 == 0)System.out.println(1);
		    else System.out.println(-1);
		}
	}
}
