'''
#include <iostream>
   //~[._.]~
using namespace std;

int main (int argc, char* argv[])
{
cout << "count: " << argc - 1 << endl;
for (int i = 1; i < argc, i++)
   {
   cout << "argv[ " << i << "]: " << argv [i] << endl;
   }
char opera;
opera = argv[2] [0];
switch (opera)
   {
   case '+':
   cout << atoi(argv[1]) + atoi(argv[3]) << endl;
   break;
   case '-': 
   cout << atoi(argv[1]) - atoi(argv[3]) << endl;
   break;
   default:
   cerr << "error";
   }
}
'''
