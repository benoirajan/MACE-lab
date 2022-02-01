w = input("Enter a word: ")
if len(w)>2:
    print(w[:2]+w[-2:])
elif len(w)>1:
    print(w+w)
