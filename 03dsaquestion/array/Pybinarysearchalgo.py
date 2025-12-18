def binary_search(cards,query):
    lo,hi=0,len(cards)-1
    mid=(lo+hi)//2
    mid_num=cards[mid]
    while lo<=hi:
        if mid_num==query:
            return mid
        elif mid_num>query:
            lo==mid+1
        elif mid_num<query:
            high=mid-1
    return -1

cards=[10,9,8,7,6,4,3]
query=8
binary_search(cards,query)

#edge case-->
#at position 0
#at end of list
#query not found
#list is empty
#list can be of diffferent data types
#in the mid
#values can be negative