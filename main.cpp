#include<stdio.h>
#include<conio.h>

int a=4;
void getAglobal(){
printf("A main adalah %d alamatnya %p\n" ,a,&a);

}

void fungsi_by_value(int a){
a=a*3;
printf("A main adalah =%d alamatnya adalah %p\n",a,&a);

}
int main(){

int a=5;
getAglobal();
printf("A main adalah %d alamatnya adalah %p\n",a,&a);
fungsi_by_value(a);
printf(" A main setelah fungsi dipanggil adalah =%d alamatnya adalah %p\n",a,&a);
getch();
}
