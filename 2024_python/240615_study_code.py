
# 1번
print((80+75+55)/3)

# 2번
if 13%2==1: print("홀수") 
else: print("짝수")

# 3번
pin = "881120-1068234"
yyyymmdd = "19" + pin[:6]
num = pin[7:]
print(yyyymmdd)
print(num)

# 4번
if int(pin[7])%2==1: print("남성")
else: print("여성")

# 5번
a = "a:b:c:d"
b = a.replace(":", "#")
print(b)

#6번
a = [1,3,5,4,2]
a.sort()
a.reverse()
print(a)

#7번
a = ['Life', 'is', 'too', 'short']
result = str()
for n in a:
    result = result + n + " "
print(result)

#8번
a = (1,2,3)
a = a + (4,)
print (a)

#9번
a = dict()
a = {('a',):3} # list는 key값으로 선언되지 않음
print(a[('a',)])

#10번
a = {'A':90, 'B':80, 'C':70}
result = a.pop('B')
print(a)
print(result)

#11번
a = [1,1,1,2,2,3,3,3,4,4,5]
aSet = set(a)
b = list(aSet)
print(b)

#12번
a = b = [1,2,3]
a[1] = 4
print(b) # b = [1,4,3]
