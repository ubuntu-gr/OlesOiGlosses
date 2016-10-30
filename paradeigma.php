<meta http-equiv="content-type" content="text/html; charset=UTF-8;charset=utf-8">
<?php
/* Παράδειγμα προγράμματος σε PHP
 *
 * Για εκτέλεση σε Ubuntu:
 *  - αν δεν είναι προεγκατεστημένος webserver, εγκατάσταση με
 *      sudo apt install apache2
 *
 * Για εκτέλεση του προγράμματος:
 *    Μεταφορά του αρχείου στο folder /var/www
 *    και κλήση από κάποιον browser http://localhost/paradeigma.php
 *
 * Αποτέλεσμα:
 *  Γεια σου, κόσμε!
 *  Εκτέλεση if: Αληθές και όχι ψευδές!
 *  Εκτέλεση βρόγχου: 0 1 2 3 4 5 6 7 8 9
 *  Αυτή είναι μια υπορουτίνα με αριθμό 5.
 */


function subroutine ($number)
{
   echo "Αυτή είναι μια υπορουτίνα με αριθμό $number.<br>";

}

    $i=0;

    echo "Γεια σου, κόσμε!<br>";

    if (1) {
        echo "Εκτέλεση if: Αληθές και όχι ψευδές!<br>";
	}
    echo "Εκτέλεση βρόγχου: ";
    for ($i = 0; $i < 10; $i++)
    {
        echo $i." ";
    }
    echo "<br>";

    subroutine(5);
?>
