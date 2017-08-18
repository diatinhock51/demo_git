/* Giai thich
-) Moi cach sap xep luon tao ra duoc 16 bo 3 so co tong la: 3*(16+1)*16/2=408;
-) Cac bo ba so nay nam trong 16C3=560 tap con co 3 phan tu lay ra tu tap co 16 phan tu 
-) Chuong trinh liet ke ra cac tap con co 3 phan tu tu tap co 16 phan tu ban dau (C={1,2,3,...,16}) 
	sao cho tong 3 phan tu la s < 26.
-) Tong 15 bo so con lai co trung binh cong la t=(408-s)/15.
-) neu t>25 thi bat buoc phai co 1 bo so trong 15 bo so con lai co tong >=26
*/
#include <stdio.h> 
#include <conio.h> 
#define MAX 100 
int n, k, soBoSo, C[MAX];
void LietKe()
{
	int i; 
	int s=0;
	for (i = 1; i <= k; i++)	s=s+C[i];
	if(s<26)
	{
		soBoSo++;
		printf("\n Bo so thu %d:", soBoSo);
		for (i = 1; i <= k; i++)		printf("%d", C[i]);	
		//printf("\t%d", s);	
		printf(". Trung binh cong t= %0.2f",(double)(408-s)/15);	
	}
}	
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

