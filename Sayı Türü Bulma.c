/* klavyeden 3 basamakl� bir say� giriliyor. (3 basamakl� olmak zorunda)
girilen bu sayi;
112, 116, 229 format�nda ise m�kemmel sayi
121, 151, 565 format�nda ise harika sayi
122, 166, 899 format�nda ise s�per say� ve bunlar�n disinda kalan sayilar ise normal sayi olarak adland�r�l�yor
klavyeden girilen 3 bas. say�n�n hangi t�r sayi oldugunu bulan program� yaziniz.
*/
#include<stdio.h>
main(){
int sayi,y,o,b;
printf("3 basamakli bir sayi girin:");
scanf("%d",&sayi);
if(sayi<1000 && sayi>99){
y=sayi/100;    // 123/100=1
o=(sayi/10)%10; //741/10=74%10=4
b=sayi%10;     // 456%10=6 say�y� s�rekli 10 say�s�na b�ler
if(y==o && y!=b){
printf(" mukemmel sayi...");
}
else if(y==b && y!=o){
printf("harika sayi...");
}
else if(o==b && o!=y){
printf("super sayi...");
}
else{
printf("normal sayi...");
}
}
else{
printf("sayi 3 basamakli degil..");
}
}
