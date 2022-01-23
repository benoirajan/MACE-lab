try:
    n,n1 = input("Enter 2 numbers: ").split()
    print(int(n)/int(n1))
except ZeroDivisionError as e:
    print("Error: ",e)
else :
    print("operation successful")
finally:
    print("Finished")
    


"""
=================================================================================
Zero division error
=================================================================================
output:
=======
Enter 2 numbers: 3 0
Error:  division by zero
Finished
"""
