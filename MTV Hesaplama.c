/* B�R ARACIN MTV TUTARI HESAPLANMAK �STEN�YOR. E�ER TOPLAM MTV TUTARI 2000 TL VE �ZER� �SE EK OLARAK 1000 TL DAHA �CRET �DEMEKTED�R.
BU ARA� NE KADAR MTV VE VARSA EKSTRA MTV TUTARINI NE KADAR �DEM��T�R.
FORM�L MTV=YAS*HAC�M/2
*/
#include<stdio.h>
main(){
int yas,model,hacim,mtv,mtv1;
printf("model giriniz: ");
scanf("%d",&model);
yas=2023-model;
printf("hacim giriniz: ");
scanf("%d",&hacim);
mtv=yas*hacim/2;
if(mtv>=2000){
mtv1=mtv+1000;
printf("ekstra tutarli mtv ucreti: %d",mtv);
}
printf("\n mtv ucreti: %d",mtv);

}
