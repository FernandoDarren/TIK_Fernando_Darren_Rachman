/*
buatlah sebuah program sederhana untuk menghitung nilai akhir; dengan ketentuan
nilai akhir = 30% nilai tugas + 30% nilai uts + 40% nilai uas
jika salah satu nilai lebih dari 100 program, program akan langsung berhenti
dengan memberikan statemen tidak boleh lebih dari 100
*/

#include <iostream>
using namespace std;

int main(){
    int tugas;
    int uts;
    int uas;
    float nilaitugas;
    float nilaiuts;
    float nilaiuas;
    float akhir;

    cout<<"Masukkan Nilai Tugas = ";cin>>tugas;
    if (tugas > 100){
        cout<<"Nilai tidak bisa melebihi 100"<<endl;
        cout<<"Ulangi kembali program";
        return 0;
    }
    
    cout<<"Masukkan Nilai UTS = ";cin>>uts;
    if (uts > 100){
        cout<<"Nilai tidak bisa melebihi 100";
        cout<<"Ulangi kembali program";
        return 0;
    }
    
    cout<<"Masukkan Nilai UAS = ";cin>>uas;
    if (uas > 100){
        cout<<"Nilai tidak bisa melebihi 100";
        cout<<"Ulangi kembali program";
        return 0;
    }
    
    nilaitugas = 0.3*tugas;
    nilaiuts = 0.3*uts;
    nilaiuas = 0.4*uas;
    akhir = nilaitugas + nilaiuts + nilaiuas;
    cout<<akhir;
}
