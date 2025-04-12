# file:    tenMinutesWalk.py
# author:  Diogo Marques
# data:    12/04/2025
# description:
#  Ten Minutes Walk at Codewars.com

def isValidWalk(walk):
    if(len(walk) != 10):
        return False
    x = 10
    y = 10
    for i in walk:
            match i:
                case 'n':
                    y += 1
                case 's':
                    y += -1
                case 'w':
                    x += -1
                case 'e':
                    x += 1
                case _:
                    return False
    if(x == 10 and y == 10):
        return True
    return False
    pass

test1 = ['n','s','n','s','n','s','n','s','n','s']
test2 = ['n']
test3 = ['n','n','n','n','n','n','n','n','n','n']
test4 = ['n','s','n','s','n','s','n','s','n','s','n','s']
print("test1 = ", isValidWalk(test1))
print("test2 = ", isValidWalk(test2))
print("test3 = ", isValidWalk(test3))
print("test4 = ", isValidWalk(test4))

