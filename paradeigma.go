package main

/*
 *
 * Για εκτέλεση του προγράμματος:
 *    go run paradeigma.go
 *
 * Αποτέλεσμα:
 *  Γεια σου, κόσμε!
 *  Εκτέλεση if: Αληθές και όχι ψευδές!
 *  Εκτέλεση βρόγχου: 0 1 2 3 4 5 6 7 8 9
 *  Αυτή είναι μια υπορουτίνα με αριθμό 5.
 */
import "fmt"

func subroutine(number int) {
	fmt.Printf("Αυτή είναι μια υπορουτίνα με αριθμό %d.\n", number)
}

func main() {
	fmt.Println("Γεια σου, κόσμε!\n")

	if true {
		fmt.Println("Εκτέλεση if: Αληθές και όχι ψευδές!\n")
	}

	fmt.Print("Εκτέλεση βρόγχου: ")

	for i := 0; i < 10; i++ {
		fmt.Printf("%d ", i)
	}

	fmt.Println("\n")

	subroutine(5)
}
