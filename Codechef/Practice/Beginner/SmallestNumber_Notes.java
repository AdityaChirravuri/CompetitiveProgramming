import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
		int arr[] = {100, 50, 10, 5, 2, 1};
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t>0){
		    int money = sc.nextInt();
		    int i=0;
		    int sum = 0;
		    while(money>0){
		        int rem = money%arr[i];
		        sum = sum + (money/arr[i]);
		        money = rem;
		        if(rem<arr[i])i++;
		    }
		    System.out.println(sum);
		    t--;
		}
	}
}
