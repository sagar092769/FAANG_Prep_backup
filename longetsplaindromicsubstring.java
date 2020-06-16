package faangarraysamdString;

import java.util.Scanner;

public class longetsplaindromicsubstring {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scn = new Scanner(System.in);
		int t = scn.nextInt();
		while (t > 0) {
			String s = scn.next();
			String a="";
			int ans = Integer.MIN_VALUE;
			for (int i = 0; i < s.length(); i++) {
				for (int j = i + 1; j <= s.length(); j++) {
					if (isPalin(s.substring(i, j))) {
						if (s.substring(i, j).length() > ans) {
							a = s.substring(i, j);
							ans = s.substring(i, j).length();
						}
					}
				}
			}
			System.out.println(a);
			t--;
		}
	}

	private static boolean isPalin(String s) {
		// TODO Auto-generated method stub
		int i = 0;
		int j = s.length() - 1;
		while (i < j) {
			if (s.charAt(i) != s.charAt(j)) {
				return false;
			}
			i++;
			j--;
		}
		return true;
	}

}
