#include <iostream>
#include<stdio.h>
#include <conio.h>
using namespace std;

	//data yang akan disorting
	int n = 6;
	int data[] = {7, 19, 4, 8, 20, 1};
	
void insert()
{

	for (int i = 1; i < n; i++)
	{
		int j = i;
			
			//selama data yang dipilih < data sebelum maka tukar terus
	
		while(j>0 && data[j] < data[j-1])
		{
			int temp = data [j];
			data [j] = data [j-1];
			data [j-1]= temp;
			
			j--;
		}
	}printf ("Proses Insertion selesai!\n");
}

void selection()
{
		for (int i=0; i<n-1; i++)
	{	
		int MAX = data[i];
		int MAXIndex = i;
		
		for (int j=i+1; j<n; j++)
		{
			//cari max
			if (data [j] < MAX)
			{
				MAX = data [j];
				MAXIndex = j;
			}
			
			//tukar dengan index awal
			if (j == n-1)
			{
				int temp = data[i];
				data[i] = data [MAXIndex];
				data[MAXIndex] = temp;
			}
		}
	}printf ("Proses Selection selesai!\n");
}

void bubble()
{
	for (int i = 0; i < n-1 ; i++)
	{
		for (int j= 0; j<n-1; j++)
		{
			//cek data sesudah<data sebelum
			if (data[j+1]> data[j])
			{
				//true = tukar
				int temp = data [j+1];
				data [j+1] = data [j];
				data [j]= temp;
			}
			//false = tetap
		}
	}printf ("Proses Bubble Sort selesai!\n");	
}

void tampil(){
	int i;
	for (i = 0; i < n; i++)
	{
		cout<< data[i]<< " ";
	}
	cout<<endl;
}
int main()
{
	//clrscr();
	int pil;
	do
	{
		//clrscr () ;
		cout<< "1. Insertion Sort\n";
		cout<< "2. Bubble Sort\n";
		cout<< "3. Selection Sort\n";
		cout<< "4. Tampilkan Data\n";
		cout<< "5. Exit\n";
		cout<<"Pilihan = ";
		scanf ("%d", &pil);
		switch (pil)
		{
			case 1 : insert(); break;
			case 2 : bubble();break;
			case 3 : selection(); break;
			case 4 : tampil();
				getch();
		}
	}while (pil!=4);
}

