#include<iostream>
using namespace std;

int main()
{
	int x, y, z, m;
	cin >> x >> y >> z;
	if (x<y)
		m=y;
	else m=x;

	if (m<z)
		m=z;
	cout << m << endl;

}