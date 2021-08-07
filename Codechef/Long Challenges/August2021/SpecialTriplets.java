import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static int Solve(int n){
        int count = 0;
        
        int a, b, c;
        
        for(c=1; c<=n; c++){
            for(b=c; b<=n; b+=c){
                if(b%c == 0){
                    for(a=c; a<=n; a+=b)if(a%b == c)count++;
                }
            }
        }
        
        return count;
    }
    
	public static void main (String[] args) throws java.lang.Exception{
	    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	    
	    int t = Integer.parseInt(br.readLine());
	    
	    while(t>0){
	        int n = Integer.parseInt(br.readLine());
	        
	        int ans = Solve(n);
	        System.out.println(ans);
	        t--;
	    }
		
	}
}
