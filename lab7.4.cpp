#include<iostream.h>
#include<stdlib.h>
#include<math.h>

float mn(float, int, int, int, int); // в задании указано "Обязательно использовать прототип функции."

int main() {
    
    float z,t,a,b,n,m;
    cout<<"vvedite peremennyu z"<<endl;
    cin>>z;
    cout<<"vvedite peremennyu t"<<endl;
    cin>>t;

    m=sqrt(mn(z, 1, 4, 7, 1)); //1, 4, 7, 1 - коэффициенты. в функции нужно вставлять столько значений, сколько указано тут "float mn(float c, int q, int w, int e, int f)"
    cout<<m<<endl;
    n=2+exp(mn(z, 2, 0, 1, -3));
    cout<<n<<endl;
    a=m/n;
    cout<<"a=sqrt(z*z*z+4*z*z+7*z+1)/(2+e^2*z*z*z+z-3) = "<<a<<endl<<endl;

    m=mn(t, 0, 1, 13, 16);
    cout<<m<<endl;
    n=mn(t, 7, 1, 0, -4);
    cout<<n<<endl;
    b=m/n;
    cout<<"b=(t*t+13*t+16)/(7*t*t*t+t*t-4) = "<<b<<endl;
    
    system("pause");
    return 0;
}

float mn(float c, int q, int w, int e, int f) {
      return (q*pow(c,3)+w*pow(c,2)+e*c+f);
}
