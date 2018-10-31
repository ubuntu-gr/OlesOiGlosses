#!/usr/bin/ruby

def subroutine(number)
	puts "Αυτή είναι μια υπορουτίνα με αριθμό %d." % [number]
end


puts printf "Γεια σου, κόσμε!"

if (1 == 1)
    puts "Εκτέλεση if: Αληθές και όχι ψευδές!"
end

print "Εκτέλεση βρόγχου: "

for i in 0..9 do
    print "%d " % i
end

puts

subroutine(5)

