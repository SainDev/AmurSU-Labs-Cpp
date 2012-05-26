#include <iostream>

using namespace std;

float konus(float, float, float);

int main(void) {
    float H, r, R, vmax=0;
    for(int i=0; i<3; i++) {
        cout<<"Vvedite H, r, R "<<i+1<<" konusa"<<endl;
        cin>>H>>r>>R;
    	cout<<"V "<<i+1<<" konusa = "<<konus(H, r, R)<<endl<<endl;
    	if(konus(H, r, R)>vmax) vmax = konus(H, r, R);
    }
    cout<<"Max V = "<<vmax<<endl;
    system("pause");
}

float konus(float H, float r, float R) {
    float pi=3.14;
    return (pi*H*(R*R+R*r+r*r))/3;
}
