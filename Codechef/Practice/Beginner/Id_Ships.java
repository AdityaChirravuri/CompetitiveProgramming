import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t>0){
		    String s = sc.next();
		    if(s.charAt(0) == 'B' || s.charAt(0) == 'b')System.out.println("BattleShip");
		    else if(s.charAt(0) == 'C' || s.charAt(0) == 'c')System.out.println("Cruiser");
		    else if(s.charAt(0) == 'D' || s.charAt(0) == 'd')System.out.println("Destroyer");
		    else System.out.println("Frigate");
		    
		    t--;
		}
	}
}
