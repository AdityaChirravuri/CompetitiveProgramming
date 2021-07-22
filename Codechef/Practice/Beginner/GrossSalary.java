import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t>0){
		    double val = sc.nextDouble();
		    
		    if(val < 1500){
		        val = 2*val;
		    }else {
		        val = 1.98*val;
		        val = val + 500;
		    }
		    System.out.printf("%.2f\n", val);
		    t--;
		}
	}
}
