class Account:
    def __init__(self,number,name,type,balance=0):
        self.number=number
        self.name=name
        self.type=type
        self.balance=balance
        
    def deposit(self,rs):
        self.balance=self.balance+rs
        return self.balance
        
    def withdraw(self,rs):
        self.balance=self.balance-rs
        return self.balance

a=Account(12031208922123,'Kent Beck','Savings')
print('Ac no.',a.number,
'\nname.',a.name,
'\ntype.',a.type,
'\nbalance.',a.balance,
'\nDeposit 1000, balance:',a.deposit(1000),
'\nWithdraw 70, balance:',a.withdraw(70))
    
"""
Ac no. 12031208922123
name. Kent Beck
type. Savings
balance. 0
Deposit 1000, balance: 1000
Withdraw 70, balance: 930
"""
