import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		for(int k=0; k<t; k++){
		    //System.out.println("Test Cases: "+k);
		    int len = sc.nextInt();
		    String str = sc.next();
		    int n, y, i;
		    n = y = i = 0;
		    for(int j=0; j<str.length(); j++){
		        if(str.charAt(j) == 'N')n++;
		        else if(str.charAt(j) == 'Y')y++;
		        else i++;
		    }
            if(n == str.length())System.out.println("NOT SURE");
		    else{
		        if(i > 0)System.out.println("INDIAN");
		        else System.out.println("NOT INDIAN");
		    }
		    
		}
	}
}
