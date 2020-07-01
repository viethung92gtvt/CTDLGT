#include <iostream>
using namespace std;
int foo();
float foto(){
	return 2;
}
int main()
{
	cout<<foto<<foo<<endl;
	int m, n;
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	// cap phát dong
	int **a = new int*[m]; //Cap phat vung nho cho m phan tu la m con tro kieu int*
	for (int i = 0; i < m; i++)
	{
		a[i] = new int[n]; // Moi con tro a[i] duoc cap phat dong mot vung nho n phat tu
	}
	cout << "Nhap mang:" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
	cout << "Xuat mang:" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
int foo(){
	return 0;
}
