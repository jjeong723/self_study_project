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

print(body)

body = body.replace("java", "python")

print(body)

f = open('C:/Users/NHN/Documents/text.txt', 'w')
f.write(body)
f.close()
