// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

/* - bool checkPrime(uint64_t value) - проверка числа на простоту.
   - uint64_t nPrime(uint64_t n) - нахождение n-ого простого числа (в ряду).
   - uint64_t nextPrime(uint64_t value) - нахождение ближайшего следующего простого числа к value.
   - uint64_t sumPrime(uint64_t hbound) - сумма всех чисел до hbound (не включая его) */

/* int value, i;
cout << "Enter the number: ";
cin >> value;
cout << value << endl; */

bool checkPrime(uint64_t value) {
  for (int i = 2; i*i <= value; i++) {
    if (value % i == 0) {
      return false;
      break;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  int count = 0;
  uint64_t i = 1;
  while (count !=n ) {
    i++;
    if (checkPrime(i))
      count++;
  }
  return i;
}

uint64_t nextPrime(uint64_t value) {
  int c = value;
  while (true) {
    c++;
    if (checkPrime(c))
      return c;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
  for (int i = 2; i < hbound; i++) {
    if (checkPrime(i)) 
      sum +=i;
  }
  return sum;
}
