#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(void) {
    srand((unsigned) time(NULL));
    const int m=7, l=7;
    int P=1, sum, A[m][l], i, j;

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
        sum=0;
		for (j=0;j<l;j++)
		{
			if(A[i][j]>0) sum+=A[i][j];
        }
		//cout<<sum<<" "<<endl;
		P*=sum;
    }
    
    cout<<endl<<"Proizv-e summ pol-h el-ov strok = "<<P<<endl;
	
    system("pause");
}
