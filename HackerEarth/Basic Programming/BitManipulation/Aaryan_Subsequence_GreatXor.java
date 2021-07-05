import java.util.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int []a = new int[n];
        int i =0, ans = 0;
        while(i!=n){
            a[i] = sc.nextInt();
            if(i == 0)
                ans = a[i];
            else ans = ans | a[i] ;
            i = i +1;
        }
        System.out.println(ans);
    }
}
