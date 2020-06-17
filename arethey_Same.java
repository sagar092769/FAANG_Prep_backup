package DNQ;

import java.util.Scanner;

public class arethey_Same {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scn = new Scanner(System.in);
		int t = scn.nextInt();
		while (t > 0) {
			String s1 = scn.next();
			String s2 = scn.next();
			boolean is = areSame(s1, s2);
			if (is) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
			t--;
		}
	}

	private static boolean areSame(String s1, String s2) {
		// TODO Auto-generated method stub
		if (s1.equals(s2)) {
			return true;
		}
		if (s1.length() % 2 != 0) {
			return false;
		}
		String half1one = s1.substring(0, s1.length() / 2);
		String half1two = s1.substring(s1.length() / 2, s1.length());
		String half2one = s2.substring(0, s2.length() / 2);
		String half2two = s2.substring(s2.length() / 2, s2.length());
		boolean one = areSame(half1one, half2one) && areSame(half1two, half2two);
		boolean two = areSame(half1one, half2two) && areSame(half1two, half2one);
		if(one || two) {
			return true;
		}else {
			return false;
		}
	}

}
