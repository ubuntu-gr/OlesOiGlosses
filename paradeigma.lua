--[[
 *
 * Για εκτέλεση του προγράμματος:
 *    lua paradeigma.lua
 *
 * Αποτέλεσμα:
 *  Γεια σου, κόσμε!
 *  Εκτέλεση if: Αληθές και όχι ψευδές!
 *  Εκτέλεση βρόγχου: 0 1 2 3 4 5 6 7 8 9
 *  Αυτή είναι μια υπορουτίνα με αριθμό 5.
--]]

function subroutine(number)
  print(string.format("Αυτή είναι μια υπορουτίνα με αριθμό %d.", number))

end 

print("Γεια σου, κόσμε!")

  if 1 then
    print("Εκτέλεση if: Αληθές και όχι ψευδές!")
  end

  print("Εκτέλεση βρόγχου: ")

  for i = 0, 9 do
    io.write(i .. " ")
  end

  print()

subroutine(5)