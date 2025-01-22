def swap(a,b):
    tmp = a
    a = b
    b = tmp
    return a,b

a = int(input("Enter a: "))
b = int(input("Enter b: "))
swap(a,b)
print(a,b)
print("from vishnu branch")