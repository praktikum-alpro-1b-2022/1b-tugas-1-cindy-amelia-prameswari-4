#include <iostream>

using namespace std;

int main()
{
    cout << "TUGAS 1" << endl;
    cout << "No 1" << endl;
    string NPM = "2210631170015";
    string Nama_lengkap = "Cindy Amelia Prameswari";
    string Umur = "18 Tahun";
    string Kelas = "1B Informatika";
    string Hobi = "Menonton Film";
    string Cita_cita = "Ingin jadi orang sukses dan berguna";

    cout << "NPM          :" << NPM << endl;
    cout << "Nama Lengkap :" << Nama_lengkap << endl;
    cout << "Umur         :" << Umur << endl;
    cout << "Kelas        :" << Kelas << endl;
    cout << "Hobi         :" << Hobi << endl;
    cout << "Cita-cita    :" << Cita_cita << endl;
    cout << " " << endl;

    cout << "No 2" << endl;
    cout << "* Dengan Variabel Sementara" << endl;
    int a, b, temp;
    cout << "Sebelum ditukar :\nA = ";
    cin >> a;
    cout << "B = ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "\nSetelah ditukar :\nA= " <<a<< "\nB= " <<b<< endl;
    cout<<endl;

    cout << "* Tanpa Variabel Sementara" << endl;
    int c,d;
    cout << "Sebelum ditukar :\nC = ";
    cin >> c;
    cout << "D = ";
    cin >> d;
    cout << endl;

    c=c+d;
    d=c-d;
    c=c-d;

    cout << "Setelah ditukar :\nC = "<<c<< "\nD = " << endl;
}
