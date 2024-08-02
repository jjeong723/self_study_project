a = 'Life is too short, you need python'

if 'wife' in a: print('wife')
elif 'python' in a and 'you' not in a: print('python')
elif 'shirt' not in a: print('shirt')
elif 'need' in a: print('need')
else: print('none')


result = 0
i=1
while i <= 1000:
    if i%3 == 0:
        result +=i
    i +=1
print(result)


i=0
while True:
    i +=1
    if i>5: break
    
    print("*"*i)
    
    
    
for i in range(1, 101):
    print(i)    



A= [70, 60, 55, 75, 95,90,80,80, 85, 100]
total = 0
for score in A:
    total += score
average = total/len(A)
print (average)


numbers = [1,2,3,4,5]
result = [n*2 for n in numbers if n%2==1]

#for n in numbers:
#   if n%2 == 1:
#      result.append(n*2)

print(result)
#[2, 6, 10]


        
def is_odd(number):
    if number%2==0: return True
    else: return False
    
    
def avg_number(*args):
    result = 0
    for i in args:
        result +=i
    return result/len(args)

print(avg_number(1,2))
print(avg_number(1,2,3,4,5))



input1 = input("첫번째 숫자를 입력하세요")
input2 = input("두번째 숫자를 입력하세요")

total = int(input1)+int(input2)
print("두수의 합은 %d 입니다." % total)





f1 = open('C:/Users/NHN/Documents/text.txt', 'w')
f1.write("Life is too short\n")
f1.close()

f2 = open('C:/Users/NHN/Documents/text.txt', 'r')
print(f2.read())
f2.close()


user_input = input("저장할 내용을 입력하세요")
f = open('C:/Users/NHN/Documents/text.txt', 'a')
f.write(user_input)
f.write("\n")
f.close()


f = open('C:/Users/NHN/Documents/text.txt', 'r')
body = f.read()
f.close()

body = body.replace("java", "python")

f = open('C:/Users/NHN/Documents/text.txt', 'w')
f.write(body)
f.close()
