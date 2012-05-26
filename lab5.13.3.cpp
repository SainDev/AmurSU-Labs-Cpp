#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(void) {
    srand((unsigned) time(NULL));
    const int m=7, l=7;
    int sum=0, A[m][l], i, j;

	for (i=0;i<m;i++)
	{
		for (j=0;j<l;j++)
		{
			A[i][j]=(rand() %10 - 5);
			cout<<setw(3)<<A[i][j];
		}
		cout<<endl;
	}

    for (i=0;i<m;i++)
    {   
		sum+=A[i][i];
    }
    
    cout<<endl<<"Summa el-ov glavnoi diagonali = "<<sum<<endl;
	
    system("pause");
}
