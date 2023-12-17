//mang tang dan
//thuat toan noi bot
#include <stdio.h>
//ham sap xep mang giam dan
void giamdan(int a[])
{
    for(int i=0;i<6;++i){
        for(int j=i+1;j<7;++j){
            if(a[i]<a[j]){
                int tg = a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    for(int i=0;i<7;++i)
        printf("%d ",a[i]);

}
int main()
{
    int a[7]={1,3,2,9,5,3,6};
    for (int i=0;i<6;++i){
        for(int j=i+1;j<7;++j){
            if(a[i]>a[j]){
                int tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    for (int i=0;i<7;++i)
    printf("%d ",a[i]);
    printf("\n");
    giamdan(a);

}