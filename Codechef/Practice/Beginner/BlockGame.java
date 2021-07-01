import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    static boolean IsPalindrome(String str){
        int i=0;
        int j = str.length()-1;
        
        while(i<j){
            
            if(str.charAt(i) != str.charAt(j))return false;
            
            i++;
            j--;
        }
        
        return true;
    }
    
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while(t>0){
		    String s = sc.next();
		    if(IsPalindrome(s))System.out.println("wins");
		    else System.out.println("loses");
		    t--;
		}
	}
}
