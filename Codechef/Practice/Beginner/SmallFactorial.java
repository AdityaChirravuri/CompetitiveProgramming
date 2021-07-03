
import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		
		BigInteger []fact = new BigInteger[101];
		fact[0] = BigInteger.ONE;
		for(int i=1; i<=100; i++){
		    fact[i] = fact[i-1].multiply(BigInteger.valueOf(i));
		}
		
		int n = sc.nextInt();
		while(n>0){
		    int t = sc.nextInt();
		    System.out.println(fact[t]);
		    n--;
		}
	}
}
