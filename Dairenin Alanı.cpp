// Klavyeden yar� �ap� girilen dairenin, alan�n� hesaplayan program� yaz�n�z.

#include <stdio.h>

int main(){
	int daireYaricap;
	float pi=3.14, daireAlan;

     
	printf("Dairenin yaricapini giriniz : "); 
	scanf("%d",&daireYaricap);

 
	daireAlan = pi * daireYaricap * daireYaricap; 
	printf("Dairenin alani : %f \n",daireAlan);
}
