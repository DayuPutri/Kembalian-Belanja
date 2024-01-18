#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

void status_kembalian(int a, int n, int uang[]) {
    // Menggunakan strategi Greedy untuk memberi kembalian
    map<int, int> count;  // Menggunakan map untuk menghitung jumlah setiap pecahan uang

<<<<<<< HEAD
    for (int i = 0; i < n; i++) {
        count[uang[i]]++;
    }

    int kembalian = 0;
    for (auto it = count.rbegin(); it != count.rend(); ++it) {
        int nominal = it->first;
        int jumlah = it->second;
=======
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
>>>>>>> 507ae4a378cd42af7ccb01e2ee84c82aca3dfd73

        while (kembalian + nominal <= a && jumlah > 0) {
            kembalian += nominal;
            jumlah--;
        }
    }

    if (kembalian == a) {
        cout << "Kembalian sesuai." << endl;
    } else {
<<<<<<< HEAD
        cout << "Kembalian tidak sesuai." << endl;
=======
        cout << "Kemampuan tidak sesuai." << endl;
>>>>>>> 507ae4a378cd42af7ccb01e2ee84c82aca3dfd73
    }
}

int main() {
    int a = 5000;
    int n = 5;
    int uang[] = {5000, 5000, 5000, 10000, 20000};

<<<<<<< HEAD
    // Memanggil fungsi status_kembalian
    status_kembalian(a, n, uang);
=======
int main(){
    int a = 5000;
    int n = 5;
    int uang[] = {5000, 5000, 5000, 10000, 20000};

    // Memanggil fungsi status_kembalian
    status_kembalian(a, n, uang);

>>>>>>> 507ae4a378cd42af7ccb01e2ee84c82aca3dfd73

return 0;
}
