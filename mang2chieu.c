#include <stdio.h>

//tao mang 2 chieu
void nhapmang2chieu(int a[][100],int &m,int &n)
{   
    printf("nhap vao so hang so cot : ");
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            printf("nhap phan tu a[%d,%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
//in mang 2 chieu
void inmang2chieu(int a[][100], int m, int n)
{
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
//chuong trinh chinh
int main()
{   
    int a[100][100];
    int m;
    int n;
    nhapmang2chieu(a,m,n);
    inmang2chieu(a,m,n);
}