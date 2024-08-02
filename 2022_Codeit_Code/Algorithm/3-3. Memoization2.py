def max_profit_memo(price_list, count, cache):
    if count < 2:
        cache[count] = price_list[count]
        return cache[count]
    
    if count in cache:
        return cache[count]
    else:
        maxium_value = 0
        for num in range(1, count//2+1):
            maxium_value = max(maxium_value, max_profit_memo(price_list, num, cache)+max_profit_memo(price_list, count-num, cache))
        cache[count] = maxium_value
        
        if count <= len(price_list)-1:
            cache[count] = max(cache[count], price_list[count])
        
        return cache[count]
    
def max_profit(price_list, count):
    max_profit_cache = {}

    return max_profit_memo(price_list, count, max_profit_cache)


# 테스트
print(max_profit([0, 100, 400, 800, 900, 1000], 5))
print(max_profit([0, 100, 400, 800, 900, 1000], 10))
print(max_profit([0, 100, 400, 800, 900, 1000, 1400, 1600, 2100, 2200], 9))
