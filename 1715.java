import java.util.Scanner;
import java.util.*;

public class Main {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
    	int n = input.nextInt();
    	int cnt=0;
    	PriorityQueue<Integer> Heap = new PriorityQueue();
    	for(int i=0; i<n; i++){
        	int in=input.nextInt();
        	Heap.add(in);
    	}
    	while(true) {
    		int a;
    		a=Heap.poll();
    		if(Heap.isEmpty()) {
    			break;
    		}
    		a+=Heap.poll();
    		cnt+=a;
    		Heap.add(a);
    	}
    	System.out.println(cnt);
	}
}
