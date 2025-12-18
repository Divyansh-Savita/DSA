def find_query(card,query):
    position=0
    while position<len(card):
        if card[position]==query:
            return position
        position+=1
    return -1
card=[5,4,-3]
query=-3
print(find_query(card,query))

#edge case-->
#at position 0
#at end of list
#query not found
#list is empty
#list can be of diffferent data types
#in the mid
#values can be negative
