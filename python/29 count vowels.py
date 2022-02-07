a = input('Enter a sentence: ').split()
s = 0
for i in a:
    for j in i:
        if j in 'AaEeIiOoUu': s+=1
print(s)

#output
"""
Enter a sentence: Bibi BINU
4
"""
