//Soru: Klavyeden bir arac�n gitti�i mesafe (km) ve bu mesafeyi gitti�i zaman (saat) giriliyor. Arac�n bu mesafeyi belirtilen s�rede gitmesi i�in h�z�n�n ne kadar olmas� gerekti�ini hesaplayan program� yaz�n�z.
//( X=V*T, X=YOL, V=HIZ, T=ZAMAN)
//��z�m: 
#include <stdio.h>

main()
{
	
float yol,hiz,zaman;

printf("Gidilen mesafeyi giriniz (KM) : ");

scanf("%f",&yol);

printf("Gecirilen zamani giriniz (Saat) : ");

scanf("%f",&zaman);

hiz=yol/zaman;

printf("Gitmeniz gereken hiz =%f KM/S ",hiz);

}

