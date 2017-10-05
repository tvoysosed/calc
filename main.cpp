'''
#include <iostream>

   //   ш
   // {._.}
   //  ~|~
   //  / \

using namespace std;
int main (int argc, char* argv[])
{
std::cout << "Выберите операцию [+, -, *, /, %, ^, !, &, |, <, >]:" << std::endl;
char opera;
int a, b;
std::cin >> opera >> endl;
switch (opera)
   {
   case '+':
   std::cout << "Введите первое число" << std::endl;
   std::cin >> a >> std::endl ;
   std::cout << "Введите второе число" << std::endl;
   std::cin >> b >> std::endl;
   std::cout << a + b << std::endl;
   break;
   
   case '-': 
   std::cout << "Введите первое число" << std::endl;
   std::cin >> a >> std::endl ;
   std::cout << "Введите второе число" << std::endl;
   std::cin >> b >> std::endl;
   std::cout << a - b << std::endl;
   break;
   
   case '*': 
   std::cout << "Введите первое число" << std::endl;
   std::cin >> a >> std::endl ;
   std::cout << "Введите второе число" << std::endl;
   std::cin >> b >> std::endl;
   std::cout << a * b << std::endl;
   break;
   
   case '/': 
   std::cout << "Введите первое число" << std::endl;
   std::cin >> a >> std::endl ;
   std::cout << "Введите второе число" << std::endl;
   std::cin >> b >> std::endl;
   if (b != 0) {
      std::cout << a / b << std::endl;
      break;
   } else {
       std::cout << "На 0 делить нельзя" << std::endl
   
   /// дальше доделать
   
   
   
   
   
   
   case '%': 
   std::cout << "Введите первое число" << std::endl;
   std::cin >> a >> std::endl ;
   std::cout << "Введите второе число" << std::endl;
   std::cin >> b >> std::endl;
   std::cout << atoi(argv[1]) - atoi(argv[3]) << std::endl;
   break;
   
   case '^': 
   std::cout << "Введите первое число" << std::endl;
   std::cin >> a >> std::endl ;
   std::cout << "Введите степень" << std::endl;
   std::cin >> b >> std::endl;
   std::cout << atoi(argv[1]) - atoi(argv[3]) << std::endl;
   break;
   
   case '!': 
   std::cout << "Введите число" << std::endl;
   std::cin >> a >> std::endl ;
   std::cout << atoi(argv[1]) - atoi(argv[3]) << std::endl;
   break;
   
   case '&': 
   std::cout << "Введите первое число" << std::endl;
   std::cin >> a >> std::endl ;
   std::cout << "Введите второе число" << std::endl;
   std::cin >> b >> std::endl;
   std::cout << atoi(argv[1]) - atoi(argv[3]) << std::endl;
   break;
   
   case '|': 
   std::cout << "Введите первое число" << std::endl;
   std::cin >> a >> std::endl ;
   std::cout << "Введите второе число" << std::endl;
   std::cin >> b >> std::endl;
   std::cout << atoi(argv[1]) - atoi(argv[3]) << std::endl;
   break;
   
   case '<': 
   std::cout << "Введите первое число" << std::endl;
   std::cin >> a >> std::endl ;
   std::cout << atoi(argv[1]) - atoi(argv[3]) << std::endl;
   break;
   
   case '>': 
   std::cout << "Введите первое число" << std::endl;
   std::cin >> a >> std::endl ;
   std::cout << atoi(argv[1]) - atoi(argv[3]) << std::endl;
   break;
   
   default:
   std::cerr << "error";
   }
}
'''
