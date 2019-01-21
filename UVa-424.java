import java.util.Scanner;
import java.math.BigInteger;

class Main
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		String s;
		BigInteger sum = BigInteger.ZERO;

		while(in.hasNextLine())
		{
			s = in.nextLine();
			if(s.equals("0"))
				break;
			sum = sum.add(new BigInteger(s));
		}

		System.out.println(sum.toString());
	}
}