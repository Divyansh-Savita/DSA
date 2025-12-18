def find_query(card,query):
    position=0
    while position<len(card):
        if card[position]==query:
            return position
        position+=1
    return -1
card=[50,47,36,23,12,9,7,5,3,2,1,0]
query=0
print(find_query(card,query))
