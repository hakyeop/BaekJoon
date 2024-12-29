import java.util.Scanner;
import java.util.*;

public class Main {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
    	int n = input.nextInt();
    	int k = input.nextInt();
    	int index=k;
    	Queue<Integer> queue = new LinkedList<>();
    	for(int i=1; i<=n; i++) {
    		queue.add(i);
    	}
    	System.out.print("<");
    	while(!queue.isEmpty()) {
    		for(int i=1; i<k; i++) {
    			queue.offer(queue.poll());
    		}
    		System.out.print(queue.poll());
    		if(!queue.isEmpty()) {
    			System.out.print(", ");
    		}
    	}
    	System.out.print(">");
	}
}
