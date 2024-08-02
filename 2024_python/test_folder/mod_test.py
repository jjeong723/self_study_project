class FourCal():
    def __init__(self, a, b):
        self.a = a
        self.b = b

    test = 33

    def change_test(self):
        self.test = 20
        
    def setdata(self, a, b):
        self.a = a
        self.b = b

    def add(self):
        return self.a + self.b

    def sub(self):
        return self.a - self.b
    
    def mul(self):
        return self.a * self.b
    
    def div(self):
        return self.a / self.b

    def display(self):
        print(self.a, self.b)

if __name__ == "__main__":
    print(add(1, 4))
    print(sub(4, 2))