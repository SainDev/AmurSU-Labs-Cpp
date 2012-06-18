#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(void) {
    srand((unsigned) time(NULL));
    const int n=8, p=9;
    int B[n][p], i, j;

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

	for (i=0;i<n;i++)
	{
        if(B[i][p-1]>0)
            B[i][p-1] = 1;
        else
            B[i][p-1] = 0;
    }
    
    for (i=0;i<n;i++)
	{
		for (j=0;j<p;j++)
		{
			cout<<setw(3)<<B[i][j];
		}
		cout<<endl;
	}
    
    cout<<endl;
	
    system("pause");
}
