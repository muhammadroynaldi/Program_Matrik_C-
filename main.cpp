#include <iostream>
#include <conio.h>

using namespace std;
void Matrik_Penjumlahan();
void Matrik_Pengurangan();
void Matrik_Perkalian();
void Matrik_Tranpose();
void Matrik_Determinan();

int main(){
    int pil;

    do{
        system("cls");
        cout << endl;
        cout << "=============================" << endl;
        cout << "=======A11.2021.13471========" << endl;
        cout << "===PILIHAN OPERASI MATRIKS===" << endl;
        cout << "====== 1. PENJUMLAHAN =======" << endl;
        cout << "====== 2. PENGURANGAN =======" << endl;
        cout << "====== 3. PERKALIAN   =======" << endl;
        cout << "====== 4. TRANPOSE    =======" << endl;
        cout << "====== 5. DETERMINAN  =======" << endl;
        cout << "====== 6. Exit        =======" << endl;
        cout << "=============================" << endl;
        cout << "MASUKAN PILIHAN : " ;
        cin >> pil;
        switch (pil)
        {
        case 1:system("cls");{
            Matrik_Penjumlahan();
            getch();
            break;
        }
        case 2:system("cls");{
            Matrik_Pengurangan();
            getch();
            break;
        }
        case 3:system("cls");{
            Matrik_Perkalian();
            getch();
            break;
        }
        case 4:system("cls");{
            Matrik_Tranpose();
            getch();
            break;
        }
        case 5:system("cls");{
            Matrik_Determinan();
            getch();
            break;
        }
        default:
            break;
        }
    }
    while (pil != 6);
    return 0;
}

void Matrik_Penjumlahan(){
    int baris1, kolom1, baris2, kolom2, matriks1[10][10], matriks2[10][10], hasil[10][10];

    cout << "Masukkan jumlah baris matriks pertama: ";
    cin >> baris1;
    cout << "Masukkan jumlah kolom matriks pertama: ";
    cin >> kolom1;
    cout << "Masukkan jumlah baris matriks kedua: ";
    cin >> baris2;
    cout << "Masukkan jumlah kolom matriks kedua: ";
    cin >> kolom2;

    if(baris1 != baris2){
        cout << endl;
        cout << "Operasi Matrik tidak dapat dilakukan" << endl;
        cout << "Karena Ordo Matrik 1 dan 2 tidak sama" << endl;
    }
    else {
        cout << endl;
        cout << "Masukkan elemen matrix pertama: \n";
        for(int i = 0; i < baris1; i++){
            for(int j = 0; j < kolom1; j++){
            cout << "Matrik 1 [" << i << "] [" << j << "] : "; 
            cin >> matriks1[i][j];
            }
        }

        cout << endl;
        cout << "Output Matrik pertama \n";
        for(int i = 0; i < baris1; i++){
            for(int j = 0; j < kolom1; j++){
            cout << matriks1[i][j] << "\t";
            }
            cout << endl;
        }

        cout << endl;
        cout << "Masukkan elemen matrix kedua: \n";
        for(int i = 0; i < baris2; i++){
            for(int j = 0; j < kolom2; j++){
            cout << "Matrik 2 [" << i << "] [" << j << "] : "; 
            cin >> matriks2[i][j];
            }
        }

        cout << endl;
        cout << "Output Matrik kedua \n";
        for(int i = 0; i < baris2; i++){
            for(int j = 0; j < kolom2; j++){
            cout << matriks2[i][j] << "\t";
            }
            cout << endl;
        }

        cout << endl;
        cout << "hasil penjumlahan matrix: \n";
        for(int i = 0; i < baris1; i++){
            for(int j = 0; j < kolom2; j++){
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] << "\t";
            }
            cout << endl;
        }
    }
}

