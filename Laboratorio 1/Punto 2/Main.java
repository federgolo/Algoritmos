import java.util.Scanner;
import java.math.BigInteger;

public class Main {

    public static void main(String[] args) {
      
      System.out.print("Enter the term you wish to know: ");
      Scanner sc = new Scanner(System.in);
      
      int n = sc.nextInt();
      Integer fibo = new Integer(fib(n));
        
    // signed byte, values from –128 to 127
    // overflows at fib(12)
    if (n<12){
      byte b = fibo.byteValue();
      System.out.println("byte:  "+b);
    }
    else{
      System.out.printf("%-37s" , "signed byte overflows at the: ");
      System.out.print("12th term.\n");
    }
    
    // signed short , values from –32,768 to 32,767
    // overflows at fib(24)
    if (n<24){
      short s = fibo.shortValue();
      System.out.println("short: "+s);
    }
    else{
      System.out.printf("%-37s" , "signed short overflows at the: ");
      System.out.print("24th term.\n");
    }
    
    // signed int, values from –2,147,483,648 to 2,147,483,647 
    // overflows at fib(47)
    if (n<47){
      int i = fibo.intValue();
      System.out.println("int:   "+i);
    }
    else{
      System.out.printf("%-37s" , "signed int overflows at the: ");
      System.out.print("47th term.\n");
    }
  
    // signed long, values from 
    // –9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    // overflows at fib(93
    if (n<93){
      long l = lfib(n);
      System.out.println("long:  "+l);
    }
    else{
      System.out.printf("%-37s" , "signed long overflows at the: ");
      System.out.print("93th term.\n");
    }
    
    // BigInteger has no theoretical limit, it won't overflow.
    BigInteger bint = (getFibonnaci(n));
    System.out.print("bint:  "+bint);
  
  }
    
  static int fib(int n) {
    int x = 0, y = 1, z = 1;
    for (int i = 0; i < n; i++) {
      x = y;
      y = z;
      z = x + y;
    }
    return x;
  }

  static long lfib(int n) {
    long x = 0, y = 1, z = 1;
    for (int i = 0; i < n; i++) {
      x = y;
      y = z;
      z = x + y;
    }
    return x;
  }
  
   public static BigInteger getFibonnaci(int n) {

      BigInteger a = BigInteger.ZERO, b = BigInteger.ONE, c = BigInteger.ONE;
      int count = 0;
 
      while (count < n) {
         a = b;
         b = c;
         c = b.add(a);
         count++;
      }
      return a;
   }

  
}