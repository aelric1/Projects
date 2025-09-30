import random, string
t=int(input("enter the generation times : "))
s=int(input("enter the passwords chars : "))
chars=''.join(string.digits +string.ascii_letters+ "!@#$%")
for i in range(t):
    print(''.join(random.choices(chars,k=s)))