void Matrik_Pengurangan(){
    int baris1, kolom1, baris2, kolom2, matriks1[10][10], matriks2[10][10], hasil[10][10];

    cout << "Masukkan jumlah baris matriks pertama: ";
    cin >> baris1;
    cout << "Masukkan jumlah kolom matriks pertama: ";
    cin >> kolom1;
    cout << "Masukkan jumlah baris matriks kedua: ";
    cin >> baris2;
    cout << "Masukkan jumlah kolom matriks kedua: ";
    cin >> kolom2;

    if(baris1 != baris2){
        cout << endl;
        cout << "Operasi Matrik tidak dapat dilakukan" << endl;
        cout << "Karena Ordo Matrik 1 dan 2 tidak sama" << endl;
    }
    else {
        cout << endl;
        cout << "Masukkan elemen matrix pertama: \n";
        for(int i = 0; i < baris1; i++){
            for(int j = 0; j < kolom1; j++){
            cout << "Matrik 1 [" << i << "] [" << j << "] : "; 
            cin >> matriks1[i][j];
            }
        }

        cout << endl;
        cout << "Output Matrik pertama \n";
        for(int i = 0; i < baris1; i++){
            for(int j = 0; j < kolom1; j++){
            cout << matriks1[i][j] << "\t";
            }
            cout << endl;
        }

        cout << endl;
        cout << "Masukkan elemen matrix kedua: \n";
        for(int i = 0; i < baris2; i++){
            for(int j = 0; j < kolom2; j++){
            cout << "Matrik 2 [" << i << "] [" << j << "] : "; 
            cin >> matriks2[i][j];
            }
        }

        cout << endl;
        cout << "Output Matrik kedua \n";
        for(int i = 0; i < baris2; i++){
            for(int j = 0; j < kolom2; j++){
            cout << matriks2[i][j] << "\t";
            }
            cout << endl;
        }

        cout << endl;
        cout << "hasil pengurangan matrix: \n";
        for(int i = 0; i < baris1; i++){
            for(int j = 0; j < kolom2; j++){
            hasil[i][j] = matriks1[i][j] - matriks2[i][j];
            cout << hasil[i][j] << "\t";
            }
            cout << endl;
        }
    }
}

void Matrik_Perkalian(){
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
    int baris1, kolom1, baris2, kolom2, jumlah = 0;
  
    cout << "Masukkan jumlah baris matriks pertama: ";
    cin >> baris1;
    cout << "Masukkan jumlah kolom matriks pertama: ";
    cin >> kolom1;
    cout << "Masukkan jumlah baris matriks kedua: ";
    cin >> baris2;
    cout << "Masukkan jumlah kolom matriks kedua: ";
    cin >> kolom2;

    if(kolom1 != baris2){
        cout << endl;
        cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
        cout << "Karena Kolom Matrik 1 dan Baris Matrik 2 tidak sama" << endl;
    } else {
        cout << endl;
        cout << "Masukkan elemen matriks pertama: \n";
        for(int i = 0; i < baris1; i++){
            for(int j = 0; j < kolom1; j++){
                cout << "Matrik 1 [" << i << "] [" << j << "] : ";
                cin >> matriks1[i][j];
            }
        }

        cout << endl;
        cout << "Output Matrik pertama \n";
        for(int i = 0; i < baris1; i++){
            for(int j = 0; j < kolom1; j++){
                cout << matriks1[i][j] << "\t";
            }
            cout << endl;
        }

        cout << endl;
        cout << "Masukkan elemen matriks kedua: \n";
        for(int i = 0; i < baris2; i++){
            for(int j = 0; j < kolom2; j++){
                cout << "Matrik 2 [" << i << "] [" << j << "] : ";
                cin >> matriks2[i][j];
            }
        }

        cout << endl;
        cout << "Output Matrik kedua \n";
        for(int i = 0; i < baris2; i++){
            for(int j = 0; j < kolom2; j++){
                cout << matriks2[i][j] << "\t";
            }
            cout << endl;
        }
        
        for(int i = 0; i < baris1; i++){
            for(int j = 0; j < kolom2; j++){
                for(int k = 0; k < baris2; k++){
                    jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
                }
                hasil[i][j] = jumlah;
                jumlah = 0;
            }
        }
    
        cout << endl;
        cout << "Hasil perkalian matriks: \n";
        for(int i = 0; i < baris1; i++){
            for(int j = 0; j < kolom2; j++){
                cout << hasil[i][j] << "\t";
            }
            cout << endl;
        }
    }
}

