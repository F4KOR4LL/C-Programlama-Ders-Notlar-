// 5 elemanl� biz dizinin toplam�n� ve ortalamas�n� yazd�ran program.

#include<stdio.h>

main()
{
	int dizi[5];
	int toplam=0;
	
	for (int i=0;i<5;i++)
	{
		printf("%d. Elemani gir : ",i);
		scanf("%d",&dizi[i]); // i de�eri ka� ise scanf'e o de�er atanacak.
		toplam+=dizi[i];
	}
	printf("Toplam = %d ve Ortalama = %f",toplam,(toplam/5.0));
	
}
