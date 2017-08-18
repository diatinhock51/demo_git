/* Giai thich
TlqV
*/
#include <stdio.h> 
#include <conio.h> 
#define MAX 100 
int n, k, soBoSo, C[MAX];

int main()
{	
	n=16;k=3;
	for (int i = 1; i <= k; i++)	C[i] = i;
	int i, j;
	do
	{
		LietKe();		
		i = k;
		while (i > 0 && C[i] == n - k + i)	i--;
		if (i > 0) 
		{
		  C[i] = C[i] + 1;
		  for (j = i + 1; j <= k; j++)
		  C[j] = C[i] + j - i;
		}
	}while(i!=0) ;
	getch();
	return 0;
}

