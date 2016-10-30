 /* Για εκτέλεση του προγράμματος:
 *   Ανεβάζουμε τον κώδικα με το Arduino IDE
 *   και περνουμε το αποτέλεσμα στο Serial monitor
 *
 * Αποτέλεσμα:
 *  Γεια σου, κόσμε!
 *  Εκτέλεση if: Αληθές και όχι ψευδές!
 *  Εκτέλεση βρόγχου: 0 1 2 3 4 5 6 7 8 9
 *  Αυτή είναι μια υπορουτίνα με αριθμό 5.
 */

void setup() {
  Serial.begin(9600);
}

void loop() {
  int i;
  Serial.println("Hello World!");
  
  if (1) {
  Serial.println("If: True and not False!");
  }
  
  Serial.println("Loop : ");
    for (i = 0; i < 10; i++)
    {
        Serial.print(i);
    }
    Serial.println("");

subroutine (5);

  
while (1){}
}

int subroutine(int number)
{
   Serial.print("This is a subrotine with number ");
   Serial.print(number);
   Serial.println(".");

   return 0;
}
