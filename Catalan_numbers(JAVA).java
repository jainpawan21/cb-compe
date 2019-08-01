import java.math.BigInteger;
import java.util.Scanner;


public class Main {

    static BigInteger binomialCoeff(BigInteger N, BigInteger K){
            BigInteger b = new BigInteger("1");
            BigInteger i = new BigInteger("0");
    //        BigInteger res = new BigInteger("1");
            BigInteger temp1= new BigInteger();
            BigInteger temp2 = new BigInteger();
            for(i;i<K;i++){
                temp = N.subtract(i);
                b = b.multiply(temp);
                temp2 = i.add(BigInteger.valueOf(1));
                b = b.divide(temp2);
            }
            return b;

    }


    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
       // playWithInt();
        int test = sc.nextInt();
        for(int i=0; i<test; i++)
        {
            BigInteger n = sc.nextBigInteger();
            BigInteger res = new BigInteger();
            res = binomialCoeff(2*n, n);
            res = res.divide(n+1);
        }
        System.out.println(fact(b));
    }
}
