#include <stdio.h>

struct{
	int x;
	int nim;
	char nama[30];
	char matkul[50];
	int nilai;
}mahasiswa;

int main(){
	
	printf("Muhammad Zuhairi \n");
	printf("1101184356 \n");
	printf("TT-42-02 \n\n");
	
	printf("--INPUT--\n");
	printf("Input Nama\t: "); fflush(stdin); gets(mahasiswa.nama);
	printf("Input NIM\t: "); scanf("%d",&mahasiswa.nim);
	printf("Input Matkul\t: "); fflush(stdin); gets(mahasiswa.matkul);
	printf("Input Nilai\t: "); scanf("%d",&mahasiswa.nilai);
	printf("________________________________\n\n");
		
	if ((mahasiswa.nilai >= 86) && (mahasiswa.nilai<=100)){
		mahasiswa.x = 1;
	}else if((mahasiswa.nilai >=71) && (mahasiswa.nilai<=85)){
		mahasiswa.x = 2;
	}else if((mahasiswa.nilai >=61) && (mahasiswa.nilai<=70)){
		mahasiswa.x = 3;
	}else if((mahasiswa.nilai >=51) && (mahasiswa.nilai<=60)){
		mahasiswa.x = 4;
	}else if((mahasiswa.nilai >=0) && (mahasiswa.nilai<=50)){
		mahasiswa.x = 5;
	}
	
	switch(mahasiswa.x){
		case 1:
			printf("Nama\t\t: %s\n",mahasiswa.nama);
			printf("NIM\t\t: %d\n",mahasiswa.nim);
			printf("Matakuliah\t: %s\n",mahasiswa.matkul);
			printf("Indeks Nilai\t: A");
		break;
		case 2:
			printf("Nama\t\t: %s\n",mahasiswa.nama);
			printf("NIM\t\t: %d\n",mahasiswa.nim);
			printf("Matakuliah\t: %s\n",mahasiswa.matkul);
			printf("Indeks Nilai\t: B");
		break;
		case 3:
			printf("Nama\t\t: %s\n",mahasiswa.nama);
			printf("NIM\t\t: %d\n",mahasiswa.nim);
			printf("Matakuliah\t: %s\n",mahasiswa.matkul);
			printf("Indeks Nilai\t: C");
		break;
		case 4:
			printf("Nama\t\t: %s\n",mahasiswa.nama);
			printf("NIM\t\t: %d\n",mahasiswa.nim);
			printf("Matakuliah\t: %s\n",mahasiswa.matkul);
			printf("Indeks Nilai\t: D");
		break;
		case 5:
			printf("Nama\t\t: %s\n",mahasiswa.nama);
			printf("NIM\t\t: %d\n",mahasiswa.nim);
			printf("Matakuliah\t: %s\n",mahasiswa.matkul);
			printf("Indeks Nilai\t: E");
	}
}
// OK
// hsdwihdiwhdi
// jaojdowjodjw
// aosidijdw
// owjdowjdojwd
// wodjowjdowjo