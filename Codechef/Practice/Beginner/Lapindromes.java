import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    static void Print(Map<Character, Integer>a, Map<Character, Integer>b){
        System.out.println("For First Half");
        for(Map.Entry<Character, Integer>e : a.entrySet()){
            System.out.println(e.getKey() + " " + e.getValue());
        }
        
        System.out.println("For second Half:");
        for(Map.Entry<Character, Integer>e : b.entrySet()){
            System.out.println(e.getKey() + " " + e.getValue());
        }
    }
    
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc= new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t>0){
		    String s = sc.next();
		    int l = s.length();
		    int mid =l/2;
		    String s1 = s.substring(0, mid);
		    String s2;
		    if(l%2 == 0)s2 = s.substring(mid, l);
		    else s2 = s.substring(mid+1, l);
		    
		    char[] a = s1.toCharArray();
		    char[] b = s2.toCharArray();
		    Arrays.sort(a);
		    Arrays.sort(b);
		    
		    if(Arrays.equals(a, b))System.out.println("YES");
		    else System.out.println("NO");
		    
		    t--;
		}
	}
}
