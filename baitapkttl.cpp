/*
YÊU CẦU: Nhập vào từ bàn phím dãy số gồm n số nguyên (n>0) và thực hiện các yêu cầu sau đây
a. Hiển thị dãy số ra màn hình
b. Nhập vào từ bàn phím số nguyên x. Hãy cho biết x xuất hiện trong dãy số bao nhiêu lần và các vị trí xuất hiện của x
c. Xoá các số có giá trị bằng 0 có trong dãy
d. Sắp xếp các số nguyên tố về đầu dãy, các số không phải là số nguyên tố về cuối dãy
e. Tính trung bình cộng các số chia hết cho 3 có trong dãy
*/
//chuong trinh dung g++ version 13.1.0

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

// Nhập vào từ bàn phím dãy số gồm n số nguyên (n>0)
void nhap_mang(int a, int b[])
{
    int sn;
    for (int i = 0; i < a; ++i)
    {
        cout << "\t# nhap vao so thu " << i + 1 << " : ";
        cin >> sn;
        b[i] = sn;
    }
}

// Hiển thị dãy số ra màn hình
void in_mang(int a, int b[])
{
    cout << "@ day so cua ban la : ";
    for (int i = 0; i < a; ++i)
    {
        cout << b[i] << ' ';
    }
    cout << '\n';
}

// x xuất hiện trong dãy số bao nhiêu lần và các vị trí xuất hiện của x
void tim_vi_tri(int a, int b[])
{
    int x;
    int vitri_xh[100];
    int dem = 0;
    cout << "@ nhap vao 1 so nguyen bat ki : ";
    cin >> x;
    for (int i = 0; i < a; ++i)
    {
        if (x == b[i])
        {
            vitri_xh[dem] = i + 1;
            ++dem;
        }
    }
    if (dem == 0)
        cout << "\t# so " << x << " khong co trong day so\n";
    if (dem > 0)
    {
        cout << "\t# so " << x << " xuat hien " << dem << " lan.\n";
        cout << "\t# xuat hien vi tri thu : ";
        for (int j = 0; j < dem; ++j)
        {
            cout << vitri_xh[j] << ' ';
        }
        cout << '\n';
    }
}

// Xoá các số có giá trị bằng 0 có trong dãy
void xoa_so_0(int &a, int b[])
{
    int dem_so_0 = 0;
    char xoa;
    int k = 0;
    for (int i = 0; i < a; ++i)
    {
        if (b[i] == 0)
        {
            ++dem_so_0;
        }
    }
    if (dem_so_0 > 0)
    {
        cout << "@ trong day so co " << dem_so_0 << " so 0\n";
        cout << "\t# co mua xoa so 0 khong ,chon y/n : ";
        cin >> xoa;
        switch (xoa)
        {
        case 'y':
            for (int j = 0; j < a; ++j)
            {
                if (b[j] != 0)
                {
                    b[k] = b[j];
                    ++k;
                }
            }
            a = k;
            cout << "\t# day sau khi xoa so 0 : ";
            for (int g = 0; g < a; ++g)
            {
                cout << b[g] << ' ';
            }
            cout << '\n';
            break;
        case 'n':
            cout << "\t# ket thuc.\n";
            break;
        default:
            cout << "\t# ko dung chi chon y/n . ket thuc\n ";
            break;
        }
    }
    if (dem_so_0 == 0)
        cout << "@ khong co so 0 nao trong day so \n";
}

// ham kiem tra so nguyen to
bool snt(int a)
{
    if (a <= 1)
        return false;
    for (int i = 2; i <= sqrt(a); ++i)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
// Sắp xếp các số nguyên tố về đầu dãy, các số không phải là số nguyên tố về cuối dãy
void xep_snt(int a, int b[])
{
    int n = 0;
    int m = 0;
    int *c1 = new int[n]; // chua so nguyen to
    int *d1 = new int[m]; // chua so khong la nguyen to
    for (int i = 0; i < a; ++i)
    {
        if (snt(b[i]))
        {
            c1[n] = b[i];
            ++n;
        }
        else
        {
            d1[m] = b[i];
            ++m;
        }
    }
    cout << "\t#day so la so nguyen to : ";
    for (int j = 0; j < n; ++j)
    {
        cout << c1[j] << ' ';
    }
    cout << '\n';
    cout << "\t#day so khong la so nguyen to : ";
    for (int k = 0; k < m; ++k)
    {
        cout << d1[k] << ' ';
    }
    cout << '\n';
    // gop mang
    for (int i = 0; i < m; ++i)
    {
        c1[n] = d1[i];
        b[i] = c1[i];
        ++n;
    }
    cout << "@ mang sap xep snt len dau : ";
    for (int i = 0; i < n; ++i)
    {
        cout << c1[i] << ' ';
        b[i] = c1[i];
    }
    cout << '\n';
}

// trung bình cộng các số chia hết cho 3 có trong dãy
void tb_so_chia_het_3(int a, int b[])
{
    int c = 0;
    int tong = 0;
    int dem = 0;
    float tb = 0;
    for (int i = 0; i < a; ++i)
    {
        c = b[i] % 3;
        if (c == 0)
        {
            tong = tong + b[i];
            ++dem;
        }
    }
    if(dem>0){
    tb = (float)tong / dem;
    cout << "@ tb cong cua so chia het cho 3 trong day so la : " << tb << '\n';
    }
    else cout << "@ khong co so nao chia het cho 3 .\n";
}

// chuong trinh chinh

int main()
{
        bool ketthuc=false;
        char luachon;
        while(ketthuc!=true)
        {
        unsigned int n;
        cout << "@ ban muon nhap bao nhieu so : ";
        cin >> n;
        cin.clear();
        cin.ignore(100, '\n');
        if(n>0 && n<4294967295){
        int a[n];
        if (n <= 0)
        {
            cout << "\n\t# khong hop le ,chi nhap so nguyen > 0. ket thuc .\n";
        }
        if (n > 0)
        {
            nhap_mang(n, a);
            in_mang(n, a);
            tim_vi_tri(n, a);
            xoa_so_0(n, a);
            in_mang(n, a);
            xep_snt(n, a);
            in_mang(n, a);
            tb_so_chia_het_3(n, a);
        }
        cout << "@ co muon tiep tuc khong y/n: ";
        cin >>luachon;
        switch (luachon)
        {
        case 'y':
            ketthuc=false;
            break;
        case 'n':
            cout << "ket thuc chuong trinh.";
            ketthuc=true;
            break;
        
        default:
            cout <<"khong hop le , ket thuc.";
            ketthuc=true;
            break;
        }
        }
        else {
        cout << "so qua lon . ket thuc.";
        break;
        }
        }
}