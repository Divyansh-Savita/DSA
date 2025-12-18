def binary_search(cards,query):
    lo=0
    hi=len(cards)-1
    
    while lo<=hi:
        mid=(lo+hi)//2
        if cards[mid]==query:
            return mid
        elif cards[mid]>query:
            lo=mid+1
        elif cards[mid]<query:
            hi=mid-1
    return -1

cards=[10,9,8,7,6,4,3]
query=10
res=binary_search(cards,query)
print(res)

#edge case-->
#at position 0
#at end of list
#query not found
#list is empty
#list can be of diffferent data types
#in the mid
#values can be negative