import java.math.BigInteger;
import java.util.Scanner;

class Main
{
	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);
		BigInteger ans;
		int t, n, k, white, black;

		t = input.nextInt();

		while(t-- > 0)
		{
			ans = BigInteger.ONE;
			black = 0;
			n = input.nextInt();
			k = input.nextInt();

			for(int i = 0; i < k; i++)
				black+=input.nextInt();

			white = n-black+1;

			for(int i = 0; i < k; i++)
			{
				ans = ans.multiply(BigInteger.valueOf(white-i));
				ans = ans.divide(BigInteger.valueOf(i+1));
			}

			System.out.println(ans.toString());
		}
	}
}