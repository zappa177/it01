#include <stdio.h>

//ham 1
void snt()
{
    int n,p,q;
    //n la so nhap vao
    //p la so tu 2 cho den n/2
    //q la n/2
    printf("nhap vao 1 so bat ki \n");
    scanf("%d",&n);
    p=2;
    q=n/2;
    bool ok=1;//ket qua la snt hay ko
    while(ok==1 && p<=q){
        if(n%p==0){
            ok=0;
            break;
        }
        ++p;
    }
    if(ok) printf("/n%d la so nguyento",n);
    else printf("\n%d khong la so nguyen to",n);
}
//chuong trinh chinh
int main()
{
    snt();
}