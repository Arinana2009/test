#include <iostream>

int main() {
   int coin;
   int total = 0;
   while (std::cin >> coin && coin != 0) {
      total += coin;
   }
   std::cout << total << std::endl;
   return 0;
}
