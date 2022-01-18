class Book:
    def __init__(self,title,auther):
        self.title=title
        self.auther=auther
        
    

b=Book('Planning extreme programming','Kent Beck')
setattr(Book,'publisher',"Addison-Wesley")
if hasattr(b,'publisher'):
    print(b.title,'by',b.auther,'published by',b.publisher)
"""
Planning extreme programming by Kent Beck published by Addison-Wesley
"""
