def fib_optimized(n):
    # 코드를 작성하세요. 
    pre_value = 1
    cur_value = 1
    
    if n==1 or n==2:
        return 1
    else:
        for num in range(n-2):
            cur_value = cur_value + pre_value
            pre_value = cur_value - pre_value
        return cur_value

# 테스트
print(fib_optimized(16))
print(fib_optimized(53))
print(fib_optimized(213))
