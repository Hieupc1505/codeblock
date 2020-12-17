#include <bits/stdc++.h>

using namespace std;
class GiaoVien;
class Nguoi {
protected:
    string hoten, gioitinh;
    int tuoi;
public:
    void nhap();
    void xuat();

};
void Nguoi::nhap(){
    cout<<"Nhap ten: "; fflush(stdin); getline(cin,hoten);
    cout<<"Nhap gioi tinh: "; getline(cin,gioitinh);
    cout<<"Nhap tuoi: "; cin>>tuoi;
}
void Nguoi::xuat(){
    cout<<setw(20)<<left<<hoten;
    cout<<setw(20)<<left<<gioitinh;
    cout<<setw(20)<<left<<tuoi;
}
class Khoa {
public:
    string maKhoa, tenKhoa, trk;
    friend class GiaoVien;
    friend void khoatin(GiaoVien a);

};
class GiaoVien : public Nguoi {
    unsigned luong, thamNien;
    Khoa kh;
    friend void khoatin(GiaoVien a);
    friend void khoatinds(GiaoVien* a, int n);
public:
    void nhap();
    void xuat();
};
void GiaoVien::nhap(){
//    Nguoi::nhap();
//    cout<<"Nhap luong thang: "; cin>>luong;
//    cout<<"Tham nien trong nghe: "; cin>>thamNien;
    cout<<"Nhap ma khoa: "; fflush(stdin); getline(cin,kh.maKhoa);
    cout<<"Nhap ten khoa: "; getline(cin,kh.tenKhoa);
    cout<<"NHap truong khoa: "; getline(cin,kh.trk);
}
void GiaoVien::xuat(){
    Nguoi::xuat();
    cout<<setw(20)<<left<<luong;
    cout<<setw(20)<<left<<thamNien;
    cout<<setw(20)<<left<<kh.maKhoa;
    cout<<setw(20)<<left<<kh.tenKhoa;
    cout<<setw(20)<<left<<kh.trk<<endl;
}
void title(){
    cout<<setw(20)<<left<<"Ho va ten";
    cout<<setw(20)<<left<<"Gioi tinh";
    cout<<setw(20)<<left<<"Tuoi";
    cout<<setw(20)<<left<<"Luong";
    cout<<setw(20)<<left<<"Tham nien";
    cout<<setw(20)<<left<<"MaKhoa";
    cout<<setw(20)<<left<<"TenKhoa";
    cout<<setw(20)<<left<<"TrK"<<endl;
}
void nhapds(GiaoVien* a, int n){
    for( int i = 0 ; i<n ; i++){
        a[i].nhap();
    }
}
void xuatds(GiaoVien* a, int n){
    title();
    for( int i = 0; i<n ; i++){
        cout<<a[i].kh.tenKhoa;
    }
}


//void khoatinds(GiaoVien* a, int n){
//   for( int i = 0; i<n ; i++ ){
//        cout<<a[i].kh.tenKhoa<<end;
//   }
//}
int main()
{
    GiaoVien *a;
    int n;
    do{
    cout<<"Nhap so giao vien: "; cin>>n;
    }while( n > 30 || n < 0);
    a = new GiaoVien[n];
    nhapds(a,n);
    xuatds(a,n);
//    cout<<endl<<endl;
//    khoatinds(a,n);
}
