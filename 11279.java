import java.util.Scanner;
import java.util.*;

public class Main {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
    	int n = input.nextInt();
    	PriorityQueue<Integer> Heap = new PriorityQueue(Collections.reverseOrder());
    	for(int i=0; i<n; i++){
        	int in=input.nextInt();
        	if(in == 0){
        		if(Heap.isEmpty()) {
        			System.out.println("0");
        		}
        		else {
        			System.out.println(Heap.poll());
        		}
        	}
        	else {
        		Heap.add(in);
        	}
    	}
	}
}
