#include <iostream>
using namespace std;

int main(){
    int dari;
    int ke;
    float nilai;
    float hasil;
    string satuan[] = {" detik"," menit"," jam"," hari"};
    
	cout<<"Pilih dari satuan mana:"<<endl;
	cout<<"1. Detik"<<endl;
	cout<<"2. Menit"<<endl;
	cout<<"3. Jam"<<endl;
	cout<<"4. Hari"<<endl;
	cout<<"Pilih nomor satuan : ";cin>>dari;
	
  if(dari > 4){
	    cout<<"Tidak ada pilihannya";
	    return 0;
	}
	if(dari < 1){
	    cout<<"Tidak ada pilihannya";
	    return 0;
	}
	
	cout<<endl<<"Pilih ke satuan mana:"<<endl;
	cout<<"1. Detik"<<endl;
	cout<<"2. Menit"<<endl;
	cout<<"3. Jam"<<endl;
	cout<<"4. Hari"<<endl;
	cout<<"Pilih nomor satuan : ";cin>>ke;
	
	cout<<"Masukkan nilai yang ingin dikonversi: ";cin>>nilai;
	
	if(ke > 4){
	    cout<<"Tidak ada pilihannya";
	    return 0;
	}
	if(ke < 1){
	    cout<<"Tidak ada pilihannya";
	    return 0;
	}
	
	//hari
	if(dari == 4 && ke == 1){
	    hasil = nilai*86400;
	    cout<<"Hasil konversi = "<<hasil<<satuan[0];
	    return 0;
	}
	if(dari == 4 && ke == 2){
	    hasil = nilai*1440;
	    cout<<"Hasil konversi = "<<hasil<<satuan[1];
	    return 0;
	}
	if(dari == 4 && ke == 3){
	    hasil = nilai*24;
	    cout<<"Hasil konversi = "<<hasil<<satuan[2];
	    return 0;
	}
	if(dari == 4 && ke == 4){
	    hasil = nilai;
	    cout<<"Hasil konversi = "<<hasil<<satuan[3];
	    return 0;
	}
	
  //jam
	if(dari == 3 && ke == 1){
	    hasil = nilai*3600;
	    cout<<"Hasil konversi = "<<hasil<<satuan[0];
	    return 0;
	}
	if(dari == 3 && ke == 2){
	    hasil = nilai*60;
	    cout<<"Hasil konversi = "<<hasil<<satuan[1];
	    return 0;
	}
	if(dari == 3 && ke == 3){
	    hasil = nilai;
	    cout<<"Hasil konversi = "<<hasil<<satuan[2];
	    return 0;
	}
	if(dari == 3 && ke == 4){
	    hasil = nilai/24;
	    cout<<"Hasil konversi = "<<hasil<<satuan[3];
	    return 0;
	}	
    
    //Menit
   if(dari == 2 && ke == 1){
	    hasil = nilai*60;
	    cout<<"Hasil konversi = "<<hasil<<satuan[0];
	    return 0;
	}
	if(dari == 2 && ke == 2){
	    hasil = nilai;
	    cout<<"Hasil konversi = "<<hasil<<satuan[1];
	    return 0;
	}
	if(dari == 2 && ke == 3){
	    hasil = nilai/60;
	    cout<<"Hasil konversi = "<<hasil<<satuan[2];
	    return 0;
	}
	if(dari == 2 && ke == 4){
	    hasil = nilai/1440;
	    cout<<"Hasil konversi = "<<hasil<<satuan[3];
	    return 0;
	}
	
	//Detik
	if(dari == 1 && ke == 1){
	    hasil = nilai;
	    cout<<"Hasil konversi = "<<hasil<<satuan[0];
	    return 0;
	}
	if(dari == 1 && ke == 2){
	    hasil = nilai/60;
	    cout<<"Hasil konversi = "<<hasil<<satuan[1];
	    return 0;
	}
	if(dari == 1 && ke == 3){
	    hasil = nilai/3600;
	    cout<<"Hasil konversi = "<<hasil<<satuan[2];
	    return 0;
	}
	if(dari == 1 && ke == 4){
	    hasil = nilai/86400;
	    cout<<"Hasil konversi = "<<hasil<<satuan[3];
	    return 0;
	}
}
