#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(void) {
    srand((unsigned) time(NULL));
    const int n=10, p=10;
    int sum, m[n][p], i, j;

	for (i=0;i<n;i++)
	{
		for (j=0;j<p;j++)
		{
			m[i][j]=(rand() %10 - 5);
			cout<<setw(3)<<m[i][j];
		}
		cout<<endl;
	}

    for (i=0;i<n;i++)
    {   
        sum=0;
		for (j=0;j<p;j++)
		{
			sum+=m[i][j];
        }
			
		cout<<endl<<"Summa "<<i+1<<" stroki = "<<sum;
    }
    
    cout<<endl;
	
    system("pause");
}
