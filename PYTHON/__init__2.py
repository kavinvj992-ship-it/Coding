class person:
    def __init__(self,name,age):
        self.name=name
        self.age=age
def myfunc(self):
    print("Hello my name is"+self.name)
    print("My age is"+self.age)
p1=person("Sathya",36)
p1.myfunc()
    print()