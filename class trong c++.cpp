#include"iostream"
#include"stdio.h"
#include<string.h>
using namespace std;
class Daibieu {
	private:
		int cmd;
		int sdt;
		char chucvu[20];
		char h[20];
		int phieu;
		char hoten[20];
		
		public:
		string geth(){
				return h;
			}
        void nhap();
        void xuat( );
};
void Daibieu::nhap(){
	cout<<"\nNhap ten dai bieu: ";
      	fflush(stdin);
      	gets(hoten);
      	cout<<"\nNhap ly lich 3 doi (tot,trung binh): ";
      	fflush(stdin);
      	gets(h);
      	cout<<"\nNhap so dien thoai: ";
	    cin>>sdt;
	    cout<<"\nNhap chuc vu hien tai: ";
	   fflush(stdin);
      	gets(chucvu);
      	cout<<"\nNhap so phieu: ";
	    cin>>phieu; 
		cout<<"\nNhap CMND: ";
	    cin>>cmd;   
}
void Daibieu::xuat(){
	
		printf("%-20s %-24s 0%-18d %-22s %-13d 0%d \n", hoten, h, sdt, chucvu,phieu,cmd);
}
void nhapdanhsachDaibieu( int &n,Daibieu a[]){
	cout<<"Muon tao may dai bieu: ";
	cin>>n;
	for(int i=0;i<n;i++){
	cout<<"\nDai bieu thu "<<i+1;
	a[i].nhap();
	}
}
void xuatdanhsachDaibieu( int &n,Daibieu a[]){
	cout<<"Danh sach dai bieu gom: "<<endl;
printf("\nSTT     Ho va ten            Ly lich 3 doi            So dien thoai       Chuc vu hien tai       So phieu      CMND\n");
	for(int i=0;i<n;i++){
		cout<<i+1<<"\t";
    a[i].xuat();
	}
}
void themDaibieu(int &n,Daibieu a[]){
	int k;
	cout<<"Nhap thu tu dai bieu muon them sau dai bieu thu: ";
	cin>>k;
	for(int i = n; i > k; i--)
    {
        a[i] = a[i - 1];
    }
     a[k].nhap();
    n++;
    cout<<"Da them thanh cong!!!"<<endl;
}
void xoaDaibieu(int &n,Daibieu a[]){
	int k;
	cout<<"Nhap thu tu dai bieu muon xoa: ";
	cin>>k;
	for(int i = k; i <n ; i++)
    {
        a[i] = a[i + 1];
    }
     a[k-1].xuat();
    n--;
    cout<<"Da xoa thanh cong!!!"<<endl;
}
void sapxepDaibieu( int n,Daibieu a[]){
	Daibieu c;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++)
		if( a[i].geth() == "trung binh" && a[j].geth() == "tot"){
			Daibieu c;
			c= a[i];
			a[i] = a[j];
			a[j] = c;
		}
	}
}
//void fixVoteIfwrong( int n, Daibieu a[]){
//	char k[20];
//	int j;
//	cout<<"\nNhap ten dai bieu ban muon sua phieu: ";
//	fflush(stdin);
//    gets(k);
//    cout<<"Nhap so phieu muon sua: ";
//    cin>>j;
//    for(int i=0;i<n;i++){
//    	if( strcmp(a[i].hoten, k) == 0){
//    	
//		
//    		a[i].phieu = j;
//		}
//	}
//	cout<<"Da sua xong!!!"<<endl;
//}
//void winner(int n, Daibieu a[]){
//	int max=0;
//	char *h;
//	for(int i=0;i<n;i++){
//		if( a[i].phieu > max ){
//		max = a[i].phieu;
//		h = a[i].hoten;
//		}
//	}
//	printf("Va nguoi thang cu la: %s voi phieu bau cu la: %d\n",h,max);
//	cout<<"CONGATULATIONS, YOU ARE THE CHAMPION !!!"<<endl;
//}
int main(){
	Daibieu a[100];
	int n,k;
do{
    cout<<"\n\t===== DANH SACH BAU CU =====\t"<<endl;
    printf("\n=============================================");
	printf("\n=      1. Tao danh sach dai bieu            =");
	printf("\n=      2. Xem danh sach dai bieu            =");
	printf("\n=      3. Them dai bieu                     =");
	printf("\n=      4. Xoa dai bieu                      =");
	printf("\n=      5. Sap xep dai bieu theo ly lich     =");
	printf("\n=      6. Sua lai phieu bau neu co sai xot  =");
	printf("\n=      7. Tim nguoi thang cu                =");
	printf("\n=      8. Exit                              =");
	printf("\n=============================================");
	printf(" \n Ban chon: ");
	scanf("%d",&k);
	switch(k) {
	case 1: nhapdanhsachDaibieu(n,a);
	break;
	case 2:	xuatdanhsachDaibieu(n,a);
	break;
	case 3:	themDaibieu(n,a);
	break;
	case 4:	xoaDaibieu(n,a);
	break;
	case 5:	sapxepDaibieu(n,a);
	xuatdanhsachDaibieu(n,a);
	break;
//	case 6:fixVoteIfwrong(n,a);
//	break;

//	break;
	}
}while(k!=8);
}
