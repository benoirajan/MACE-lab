for i in range(1,21):
    if not(i%3):
        print("Fizz",end='')
    if not(i%5):
        print("Buzz",end='')
    if i%3 and i%5:
        print(i,end='')
    print()

#output
"""
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17
Fizz
19
Buzz
"""
