#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

//----Tidak boleh menambah kode di atas batas ini-----

void status_kembalian(int a, int n, int uang[]){
    //Menggunakan strategi Greedy untuk memberi kembalian
    map<int, int> count; //Menggunakan map untuk menghitung jumlah setiap pecahan uang

    for (int i = 0; i < n; i++) {
            count[uang]]++;
    }

    int kembalian = 0;
    for (auto it = count.rbegin(); it != count.rend(); ++it) {
        int nominal = it->first;
        int jumlah = it->secound;

        while (kembalian + nominal <= a && jumlah > 0) {
            kembalian += nominal;
            jumlah--;
        }
    }

    if (kembalian == a) {
        cout << "Kembalian sesuai." << endl;
    } else {
        cout << "Kemampuan tidak sesuai." << endl;
    }
}


int main(){
    int a = 5000;
    int n = 5;
    int uang[] = {5000, 5000, 5000, 10000, 20000};

    // Memanggil fungsi status_kembalian
    status_kembalian(a, n, uang);


return 0;
}
