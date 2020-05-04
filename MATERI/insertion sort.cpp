#include <iostream>

using namespace std;

int main ()
{
	//data yang akan disorting
	int n = 6;
	int data[] = {7, 19, 4, 8, 20, 1};
	
	//proses
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
	}
	
	//tampilkan
	int i;
	for (i = 0; i < n; i++)
	{
		cout<< data[i]<< " ";
	}
	cout<<endl;
}
