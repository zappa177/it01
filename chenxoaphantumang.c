#include <stdio.h>

//ham nhap mang
void nhapmang(int a[],int n)
{   
    int phantu;
    for(int i=0;i<n;++i)
    {
        printf("nhap vao phan tu thu %d ",i+1);
        scanf("%d",&phantu);
        a[i]=phantu;
    }
}
//ham in mang
void inmang(int a[],int n)
{   
    printf("mang duoc tao la : ");
    for(int i=0;i<n;++i)
    {
        printf("%d ",a[i]);
    }
}

//ham1 chen phan tu
void chenphantu(int a[],int &n)
{
    int k,x;
    printf("\nnhap x:");scanf("%d",&x);//so can chen vao mang
    printf("nhap k:");scanf("%d",&k);//vi tri chen x vao mang
    for(int i=(n-1);i>=k;--i){
        a[i+1]=a[i];
    }
    a[k]=x;
    n=n+1;
}

//ham2 xoa phan tu
void xoaphantu(int a[], int &n)
{
    int i,k;
    printf("\nnhap k:");scanf("%d",&k);//vi tri a[k] can xoa
    for(i=k;i<(n-1);++i){            //tu vi tri k den n-2 , chuyen doi a[k]=a[k+1]
        a[i]=a[i+1];
    }
    n=n-1;   
}
//ham xoa phan tu thoa man dieu kien
void xoaphantudk(int a[],int &n)//phan tu ==0
{
    int k=0;//so luong phan tu duoc don len dau mang
    for(int i=0;i<n;++i){
        if(a[i]!=0){
            a[k]=a[i];
            ++k;
        }
    }
    n=k;
}

//chuong trinh chinh
int main()
{   
    int n=6;//so phan tu  mang
    int a[6]={};
    nhapmang(a,n);
    inmang(a,n);
    chenphantu(a,n);
    inmang(a,n);
    xoaphantu(a,n);
    inmang(a,n);
    xoaphantudk(a,n);
    inmang(a,n);

}