void Matrik_Tranpose(){
    int baris, kolom, matriks[10][10], transpose[10][10];
    
    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom;
    cout << endl;
    cout << "Masukkan elemen matriks\n";
  
    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            cout << "Matrik [" << i << "] [" << j << "] : ";
            cin  >> matriks[i][j];
        }
    }

    cout << endl;
    cout << "Output Matrik \n";
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
        cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }


    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            transpose[j][i] = matriks[i][j];
        }
    }
  
    cout << endl;
    cout << "Hasil Transpose Matriks: \n";
    for (int i = 0; i < kolom; i++){
        for (int j = 0; j < baris; j++){
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }
}

void Matrik_Determinan(){
    int pil;

    do {
        system("cls");
        cout << "======DETERMINAN MATRIKS=====" << endl;
        cout << "====== 1. ORDO 2X2    =======" << endl;
        cout << "====== 2. ORDO 3X3    =======" << endl;
        cout << "====== 3. Exit        =======" << endl;
        cout << "=============================" << endl;
        cout << "MASUKAN PILIHAN : " ;
        cin >> pil;
         switch (pil)
        {
        case 1:system("cls");{
            int i, j, det, matriksD[2][2];
            
            cout << "Masukan Elemen Matriks \n";
            for (int i = 0; i < 2; i++){
                for (int j = 0; j < 2; j++){
                    cout << "Matrik [" << i << "] [" << j << "] : ";
                    cin  >> matriksD[i][j];
                }
            }

            cout << endl;
            cout << "Output Matrik \n";
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 2; j++){
                cout << matriksD[i][j] << "\t";
                }
                cout << endl;
            }

            cout << endl;
            cout << "| (" << matriksD[0][0] << " x " << matriksD[1][1] << ") - (" ;
            cout << matriksD[0][1] << " x " << matriksD[1][0] << ") |\n";
            det = (matriksD[0][0] * matriksD[1][1]) - (matriksD[0][1] * matriksD[1][0]);
            cout << endl;
            cout << "Nilai Determinan Matriks 2x2 : " << det << endl;
            getch();
            break;
        }
        case 2:system("cls");{
            int i, j, det, matriksD[3][3];
            
            cout << "Masukan Elemen Matriks \n";
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    cout << "Matrik [" << i << "] [" << j << "] : ";
                    cin  >> matriksD[i][j];
                }
            }

            cout << endl;
            cout << "Output Matrik \n";
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                cout << matriksD[i][j] << "\t";
                }
                cout << endl;
            }

            cout << endl;
            cout << "| (" << matriksD[0][0] << " x " << matriksD[1][1] << " x " << matriksD[2][2] << ") + (" ;
            cout << matriksD[0][1] << " x " << matriksD[1][2] << " x " << matriksD[2][0] << ") + (" ;
            cout << matriksD[0][2] << " x " << matriksD[1][0] << " x " << matriksD[2][1] ;
            cout << ") - (" << matriksD[0][2] << " x " << matriksD[1][1] << " x " << matriksD[2][0] << ") - (" ;
            cout << matriksD[0][0] << " x " << matriksD[1][2] << " x " << matriksD[2][1] << ") - (" ;
            cout << matriksD[0][1] << " x " << matriksD[1][0] << " x " << matriksD[2][2] << ") |" << endl;
            det = matriksD[0][0] * matriksD[1][1] * matriksD[2][2]
                  + matriksD[0][1] * matriksD[1][2] * matriksD[2][0]
                  + matriksD[0][2] * matriksD[1][0] * matriksD[2][1]
                  - matriksD[0][2] * matriksD[1][1] * matriksD[2][0]
                  - matriksD[0][0] * matriksD[1][2] * matriksD[2][1]
                  - matriksD[0][1] * matriksD[1][0] * matriksD[2][2];
            cout << endl;
            cout << "Nilai Determinan Matriks 3x3 : " << det << endl;
            getch();
            break;
        }

        default:
            break;
        }
    }while (pil != 3);
}