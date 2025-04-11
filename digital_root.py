# file:    digital_root.py
# author:  Diogo Marques
# data:    11/04/2025
# description:
#  Sum of Digits / Digital Root at codewars.com


def digital_root(n):
    aux = 0
    if n <= 9:
        return n
    else:
        aux = n % 10
        n = n // 10
        aux = (aux + digital_root(n))
        if(aux > 9):
            aux = digital_root(aux)

        return aux

print("digital_root(16) = ", digital_root(16))
print("digital_root(195) = ", digital_root(195))
print("digital_root(992) = ", digital_root(992))
print("digital_root(167346) = ", digital_root(167346))
print("digital_root(0) = ", digital_root(0))
