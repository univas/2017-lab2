#include<stdio.h>
#include<stdlib.h>

int main() {
     short a = 250;
     short b = 300;
     short * ptrA = &a;
     short * ptrB = &b;
     
     printf("%i\n",ptrA);
     printf("%i\n",ptrB);
     
     system("pause");
     
     return 0;
}
