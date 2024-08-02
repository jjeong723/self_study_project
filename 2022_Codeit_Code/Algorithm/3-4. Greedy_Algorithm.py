def min_coin_count(value, coin_list):
    coin_list.sort(reverse=True)
    count_coin = 0
    coin_num = 0
    while coin_num < len(coin_list):
        if value < coin_list[coin_num]:
            coin_num += 1
        else:
            value -= coin_list[coin_num]
            count_coin += 1

    return count_coin

# 테스트
default_coin_list = [100, 500, 10, 50]
print(min_coin_count(1440, default_coin_list))
print(min_coin_count(1700, default_coin_list))
print(min_coin_count(23520, default_coin_list))
print(min_coin_count(32590, default_coin_list))