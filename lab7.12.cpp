#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

float tr(float, float);

int main(void) {
    srand((unsigned) time(NULL));
    float a, b, c, gmax=0;
    for(int i=0; i<5; i++) {
        a = rand() %10;
        b = rand() %10;
    	cout<<"Gipotenuza "<<i+1<<" treug-ka = "<<tr(a, b)<<endl<<endl;
    	if(tr(a, b)>gmax) gmax = tr(a, b);
    }
    cout<<"Max gipotenuza = "<<gmax<<endl;
    system("pause");
}

float tr(float x, float y) {
    return sqrt(x*x+y*y);
}
