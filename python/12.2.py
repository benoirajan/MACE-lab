try:
    n = int(input("Enter a number: "))
    if not (n<120 and n>90):
        raise ValueError('Abnormal conditioin !')
except ValueError as e:
    print("Error: ",e)
else :
    print("operation successful")
finally:
    print("Finished")
    


"""
=================================================================================
Raise a value error if the reading is not within 90-120
=================================================================================
output:
=======
Enter a number: 100
operation successful
Finished
"""
