/* File        : mainNRSL.cpp */
/* Deskripsi   : Driver / main program untuk ADT Non Restricted Single Linked/Linear List */
/* Dibuat oleh : Ade Chandra Nugraha*/
/* Tanggal     : 25-10-2001 */
/* Diupdate oleh : Santi Sundari, 6-4-2011, hanya tdd operasi2 dasar */
/* Diupdate oleh : WW & AM, 8-3-2025, penyesuaian area body & main untuk latihan Diploma 3 */

#include "spnrsll.h"
#include <stdio.h>
#include "SpNRSLL.H"
#include "BodyNRSL.c"

int main()
{
	/* Kamus Lokal */
		List MyList;
		infotype isi;
		address P, Prec;

	/* Program */
	CreateList (&MyList);	//List sudah terbentuk, digunakan untuk memanipulasi elemen
	
	//aksi mahasiswa untuk implementasi studi kasus
	PrintInfo(MyList);
	
	printf("menggunakan procedure insert first menambah 7 di awal\n");
	P=Alokasi(7);
	InsertFirst (&MyList,P);
	PrintInfo(MyList);
	
	printf("menggunakan procedure insert last menambah 11 di akhir\n");
	P=Alokasi(11);
	InsertLast(&MyList,P);
    PrintInfo(MyList);

	printf("menggunakan procedure insert after menambah 9 setelah 7\n");
	P = Alokasi(9);
    InsertAfter(&MyList, P, First(MyList));
    PrintInfo(MyList);

	printf("menggunakan procedure insert first menambah 5 di awal\n");
	P=Alokasi(5);
	InsertFirst(&MyList,P);
    PrintInfo(MyList);

	printf("menggunakan procedure insert last menambah 13 di akhir\n");
	P=Alokasi(13);
	InsertLast(&MyList,P);
    PrintInfo(MyList);

	printf("menggunakan procedure DelLast menghapus 13 di akhir\n");
	DelVLast(&MyList, &isi);
    PrintInfo(MyList);

	printf("menggunakan procedure DelP mneghapus 7\n");
	DelP(&MyList, 7);
    PrintInfo(MyList);

	printf("menggunakan procedure DelVFirs mneghapus 5\n");
	DelVFirst(&MyList, &isi);
    PrintInfo(MyList);

	printf("menggunakan procedure DelOdd mneghapus semua bilangan ganjil\n");
	DelOdd(&MyList);
	PrintInfo(MyList);

	/* Finishing */
	
	//Pastikan List di Dealokasi setelah manipulasi elemen selesai
	
	return 0;
}

