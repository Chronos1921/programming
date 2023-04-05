cube=int(input("Enter a cube:"))
high=cube
low=0
epsilon=0.01
guess=(high+low)/2.0
while abs(guess**3-cube)>=epsilon:
    if guess**3 < cube:
        low=guess
    else:
        high=guess
    guess=(high+low)/2

print("The cube root of",cube," is ",guess)

