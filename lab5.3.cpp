#include <cstdlib>
#include <iostream>
#include <iomanip>

#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>

using namespace std;

int main(void) {
srand((unsigned) time(NULL));
const int n=8;
int vvod=0,nmax,min=0,sum,m[n][n],i,j,k=0,mainDiagonal,C=0,S,nmin;

cout<<"Kak xotite vvesti elementu matrici?"<<endl;
cout<<"[1] - C klaviaturu"<<endl<<"[2] - Random"<<endl;
cin>>vvod;

switch(vvod)
{
case 1:
{
system("cls");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
cout<<"Vvedute element ["<<i<<"]["<<j<<"]: ";
cin>>m[i][j];
}
system("cls");
for (i=0;i<n;i++)
{
for (j=0;j<n;j++)
cout<<setw(5)<<m[i][j];
cout<<endl;
}
break;
}
    
case 2:
{
system("cls");
for (i=0;i<n;i++)
{
for (j=0;j<n;j++)
{
m[i][j]=(rand() %6-1);
cout<<setw(2)<<m[i][j];
}
cout<<endl;
}
break;
}
}
//-------------------------------------------------------------
cout<<endl<<"Ctolbcu ne sodershashie otricatelnue elementu: "<<endl;

for(j=0;j<n;j++)
{
    sum=0;
    for(i=0;i<n;i++)
    {
        if (m[i][j]>=0)
            sum+=m[i][j];
        else
        {
            sum=0;
            break;
        }
    }
    if(sum != 0)
    {
        cout<<"Sum v "<<j<<" ctolbce = "<<sum<<endl;
        k++;
    }
}

if(k == 0)
cout<<"Vce ctolbcu sodergat otricatelnue elementu"<<endl;

for(k=n-1;k>0;k--) 
{
    S=0;
    for(i=0, j=k;i<n, j<n;i++,j++)
        S+=abs(m[i][j]);
    
    cout<<"sum elementov "<<k<<" diagonali nad glavnoi diagonaliy = "<<S<<endl;

    if(k==n-1) min = S;
    else
    if(S<min) min = S;    
}

for(k=1;k<n;k++)
{
    S=0;
    for(i=k, j=0;i<n;i++,j++)
        S+=abs(m[i][j]);
        
    cout<<"sum elementov "<<k<<" diagonali pod glavnoi diagonaliy = "<<S<<endl;
    if(S<min) min = S;
}
                      
cout<<"min credi sum modulei = "<<min<<endl;

system("pause");
}
