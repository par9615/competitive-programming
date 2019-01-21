import java.util.*;
import java.math.BigInteger;
import java.io.*; 
import java.lang.*;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while(true) {
            int n = input.nextInt();
            int d = input.nextInt();

            if(n == 0 && d == 0)
                break;

            BigInteger a = new BigInteger(n+"");
            BigInteger ans = a.pow(d);

            System.out.println(ans);
        }
    }
}