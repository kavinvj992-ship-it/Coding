class user():
    def __init__(self,first_name,last_name):
        self.first_name=first_name
        self.last_name=last_name
    def describe_user(self):
        print(f"First name:{self.first_name}")
        print(f"Last name:{self.last_name}")
    def greet_user(self):
        print(f"Hello {self.first_name}")
u1=user("Kavin","Raj")
u1.describe_user()
u1.greet_user()
u2=user("Kali","Raj")
u2.describe_user()
u2.greet_user()
u3=user("Muthu","Raj")
u3.describe_user()
u3.greet_user()