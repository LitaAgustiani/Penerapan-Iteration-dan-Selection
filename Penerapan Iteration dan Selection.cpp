#include <iostream>
using namespace std;

// menampilkan bilangan PRIMA dari angka awal dan angka akkhir yang dikehendaki

int main ()
{
	int x;
	int y;
	cout << "Masukkan angka awal " << endl;
	cin >> x;
	cout << endl;
	cout << "Masukkan angka akhir " << endl;
	cin >> y;
	cout << endl;
	
	for ( int i = x; i <= y; i++)
	{
		int counterPrima = 0;
		for ( int j = 1; j<= i; j++)
		{
			if (i % j == 0)
			{
				counterPrima++;
			}
		}
		if ( counterPrima == 2)
		{
			cout << i << " merupakan bilangan PRIMA" << endl;
		} else {
		cout << i << " BUKAN PRIMA" << endl;
		}
	}
	return 0;
}
