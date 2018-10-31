using Printf

function subroutine(number)
        @printf("Αυτή είναι μια υπορουτίνα με αριθμό %d.\n", number)
end

println("Γεια σου, κόσμε!")

if (1 == 1)
    println("Εκτέλεση if: Αληθές και όχι ψευδές!")
end

print("Εκτέλεση βρόγχου: ")

for i = 0:9
    @printf("%d ", i)
end

println("")

subroutine(5)
