/*
 *
 * Για εκτέλεση του προγράμματος:
 *    node paradeigma.js
 *
 * Αποτέλεσμα:
 *  Γεια σου, κόσμε!
 *  Εκτέλεση if: Αληθές και όχι ψευδές!
 *  Εκτέλεση βρόγχου: 0 1 2 3 4 5 6 7 8 9
 *  Αυτή είναι μια υπορουτίνα με αριθμό 5.
 */

function subroutine(number) {
    console.log(`Αυτή είναι μια υπορουτίνα με αριθμό ${number}.`);
}

let i = 0;

console.log("Γεια σου, κόσμε!\n");

if (1) {
    console.log("Εκτέλεση if: Αληθές και όχι ψευδές!\n");
}

process.stdout.write("Εκτέλεση βρόγχου: ");

for (i = 0; i < 10; i++) {
    process.stdout.write(i + " ");
}

console.log("\n");

subroutine(5);