import java.util.*;

class Codechef{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        
        long test = sc.nextLong();
        
        while(test>0){
            long a = sc.nextLong();
            long b = sc.nextLong();
            System.out.println(a%b);
            test--;
        }
    }
}
