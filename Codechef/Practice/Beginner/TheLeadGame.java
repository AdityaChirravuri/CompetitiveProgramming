import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
	    Scanner sc = new Scanner(System.in);
	    
	    int t = sc.nextInt();
	    int Lead = -1;
	    int lead_player = 1;
	    int sum_1, sum_2;
	    sum_1 = sum_2 = 0;
	    while(t>0){
	        int a = sc.nextInt();
	        sum_1 += a;
	        int b = sc.nextInt();
	        sum_2 += b;
	        int dif = 0;
	        if(sum_1 > sum_2){
	            dif = sum_1-sum_2;
	            if(Lead < dif){
	                Lead = dif;
	                lead_player = 1;
	            }
	        }else{
	            dif = sum_2- sum_1;
	            if(Lead < dif){
	                Lead = dif;
	                lead_player = 2;
	            }
	        }
	        t--;
	    }
	    
	    System.out.println(lead_player + " " + Lead); 
	    
	}
}
