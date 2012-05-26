#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(void) {
    srand((unsigned) time(NULL));
    const int n=10, p=10;
    int P, m[n][p], i, j;

	for (i=0;i<n;i++)
	{
		for (j=0;j<p;j++)
		{
			m[i][j]=(rand() %10 - 5);
			cout<<setw(3)<<m[i][j];
		}
		cout<<endl;
	}

    for (j=4;j<p;j+=5)
    {   
        P=1;
		for (i=0;i<n;i++)
		{
			if(m[i][j]>0) P*=m[i][j];
        }
			
		cout<<endl<<"Proizv-e "<<j+1<<" slolbca = "<<P;
    }
    
    cout<<endl;
	
    system("pause");
}
