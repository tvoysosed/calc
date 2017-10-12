'''
#include <iostream>
#include <cmath>
#include <cctype>
#include <cstdlib>

   //   ш
   // {._.}
   //  ~|~
   //  / \

using namespace std;

void sum(int a, int b, char fun[] = "")
{
fun[0] = '0';
cout << "Ответ: " << a + b << endl;
}

void sub(int a, int b, char fun[] = "")
{
fun[0] = '0';
cout << "Ответ: " << a - b << endl;
}

void mul(int a, int b, char fun[] = "")
{
fun[0] = '0';
cout << "Ответ: " << a * b << endl;
}

void div(int a, int b, char fun[] = "")
{
fun[0] = '0';
if (b != 0)
   {
   cout << "Ответ: " << a / b << endl;
   }
   else
   {
   cout << "На 0 делить нельзя " << endl;
   }
}

void mod(int a, int b, char fun[] = "")
{
if (b != 0)
   {
   fun[0] = '0';
   cout << "Ответ: " << a % b << endl;
   }
else
   {
   cout << "На 0 делить нельзя" << endl;
   }
}

void pow(int a, int b, int res1, char fun[] = "")
{
fun[0] = '0';
if (b == 0)
   {
   cout << "Ответ: " << 1 << endl;
   }
else
   {
   res1 = 1;
   for (int i = 0; i < b; ++i)
      {
      res1 = res1 * a;
      }
   cout << "Ответ: " << res1 << endl;
   }
}

void Not(int a, char fun[] = "")
{
fun[0] = '0';
cout << "Ответ: " << !a << endl;
}

void And(int a, int b, int res, char fun[] = "")
{
fun[0] = '0';
res = a & b;
cout << "Ответ: " << res << endl;
}

void Or(int a, int b, int res, char fun[] = "")
{
res = a | b;
fun[0] = '0';
cout << "Ответ: " << res << endl;
}

void rol(int a, int b, int res, char fun[] = "")
{
res = a < 1;
fun[0] = '0';
cout << "Ответ: " << res << endl;
}

void ror(int a, int b, int res, char fun[] = "")
{
res = a > 1;
fun[0] = '0';
cout << "Ответ: " << res << endl;
}

int main()
{
char opera[] = "";
int o = 0, a, b;
char aa[] = "", bb[] = "";
bool ch1 = false, ch2 = false;
while (true)
   {
    while ((opera[0] != '+') && (opera[0] != '-') && (opera[0] != '*') && (opera[0] != '/') && (opera[0] != '%') && (opera[0] != '^') && (opera[0] != '!') && (opera[0] != '&') && (opera[0] != '|') &&
   (opera[0] != '<') && (opera[0] != '>'))
      {
      cout << "Выберите операцию [+, -, *, /, %, ^, !, &, |, <, >]:" << endl;
      cin >> opera;
      }
   while (ch1 == false)
      {
      cout << "Введите первое число" << endl;
      cin >> aa;
      if (isdigit(aa[0]) || (isdigit(aa[1])))
         {
         a = atoi(aa);
         ch1 = true;
         break;
         }
      else
         {
         cout << "Введите число" << endl;
         }
      }
   if ((opera[0] != '!') && (opera[0] != '<') && (opera[0] != '>'))
      {
      while (ch2 == false)
         {
         cout << "Введите второе число" << endl;
         cin >> bb;
         if (isdigit(bb[0]) || (isdigit(bb[1])))
            {
            b = atoi(bb);
            ch2 = true;
            break;
            }
         else
            {
            cout << "Введите число" << endl;
            }
         }
      }
   ch1 = false;
   ch2 = false;
   switch (opera[0])
      {
      case '+':
      sum(a, b, opera);
      break;

      case '-':
      sub(a, b, opera);
      break;

      case '*':
      mul(a, b, opera);
      break;

      case '/':
      div(a, b, opera);
      break;

      case '%':
      mod(a, b, opera);
      break;

      case '^':
      pow(a, b, o, opera);
      break;

      case '!':
      Not(a, opera);
      break;

      case '&':
      And(a, b, o, opera);
      break;

      case '|':
      Or(a, b, o, opera);
      break;

      case '<':
      rol(a, b, o, opera);
      break;

      case '>':
      ror(a, b, o, opera);
      break;

      return 0;
      }
   }
}
'''
