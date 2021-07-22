import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		for(int i=0; i<t; i++){
		    //System.out.println("test case: "+ t);
		    double H = sc.nextDouble();
		    double Cc = sc.nextDouble();
		    double Ts = sc.nextDouble();
		    int grade;
		    boolean flag1, flag2, flag3;
		    flag1 = flag2 = flag3 = false;
		    if(H > 50)flag1 = true;
		    
		    if(Cc < 0.7)flag2 = true;
		    
		    if(Ts > 5600)flag3 = true;
		    //when all are satisfied
		    if(flag1 && flag2 && flag3)System.out.println(10);
		    // if 1 and 2 are satisfied
		    else if(flag1 && flag2)System.out.println(9);
		    // if 1 and 3 are satisfied
		    else if(flag1 && flag3)System.out.println(7);
		    //if 2 and 3 are satisfied
		    else if(flag2 && flag3)System.out.println(8);
		    // if anyone is satisfied
		    else if(flag1 || flag2 || flag3)System.out.println(6);
		    else System.out.println(5);
		}
	}
}
