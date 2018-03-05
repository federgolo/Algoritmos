import java.util.Scanner;
import java.lang.Math;

public class Main {

  public static void main(String[] args) {
    
    /*Scanner s = new Scanner(System.in);
    System.out.print("Enter number of rows/cols: ");
    int m = s.nextInt();*/
    
    double[] arr = new double[10];
    
    for (int i=50; i<550; i+=50){
      double avg = 0;
      
      for (int j=0; j<10; j++){
        
        double answer = fill(i);
        // System.out.print("n = " + i + ": ");
        // System.out.print(answer);
        
        avg += answer;
      }
      arr[(i/50)-1] = avg/10;
    }
    System.out.print("[");
    for (int k=0; k<10; k++){
      System.out.print("[" + arr[k] + "], ");
    }
    System.out.println("]");
  }
  
  
  
  public static double fill(int n){
    double TInicio, TFin, tiempo, instrucciones; 
    
    int[][] a = new int[n][n];
    int[][] b = new int[n][n];
    
    for (int i = 0; i < a.length; i++) {
      for (int j = 0; j < a[0].length; j++) {
       a[i][j] = 1;
      }
    }
   
    for (int i = 0; i < b.length; i++) {
      for (int j = 0; j < b[0].length; j++) {
        b[i][j] = 2;
      }
    }
   
    TInicio = System.currentTimeMillis(); 
    
    int[][] c = multiply(a, b);
    
    TFin = System.currentTimeMillis();
    tiempo = (TFin - TInicio)/1000;
    instrucciones = ((2*Math.pow(n, 3)) - Math.pow(n, 2));
    return  (tiempo/instrucciones);
    
  }
  

  public static int[][] multiply(int[][] a, int[][] b) {
    int rowsInA = a.length;
    int columnsInA = a[0].length; // same as rows in B
    int columnsInB = b[0].length;
    int[][] c = new int[rowsInA][columnsInB];
    for (int i = 0; i < rowsInA; i++) {
      for (int j = 0; j < columnsInB; j++) {
        for (int k = 0; k < columnsInA; k++) {
          c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
      }
    }
    return c;
  }
}
