#include <iostream>
#define harga 4500
using namespace std;

int main (){
  float jumlah, total;
  cout<<"Masukan jumlah barang   = ";
  cin>>jumlah;
  total = harga*jumlah;
  cout<<"\nYang harus di bayar =\n"<<total;

  return 0;
}