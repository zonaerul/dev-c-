#include <iostream>
#include <string>
using namespace std;

int main(){
	cout<<"Masukan Jumlah Looping: "<<endl;
	int jumlah;
	cin >> jumlah;
	for(int i = 1; i <= jumlah; i++ ){
			
			//looping buat kosong space
			for(int j = 1; j <= jumlah - i; j++){
				cout<<" ";
			}
			
			//looping buat bintang
			for(int k = 1; k <= (2 * i - 1); k++){
				cout<<"*";
			} 
			
			
			cout<<endl;
		}
	return 0;
}
