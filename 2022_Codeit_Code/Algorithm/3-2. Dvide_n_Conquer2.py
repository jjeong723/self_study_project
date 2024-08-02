def merge(list1, list2):
    # 코드를 작성하세요.
    if len(list1)==1 and len(list2)==1:
        if list1[0] < list2[0]:
            return [list1[0], list2[0]]
        else:
            return [list2[0], list1[0]]
    elif len(list1)==0:
        return list2
    elif len(list2)==0:
        return list1
    
    merge_list = []
    L1 = L2 = 0
    while L1 < len(list1):
        while L2 < len(list2):
            if list1[L1] < list2[L2]:
                merge_list.append(list1[L1])
                L1 +=1
                break
            elif list1[L1] > list2[L2]:
                merge_list.append(list2[L2])
                L2 +=1
            else:
                merge_list.append(L1)
                merge_list.append(L2)
                L1 +=1
                L2 +=1
                break
        if L2 == len(list2):
            merge_list.append(list1[L1])
            L1 +=1
            
    while L2 < len(list2):
        merge_list.append(list2[L2])
        L2 +=1
    return merge_list
    
# 테스트
print(merge([1],[]))
print(merge([],[1]))
print(merge([2],[1]))
print(merge([1, 2, 3, 4],[5, 6, 7, 8]))
print(merge([5, 6, 7, 8],[1, 2, 3, 4]))
print(merge([4, 7, 8, 9],[1, 3, 6, 10]))