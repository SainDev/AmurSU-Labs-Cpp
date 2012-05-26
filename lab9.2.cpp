#include <iostream>
#include <math.h>

using namespace std;

void func(float, float, float, float&);

int main(void) {
    float a, b, c, sum=0;
    
    cout<<"Vvedite a, b, c: ";
    cin>>a>>b>>c;
    
    func(2, b, -11, sum);
    cout<<"2*x*x+"<<b<<"*x-11 = "<<sum<<endl;
    func(a, -1, c, sum);
    cout<<a<<"*x*x-x+"<<c<<" = "<<sum<<endl;
    
    system("pause");
}

void func(float a, float b, float c, float& sum) {
     float d;

     d=b*b-4*a*c;
     if(d<0) d=0; 
     sum=((-b-sqrt(d))/(2*a))+((-b+sqrt(d))/(2*a));
}
