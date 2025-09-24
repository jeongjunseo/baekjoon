import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class Main {
	public static void main(String[] args) {
		int N, M;
		Scanner scanner=new Scanner(System.in);
		//n,m 입력받기
		N=scanner.nextInt();
		M=scanner.nextInt();
		scanner.nextLine();
		
		String[] name1=new String[N];
		String[] name2=new String[M];
		for(int i=0;i<N;i++) {
			name1[i]=scanner.nextLine();
		}
		for(int i=0;i<M;i++) {
			name2[i]=scanner.nextLine();
		}
		Set<String> set1=new HashSet<>();
		for(String name : name1) {
			set1.add(name);
		}
		ArrayList<String> commonNames=new ArrayList<>();
		for(String name : name2) {
			if (set1.contains(name)) {
				commonNames.add(name);
			}
		}
		
		Collections.sort(commonNames);
		System.out.println(commonNames.size());

		for(String name: commonNames) {
			System.out.println(name);
		}
	}
}