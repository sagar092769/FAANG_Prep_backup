package faangarraysamdString;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class attend_all_meeting {
	public static class Pair {
		int st;
		int et;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scn = new Scanner(System.in);
		int n = scn.nextInt();
		ArrayList<Pair> intervals = new ArrayList<Pair>();
		for (int i = 0; i < n; i++) {
			Pair np = new Pair();
			np.st = scn.nextInt();
			np.et = scn.nextInt();
			intervals.add(np);
		}
		Collections.sort(intervals, new Comparator<Pair>() {

			@Override
			public int compare(Pair o1, Pair o2) {
				// TODO Auto-generated method stub
				return o1.st - o2.st;
			}
		});
		for (int i = 1; i < intervals.size(); i++) {
			Pair gp = intervals.get(i);
			Pair prev = intervals.get(i - 1);
			if (gp.st < prev.et) {
				System.out.println("false");
				return;
			}
		}
		System.out.println("true");
	}

}
