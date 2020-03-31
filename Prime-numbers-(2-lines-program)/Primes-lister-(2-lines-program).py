# Here list comprehension is used
# all() is used to make sure that the list
# goes through all the values of x and y

n = input()
print([x for x in range(2, int(n))
     if all(x % y != 0 for y in range(2, int(x**0.5)+1))])

# These lines make sure the program doesn't close
# before you even see the output!
print("\n\n\n\n\nA program by Karthikeshwar\n\n")
input("Press enter to exit")
