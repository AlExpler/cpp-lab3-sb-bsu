#include <iostream>
#include <cmath>

int main()
{
int k, i = 1, sum_k = 0, number;
while (true) {
std::cout << " Enter the amount of integers to sum = "; std::cin >> k;
if (k <= 0) { std::cout << "Invalid value. Please input a positive integer number\n"; continue; }
break;
}
do {
std::cout << "Enter integer nr. " << i << ": ";
std::cin >> number;
sum_k += number; i++;
} while (i <= k);
std::cout << " The total sum of " << k << " integers is: " << sum_k;
return 0;
}
