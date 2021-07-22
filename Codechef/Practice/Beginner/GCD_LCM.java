import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

class Codechef
{
    /*
    static int GCD(int a, int b)
    {
        if( b == 0)return a;
        
        return GCD(b, a%b);
    }*/
    
	public static void main (String[] args) throws java.lang.Exception{
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t>0){
            /*int a = sc.nextInt();
            int b = sc.nextInt();
            
            int gcd = GCD(a, b);
            int lcm = a*b/gcd;
            System.out.println(gcd + " " + lcm);*/
            String a = sc.next();
            String b = sc.next();
            BigInteger num1 = new BigInteger(a);
            BigInteger num2 = new BigInteger(b);
            System.out.println(num1.gcd(num2)+ " " +num1.multiply(num2).divide(num1.gcd(num2)));
            t--;
        }
		   
	}
}
