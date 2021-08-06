import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
	    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	    
	    int t = Integer.parseInt(br.readLine());
	    
	    while(t>0){
	        String st[] = br.readLine().split(" ");
	        int g1 = Integer.parseInt(st[0]);
	        int s1 = Integer.parseInt(st[1]);
	        int b1 = Integer.parseInt(st[2]);
	        int g2 = Integer.parseInt(st[3]);
	        int s2 = Integer.parseInt(st[4]);
	        int b2 = Integer.parseInt(st[5]);
	        
	        
	        int total1 = g1 + s1 + b1;
	        int total2 = g2 + s2 + b2;
	        
	        if(total1 > total2)System.out.println(1);
	        else if(total2>total1)System.out.println(2);
	        else {
	            if(g1 > g2)System.out.println(1);
	            else if(g2>g1)System.out.println(2);
	            else {
	                if(s1 > s2)System.out.println(1);
	                else if(s2 > s1)System.out.println(2);
	                else {
	                    if(b1 > b2)System.out.println(1);
	                    else System.out.println(2);
	                }
	            }
	        }
	        t--;
	    }
		
	}
}
