#include <iostream>
using namespace std;

int main (){
    //menambahkan batas bawah
    //menambahkan batas batas
    //namun batas bawah tidak boleh lebih dari batas batas
    
    int batasbawah, batasatas;
    cout<<"Masukkan batas bawah = ";cin>>batasbawah;
    cout<<"Masukkan batas atas = ";cin>>batasatas;
    
    if (batasbawah > batasatas){
        cout<<"Batas bawah tidak boleh lebih dari batas atas"<<endl<<"Program berhenti";
        return 0;
    }

    while (batasbawah ++ <batasatas ){
        cout<<"data ke - "<<batasbawah<<endl;
    }
    
    return 0;
}
