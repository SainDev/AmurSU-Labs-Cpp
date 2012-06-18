#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(void) {
    srand((unsigned) time(NULL));
    const int n=8, p=9;
    int B[n][p], i, j, k=0, S, min=0;

	for (i=0;i<n;i++)
	{
		for (j=0;j<p;j++)
		{
			B[i][j]=(rand() %10 - 5);
			cout<<setw(3)<<B[i][j];
		}
		cout<<endl;
	}
    cout<<endl;
    for(k=p-1;k>0;k--)
    {
        S=0;
        for(i=0, j=k;i<n, j<p;i++,j++)
        {
            S+=B[i][j];
        }
        
        cout<<"sum elementov "<<k<<" diagonali nad glavnoi diagonaliy = "<<S<<endl;

        if(k==p-1) min = S;
        else
        if(S<min) min = S;
    }

    for(k=1;k<n;k++)
    {
        S=0;
        for(i=k, j=0;i<n;i++,j++)
        {
            S+=B[i][j];
        }
        cout<<"sum elementov "<<k<<" diagonali pod glavnoi diagonaliy = "<<S<<endl;
        if(S<min) min = S;
    }
	cout<<endl<<"min credi summ diagonalei = "<<min<<endl;
	
    system("pause");
}
