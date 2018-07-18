#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
class kampus
{
public:
	string nama;
	string nim;
	string semester;
	string jurusan;
	string tahun;
};

// identifikasi vector
vector<kampus> node;

// pengenalanan fungsi
int cari(string jurusan);
void print();
void edit();
void cari();
void hapus();
void intro();
void exit();

void cari()
{
	fflush(stdin);
	cout << "\n\nCari Data Mahasiswa Baru(jurusan): ";
	string c;
	getline(cin, c);
	
	int f = cari(c);
	if(f != node.size())
	{
	for(auto n:node){
		cout<<"Nama      : "<<n.nama<<endl;
    	cout<<"Nim       : "<<n.nim<<endl;
    	cout<<"Semester  : "<<n.semester<<endl;
    	cout<<"Jurusan   : "<<n.jurusan<<endl;
    	cout<<"Tahun     : "<<n.tahun<<endl;
    }
	}
	else
	{
		cout << "tidak ketemu\n";
	}
	system("pause");
	return;
	
}

// kumpulan fungsi 
int cari(string jurusan)
{
	for(int idx = 0; idx < node.size(); ++idx)
		if(node[idx].jurusan == jurusan)
			return idx;

		return node.size();
		system("pause");	

}
void hapus()
{
	fflush(stdin);
	cout <<"\nhapus berdasarkan Nim :";
	string hapus;
	getline(cin,hapus);
	for (int i=0; i<node.size(); ++i)
	{
	if (node[i].nim == hapus)
	{
		node.erase(node.begin()+i);
		cout <<'\n';
		print();
	}
	}
	system("pause");
}



void print()
{
	for(auto n:node){
		cout<<"Nama      : "<<n.nama<<endl;
    	cout<<"Nim       : "<<n.nim<<endl;
    	cout<<"Semester  : "<<n.semester<<endl;
    	cout<<"Jurusan   : "<<n.jurusan<<endl;
    	cout<<"Tahun     : "<<n.tahun<<endl;
    }
	system("pause");
}

void intro()
{
	system("cls");
	cout <<"============WELCOME TO============\n";
	cout <<"Penyimpanan Data Mahasiswa Baru\n";
	cout <<"==================================\n";
	for(int i = 0; i < 34; ++i)
	{
		cout << char(219);
		Sleep(80);
	}
	cout << "\n\t";
		
}

int main()
{
	intro ();
	char pilih;
	do
      {
      fflush(stdin);
      system("cls");
      cout<<"Penerimaan Mahasiswa Baru"<<endl;
      cout<<"---------------------------"<<endl;
      cout<<"Menu : "<<endl;
      cout<<"1. Input data"<<endl;
      cout<<"2. Hapus data"<<endl;
      cout<<"3. Cetak Data"<<endl;
      cout<<"4. Cari Data"<<endl;
      cout<<"5. Exit"<<endl;
      cout<<"Masukkan pilihan Anda : ";
      cin>>pilih;

      switch(pilih)
      {
      case '1' :
            int n;
            cout<<"Masukkan jumlah : ";
            cin>>n;
            cout<<endl;
            system("cls");
            for (int i = 1; i <= n; ++i)
            {
           system("cls");
		cout <<"Input Data Mahasiswa\n";
		fflush(stdin);
		cout << "Nama : ";
		string nama;
		getline(cin, nama);
		
		cout << "Nim : ";
		string nim;
		getline(cin, nim);
		
		cout << "Semester : ";
		string semester;
		getline(cin, semester);
		
		cout << "Jurusan : ";
		string jurusan;
		getline(cin, jurusan);
		
		cout << "Tahun : ";
		string tahun;
		getline(cin, tahun);
		
		node.push_back({nama, nim, semester, jurusan, tahun});

            }
            break;
      case '2' :
            hapus();
            break;
      case '3' :
            print();
            break;
      case '4' :
            cari();
            break;
      case '5' :
            exit(0);
            break;
      }
    }while(pilih != 5);

      return EXIT_SUCCESS;
}










