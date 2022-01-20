class Publisher:
    def __init__(self,name):
        self.name=name
        
class Book(Publisher):
    def __init__(self,name, title, auth):
        Publisher.__init__(self,name)
        self.title=title
        self.auth=auth
        
    def disp(self):
        return self.name,self.title,self.auth
    
class Python(Book):
    def __init__(self,name, title, auth,price,page):
        Book.__init__(self,name,title,auth)
        self.price=price
        self.page=page
        
    def disp(self):
        return super().disp(),self.price,self.page
        
p=Python('Wesly books',"simple python",'John',599,400)
print(p.disp())

'''
(('Wesly books', 'simple python', 'John'), 599, 400)
'''
