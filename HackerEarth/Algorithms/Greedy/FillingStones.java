import java.io.*;
import java.util.*;
 
class TestClass {
    public static void main(String args[] ) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int n = Integer.parseInt(br.readLine());
 
        if(n == 1)System.out.println("2\n");
        else if(n == 2)System.out.println("1\n");
        else System.out.println("0\n");
    }
}
