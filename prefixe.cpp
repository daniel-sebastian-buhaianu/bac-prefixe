#include <fstream>
#include <iostream>
using namespace std;
ofstream fout("bac.out");
int main()
{
	int n;
	cout << "n = "; cin >> n;
	while (n)
	{
		fout << n << '\n';
		n /= 10;
	}
	fout.close();
	return 0;
}
