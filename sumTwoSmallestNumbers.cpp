// file:	sumTwoSmallestNumbers.cpp
// author:	Diogo Marques
// data:	13/04/2025
// description:
//	Sum of Two Smallest Numbers at Codewars.com
#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
   if(numbers.size() < 4){return 0;}
  long a = numbers[0];
  long b = numbers[1];
  for(int i = 0; i < numbers.size(); i++){
    if(numbers[i] < a){
      b = a;
      a = numbers[i];
    }
    if(numbers[i] < b && numbers[i] > a){
      b = numbers[i];
    }
  }
  return a + b;
}