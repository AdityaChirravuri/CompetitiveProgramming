import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    static boolean IsPrime(int n){
        if(n<2)return false;
        
        for(int i=2; i*i<=n; i++){
            if(n%i == 0)return false;
        }
        return true;
    }
    
	public static void main (String[] args) throws java.lang.Exception{
	    Scanner sc = new Scanner(System.in);
	    
	    int t= sc.nextInt();
	    while(t>0){
	        int n = sc.nextInt();
	        if(IsPrime(n))System.out.println("yes");
	        else System.out.println("no");
	        t--;
	    }
	}
}
