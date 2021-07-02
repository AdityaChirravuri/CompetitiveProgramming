import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
	    Scanner sc = new Scanner(System.in);
	    
	    int n = sc.nextInt();
	    int lucky = 0;
	    int temp;
	    for(int i=0; i<n; i++){
	        temp = sc.nextInt();
	        if(temp%2 == 0)lucky++;
	        else lucky--;
	    }
	    
	    if(lucky <= 0)System.out.println("NOT READY");
	    else System.out.println("READY FOR BATTLE");
	}
}
