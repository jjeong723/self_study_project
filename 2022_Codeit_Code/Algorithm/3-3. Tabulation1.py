def fib_tab(n):
    # 코드를 작성하세요.
    list_fib = []
    for num in range(n):
        num +=1
        if num==1 or num==2:
            list_fib.append(1)
            continue
        pre_num = num-3
        nex_num = num-2
        list_fib.append(list_fib[nex_num]+list_fib[pre_num])
    
    return list_fib[n-1]

# 테스트
print(fib_tab(10))
print(fib_tab(56))
print(fib_tab(132))