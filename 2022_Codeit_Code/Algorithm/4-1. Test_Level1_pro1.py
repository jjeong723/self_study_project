def sublist_max(profits):
    # 코드를 작성하세요.
    size_num = len(profits)
    list_range = []
    max_num = 0
    
    for num in range(size_num):
        sum_num = 0
        for num2 in range(num, size_num):
            sum_num += profits[num2]
            if sum_num > max_num:
                max_num = sum_num
                list_range = profits[num:num2+1]
    return max_num


# 테스트
print(sublist_max([4, 3, 8, -2, -5, -3, -5, -3]))
print(sublist_max([2, 3, 1, -1, -2, 5, -1, -1]))
print(sublist_max([7, -3, 14, -8, -5, 6, 8, -5, -4, 10, -1, 8]))