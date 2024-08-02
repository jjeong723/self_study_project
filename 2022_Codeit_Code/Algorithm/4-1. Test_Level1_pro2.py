def power(x, y):
    # 코드를 작성하세요.
    if y == 1:
        return x
    elif y%2 == 0:
        return power(x*x, y/2)
    else:
        return x*power(x*x, (y-1)/2)


# 테스트
print(power(3, 5))
print(power(5, 6))
print(power(7, 9))