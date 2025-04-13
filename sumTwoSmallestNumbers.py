# file:	sumTwoSmallestNumbers.py
# author:	Diogo Marques
# data:	13/04/2025
# description:
#	Sum of Two Smallest Numbers at Codewars.com
def sum_two_smallest_numbers(numbers):
    if(len(numbers) < 4): 
        return 0
    
    a = numbers[0]
    b = numbers[1]
    
    for i in numbers:
        if(i < a):
            b = a
            a = i
        if(i < b and i > a):
            b = i
    return a + b