def trapping_rain(buildings):
    # 코드를 작성하세요
    H = buildings[0]
    b_num = 0
    rain_trap = 0
    for num in range(1,len(buildings)):
        if buildings[num] >= H:
            sum_rain = 0
            for aa in range(b_num+1, num):
                sum_rain += buildings[aa]
            rain_trap += H*(num-b_num-1) - sum_rain
            H = buildings[num]
            b_num = num
    return rain_trap

# 테스트
print(trapping_rain([3, 0, 0, 2, 0, 4]))
print(trapping_rain([0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1])+1)