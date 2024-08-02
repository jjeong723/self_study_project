try:
    4 / 0
except ZeroDivisionError:
    print("국가의 미래는 박동민이 책임진다.")
else:
    print("박가는 수학을 잘한다.")
finally:
    print("오늘은 박가가 쏜다.")

try:
    a = [1,2]
    print(a[3])
    4/0
except ZeroDivisionError as e:
    print(e)
except:
    print("박박박박")


class MaxlimitCalculator:
    def __init__(self) -> None:
        self.value = 0
    
    def add(self, val) -> None:
        self.value += val
        self.condition_value()
    
    def condition_value(self) -> None:
        if self.value > 100:
            self.value = 100

cal = MaxlimitCalculator()
cal.add(50)
cal.add(60)

print(cal.value)