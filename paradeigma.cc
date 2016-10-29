/* Παράδειγμα προγράμματος σε C++
 *
 * Για μεταγλώττιση σε Ubuntu:
 *  - ο μεταγλωττιστής είναι προεγκατεστημένος
 *  - αν δεν είναι προεγκατεστημένος, εγκατάσταση με
 *      sudo apt install build-essential
 *  - εντολή μεταγλώττισης:
 *      gcc paradeigma.cc -o paradeigma_cc
 *
 * Για εκτέλεση του προγράμματος:
 *    ./paradeigma_cc
 *
 * Αποτέλεσμα:
 *  Γεια σου, κόσμε!
 *  Εκτέλεση if: Αληθές και όχι ψευδές!
 *  Εκτέλεση βρόγχου: 0 1 2 3 4 5 6 7 8 9
 *  Αυτή είναι μια υπορουτίνα με αριθμό 5.
 */

#include <iostream>

using namespace std;

int subroutine(int number)
{
   cout << "Αυτή είναι μια υπορουτίνα με αριθμό " << number << "." << endl;

   return 0;
}

int main() {
    cout << "Γεια σου, κόσμε!" << endl;

    if (true == true)
        cout << "Εκτέλεση if: Αληθές και όχι ψευδές!" << endl;

    cout << "Εκτέλεση βρόγχου: ";
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    subroutine(5);

    return 0;
}
