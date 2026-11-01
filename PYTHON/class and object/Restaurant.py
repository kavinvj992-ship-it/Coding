class restaurant():
    def __init__(self,name,type):
        self.restaurant_name=name
        self.cuisine_type=type
    def describe_restaurant(self):
        print(f"our restaurant name is {self.restaurant_name}")
        print(f"our restaurant have {self.cuisine_type} type of cuisines")
    def open_restaurant(self):
        print(f"Now our restaurant is open")
hotel=restaurant("KA restaurant","premmieum ")
print(f"Restaurant name is {hotel.restaurant_name}")
print(f"Restaurant cuisine type is {hotel.cuisine_type}")
hotel.describe_restaurant()
hotel.open_restaurant()
hotel1=restaurant("DEKU Restaurant","Advance")
hotel1.describe_restaurant()
hotel2=restaurant("Goku Restaurant","100% pure cotton")
hotel3=restaurant("Takemichi Hanagaki Restaurant","cotton")
hotel3.describe_restaurant()