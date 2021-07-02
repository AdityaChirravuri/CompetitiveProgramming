import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
	    Scanner scan = new Scanner(System.in);
	    
	    long test = scan.nextLong();
	    
	    while(test>0){
	        String s = scan.next();
	        long sum =0;
	        //System.out.println(s);
	        for(int i=0; i<s.length(); i++){
	            sum += s.charAt(i)-'0';
	        }
	        System.out.println(sum);
	        test--;
	    }
	    
	}
