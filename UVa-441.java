import java.util.*;

public class Main {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int n, t = 0;
        int[] arr = new int[15];
        
        while((n = input.nextInt()) != 0)
        {
            if(++t != 1)
                System.out.println();
            
            for(int i = 0; i < n; i++)
                arr[i] = input.nextInt();
            
            for(int a = 0; a < n-5; a++)
                for(int b = a+1; b < n-4;b++)
                    for(int c = b+1; c < n-3;c++)
                        for(int d = c+1; d < n-2;d++)
                            for(int e = d+1; e < n-1;e++)
                                for(int f = e+1; f < n;f++)
                                    System.out.println(arr[a]+" "+arr[b]+" "+arr[c]+" "+arr[d]+" "+arr[e]+" "+arr[f]);
            
            
        }
        
    }
}
