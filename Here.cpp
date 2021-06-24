#include "iostream"
#include "cmath"

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");//Русский язык
	int a, b, c;
	cout << "Введите углы треугольника, неизвестный угол введите нулём, последовательность: катет,катет,гипотенуза " << endl;
	cin >> a>> b>> c;
	if (a == 0)//если неизвестен первый катет а
	{
		a = pow(c, 2) - pow(b, 2);
		a = sqrt(a);
		cout << "Катет равен:" << a << endl;
	}
	else
	{
		if (b == 0)//если неизвестен второй катет b
		{
			b = pow(c,2) - pow(a,2);
			b = sqrt(b);
			cout << "Катет равен:" << b << endl;
		}
		else//если неизвестна гипотенуза с
		{
			c = pow(a, 2) + pow(b, 2);
			c = sqrt(c);
			cout << "гипотенуза равна:" << c << endl;
		}
	}
		
	return 0;
}