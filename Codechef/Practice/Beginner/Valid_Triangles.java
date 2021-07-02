import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t>0){
		    int a = sc.nextInt();
		    int b = sc.nextInt();
		    int c = sc.nextInt();
		    if(a + b + c == 180){
		        if(a == 90 && (a == b || a == c))System.out.println("NO");
		        else if(b == 90 &&( b == c || b == a))System.out.println("NO");
		        else if(c == 90 &&(c == a|| c == b))System.out.println("NO");
		        else System.out.println("YES");
		    }else System.out.println("NO");
		    t--;
		}
	}
}
