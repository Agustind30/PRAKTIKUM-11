#include <iostream>

using namespace std;

int main ()
{
	//data yang akan disorting
	int n = 6;
	int data[] = {7, 19, 4, 8, 20, 1};
	
	//proses

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
	}
	
	//tampilkan
	int i;
	for (i = 0; i < n; i++)
	{
		cout<< data[i]<< " ";
	}
	cout<<endl;
}
