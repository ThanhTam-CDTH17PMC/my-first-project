/*
input: n so nguyen
output: so lon nhat cua tung so nguyen trong n so nguyen do
*/
#include <iostream>
#include <conio.h>
using namespace std;

/*
Ham dung de tim chu so lon nhat cua so nguyen n
Tham so truyen vao la n
*/
int TimSoLonNhat(int n)
{
	int m, max=0;
	while (n != 0)
	{
		m = n % 10;
		n = n / 10;
		if (m > max)
			max = m;
	}
	return max;
}

void main()
{
	int n, a;
	cout << "Nhap vao n: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Nhap vao so nguyen thu " << i << " : "; cin >> a;
		cout << "Chu so lon nhat cua " << a << " la: " << TimSoLonNhat(a) << endl;
	}
	_getch();
}