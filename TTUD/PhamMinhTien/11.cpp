#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct SV
{
    string msv;
    string ten;
    double diem;
};

bool compare(SV a, SV b){
    if(a.diem == b.diem)
        return a.msv < b.msv;
    return a.diem < b.diem;
}

int main(){
    int n;
    cout << "Nhap so sinh vien n = "; cin >> n;
    SV sv[n]; 
    for(int i =0; i < n; i ++){
        cout << "Nhap Ma SV: "; cin >> sv[i].msv;
        cout << "Nhap Ten SV: "; cin.ignore(); getline(cin,sv[i].ten);
        cout << "Nhap Diem: "; cin >> sv[i].diem;
    }
    sort(sv,sv+n,compare);
    cout << "Danh sach Sinh vien:" << endl;
    for(int i = 0; i < n; i++){
        cout << sv[i].msv << "\t" << sv[i].ten << "\t" << sv[i].diem << endl;
    }
    return 0;
}