public class paradeigma {
   public static void main(String[] args) {
      System.out.println("Γεια σου, κόσμε!");
       
      if (true)
          System.out.println("Εκτέλεση if: Αληθές και όχι ψευδές!");

      System.out.print("Εκτέλεση βρόγχου: ");

      for (int i = 0; i < 10; i++)
          System.out.printf("%d ", i);

      System.out.println();

      subroutine(5);
   }

   public static int subroutine(int number) {
       System.out.printf("Αυτή είναι μια υπορουτίνα με αριθμό %d.\n", number);

       return 0;
   }
}
