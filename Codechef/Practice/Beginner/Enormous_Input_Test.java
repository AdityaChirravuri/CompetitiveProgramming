import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long k = sc.nextLong();
        long count = 0;
        for(int i=0; i<n; i++){
            long temp = sc.nextLong();
            
            if(temp%k == 0)count = count + 1;
        }
        
        System.out.println(count);
	}
}
