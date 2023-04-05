num=int(input("Enter a number of which you want the cube root of:"))
guess=0
while guess in range(num+1):
    if guess**3==num:    
        break
    else:
        if num<0 :
            print("The number is not a perfect cube root")
    print("The cube root of ",num,"is ",guess)
