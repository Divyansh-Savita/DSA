def test_location(cards,query,mid):
    if cards[mid]==query:
        if mid-1 >=0 and cards[mid-1]==query:
            return 'left'
        else:
            return 'found'
    elif cards[mid]<query:
        return 'left'
    else:
        return 'right'

#if there is not duplicacy
# def locate_card(cards,query):
#     lo=0
#     hi=len(cards)-1
    
#     while lo<=hi:
#         mid=(lo+hi)//2
#         if cards[mid]==query:
#             return mid
#         elif cards[mid]>query:
#             lo=mid+1
#         elif cards[mid]<query:
#             hi=mid-1
#     return -1

#if there is duplicacy of query then we need to give first element
def locate_card(cards,query):
    lo=0
    hi=len(cards)-1
    
    while lo<=hi:
        mid=(lo+hi)//2
        result= test_location(cards,query,mid)
        if result == 'found':
            return mid
        elif result== 'left':
            hi = mid -1
        elif result == 'right' :
            lo = mid + 1
    return -1

cards=[10,9,8,8,8,8,7,6,4,3]
query=8
res=locate_card(cards,query)
print(res)

#edge case-->
#duplicacy of query and we need to give first occurence of it
#at position 0
#at end of list
#query not found
#list is empty
#list can be of diffferent data types
#in the mid
#values can be negative
#1:07:00