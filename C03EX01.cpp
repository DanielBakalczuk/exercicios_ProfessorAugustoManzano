// C03EX01.cpp

#include <iostream>
using namespace std;

int main(void)
{
   int A, B, R;

   cout<< "entre o valor <A>: "; cin>> A;
   cin.ignore(80, '\n');
   cout<< "entre o valor <B>: "; cin>> B;
   cin.ignore(80, '\n');
   cout<< "\n";
   R = A+B;

   cout<< A << "+" <<B << "=" << R << endl;
   cout << "tecle <Enter> para encerrar... ";
   cin.get();
   return 0;

}
