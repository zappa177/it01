#include <stdio.h>
//ham nho nhat
int nhonhat(int x,int a[]){
    int imin,i;
    imin=0;
    for(i=1;i<x;++i){
        if(a[i]<a[imin])
            imin=i;
    }
    return imin;
}
//ham lon nhat
void lonnhat(int x,int a[]){
    x=a[0];
    int vitri=1;
    for(int i=1;i<9;++i){
        if(a[i]>x){ x=a[i];
        vitri=i+1;
        }
    }
    printf("so lon nhat la : %d\n",x);
    printf("vi tri la %d\n",vitri);
}
int main()
{   
    int a[]={6,6,2,9,100,0,6,-9,10};
    printf("so nho nhat la %d \n",a[nhonhat(9,a)]);
    lonnhat(9,a);
}