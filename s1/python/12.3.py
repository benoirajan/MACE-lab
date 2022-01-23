class LoginEx (Exception):pass
while(1):
    try:
        u = input("Username: ")
        p = input("Password: ")
        if not (u=="admin" and p=='das*@$'):
            raise LoginEx('Invalid user credentials!')
    except LoginEx as e:
        print("Error: ",e)
    else :
        print("Login succesful")
        break

    


"""
=================================================================================
User defined exception to validate user login credentials
=================================================================================
output:
=======
Username: admin
Password: af33lf
Error:  Invalid user credentials!
Username: admin
Password: das*@$
Login succesful
"""
