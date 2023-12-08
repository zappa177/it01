#include <iostream>

using namespace std;
//nhap mang
void nhap_mang(int n, int a[]){
    int so_nhap{};
    cout<<"nhap vao "<<n<<" so\n";
    for(int i=0;i<n;++i){
        cin>>so_nhap;
        cin.clear();
        cin.ignore(1000,'\n');
        a[i]=so_nhap;
    }
}

//in mang
void in_mang(int n,int a[]){
    cout<<"day so ban vua nhap la : ";
    for(int i=0;i<n;++i){
        cout<<a[i]<<' ';
    }

}

//tim so x :so lan xuat hien, vi tri xuat hien
void timx(int n,int m,int a[]){
    int vi_tri_xuat_hien[32676];
    int lan_xuat_hien{0};
    int j{0};
    for(int i=0;i<n;++i){
        if(m==a[i]){
            vi_tri_xuat_hien[lan_xuat_hien]=i+1;
            ++lan_xuat_hien;
        }  
    }
    if(lan_xuat_hien>0){
    cout<<"so " <<m << " co " << lan_xuat_hien<<" lan xuat hien trong day so\n";
    cout <<"vi tri xuat hien cua "<< m << " la : ";
    for(int i=0;i<lan_xuat_hien;++i){
        cout << vi_tri_xuat_hien[i]<<" ";
    }
    }
    else cout << "so "<<m<<" khong co trong day so nhap \n";
}

//so gia tri 0 trong day so
void xoa_0(int n,int a[]){
    bool m{1};
    while(m==1){
    cout<<"co muon xoa gia tri 0 trong day so khong : 1 de xoa - 0 ko xoa \n";
    int x{};
    cin>>x;
    switch (x)
    {
    case 1:
        for(int i=0;i<n;++i){
            
        }
        break;
    
    case 0:
        break;
    default :
        cout << "chi nhap so 1 hoac 0 \n";
        break;
    }
    cout<<"con muon xoa nua khong : 1 tiep tuc - 0 de dung\n";
    cin>>m;
    cin.clear();
    cin.ignore(10000,'\n');
    }


}



int main()
{   
    int n{};
    int x{};
    bool tieptuc{1};
    int mangsonguyen[32767];
    while(tieptuc==1){
        cout<<"ban muon nhap bao nhieu so :\n";
        cin>>n;
        if(cin){
        //nhap mang
        nhap_mang(n,mangsonguyen);
        //xuat mang ra man hinh
        in_mang(n,mangsonguyen);
        //nhap vao 1 so tim so lan xuat hien va vi tri xuat hien
        bool tieptuctimso{1};
        while(tieptuctimso==1){
            cout<<"\nnhap vao 1 so bat ki : ";
            cin>>x;
            timx(n,x,mangsonguyen);
            cout << "\nco muon tiep tuc tim so nua khong : "
                <<"1 de tiep tuc - 0 de dung \n";
            cin>>tieptuctimso;
            cin.clear();
            cin.ignore(1000,'\n');
            if(tieptuctimso!=1) continue;;
            }  
        //xoa gia tri 0 trong day
        xoa_0(n,mangsonguyen);
        }
        else{
            break;
        }
        
    cout << "\nban co muon tiep tuc khong : tiep tuc nhap 1 - ket thuc nhap 1 chu bat ki\n";
    cin>>tieptuc;
    }
    return 0;
}