#include "iostream"
#include "cmath"

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");//������� ����
	int a, b, c;
	cout << "������� ���� ������������, ����������� ���� ������� ����, ������������������: �����,�����,���������� " << endl;
	cin >> a>> b>> c;
	if (a == 0)//���� ���������� ������ ����� �
	{
		a = pow(c, 2) - pow(b, 2);
		a = sqrt(a);
		cout << "����� �����:" << a << endl;
	}
	else
	{
		if (b == 0)//���� ���������� ������ ����� b
		{
			b = pow(c,2) - pow(a,2);
			b = sqrt(b);
			cout << "����� �����:" << b << endl;
		}
		else//���� ���������� ���������� �
		{
			c = pow(a, 2) + pow(b, 2);
			c = sqrt(c);
			cout << "���������� �����:" << c << endl;
		}
	}
		
	return 0;
}