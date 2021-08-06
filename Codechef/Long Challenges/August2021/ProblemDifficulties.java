import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int t = Integer.parseInt(br.readLine());
		
		while(t>0){
		    
		    String st[] = br.readLine().split(" ");
		    SortedSet<String>ts = new TreeSet<String>();
		    HashMap<String, Integer>freq = new HashMap<String, Integer>();
		    for(int i=0; i<st.length; i++){
		        ts.add(st[i]);
		        if(freq.containsKey(st[i]))freq.put(st[i], freq.get(st[i]) + 1);
		        else freq.put(st[i], 1);
		    }
		    
		    if(ts.size() == 4)System.out.println(2);
		    else if (ts.size() == 3)System.out.println(2);
		    else if(ts.size() == 2){
		        Arrays.sort(st);
		        if(freq.get(st[0]) == 2)System.out.println(2);
		        else System.out.println(1);
		    }else System.out.println(0);
		    
		    t--;
		}
	}
}
