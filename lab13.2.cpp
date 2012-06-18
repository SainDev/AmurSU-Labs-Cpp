#include <iostream>
#include <stdio.h>
#include "lab13.2.h"

using namespace std;

int main() {
    Triangle tr1, tr2(2), tr3(8, 9), tr4(9, 5, 7);
    
    system("cls");
    printf("tr1"); tr1.Print();
    printf("tr2"); tr2.Print();
    printf("tr3"); tr3.Print();
    printf("tr4"); tr4.Print();
    
    printf("\np1 = %0.1f, S1 = %0.1f\n", tr1.Perimeter(), tr1.Square(tr1.Perimeter()));
    printf("p2 = %0.1f, S2 = %0.1f\n", tr2.Perimeter(), tr2.Square(tr2.Perimeter()));
    printf("p3 = %0.1f, S3 = %0.1f\n", tr3.Perimeter(), tr3.Square(tr3.Perimeter()));
    printf("p4 = %0.1f, S4 = %0.1f\n", tr4.Perimeter(), tr4.Square(tr4.Perimeter()));
    
    system("pause");
    return 0;
}
