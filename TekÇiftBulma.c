// klavyeden girilen bir tam say�n�n tek mi �ift mi oldu�unu ekrana yazd�ran program� yaz�n�z.

#include <stdio.h>
#include <conio.h>
int main(){      
int a;        
printf("Bir sayi giriniz: \n");
scanf("%d",&a);    
if(a%2==0){    
 printf("%d sayisi cift sayidir \n",a);
}
 else{
 printf("%d sayisi tek sayidir \n",a);
 }
getch ();
 return 0;      
 }
