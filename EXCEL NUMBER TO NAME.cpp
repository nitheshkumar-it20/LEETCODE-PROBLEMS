/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
   int num;
   cin>>num;
   string str;
   while(num>0){
       int rem=(num-1)%26;
       char l='A'+rem;
       str=l+str;
       num=(num-1)/26;
   }
   cout<<str;
}
