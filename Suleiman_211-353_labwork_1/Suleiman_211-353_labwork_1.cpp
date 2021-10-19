#include <iostream>
#include<bitset>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	//1 задание
	cout<< "Сулейман Даниэль Набилевич 211-353"<<endl;
	//2 задание
	cout << "min int=" << numeric_limits<int>::min();
	cout <<", max int="<< numeric_limits<int>::max();
	cout << ", size of int=" <<sizeof (int)<< endl;
	cout << "min unsigned int="<<numeric_limits<unsigned int>::min();
	cout <<", max unsigned int=" <<numeric_limits<unsigned int>::max();
	cout << ", size of unsigned int=" << sizeof(unsigned int) << endl;
	cout <<"min short="<<numeric_limits<short>::min();
	cout <<", max short="<<numeric_limits<short>::max();
	cout << ", size of short=" << sizeof(short) << endl;
	cout <<"min unsigned short="<<numeric_limits<unsigned short>::min();
	cout <<", max unsigned short="<<numeric_limits<unsigned short>::max();
	cout << ", size of unsigned short=" << sizeof(unsigned short) << endl;
	cout <<"min long="<<numeric_limits<long>::min();
	cout <<", max long="<<numeric_limits<long>::max();
	cout << ", size of long=" << sizeof(long) << endl;
	cout <<"min long long="<<numeric_limits<long long>::min();
	cout <<", max long long="<<numeric_limits<long long>::max();
	cout << ", size of long long=" << sizeof(long long) << endl;
	cout <<"min double="<<numeric_limits<double>::min();
	cout <<", max double="<<numeric_limits<double>::max();
	cout << ", size of double=" << sizeof(double) << endl;
	cout <<"min char="<<numeric_limits<char>::min();
	cout <<", max char="<<numeric_limits<char>::max();
	cout << ", size of char=" << sizeof(char) << endl;
	cout <<"min bool="<<numeric_limits<bool>::min();
	cout <<", max bool="<<numeric_limits<bool>::max();
	cout << ", size of bool=" << sizeof(bool) << endl;
	//3 задание
	int w;
	cout << "Введите число для перевода в бинарный и 16 вид:" << endl;
	cin >> w;
	cout <<"В бинарном виде "<< bitset<sizeof(w) * 8>(w) << endl;
	cout <<"В 16-рисном виде "<< std::hex << w << endl;
	//4 задание
	double a, x, b;
	cout << "a*x=b" <<endl;
	cout << "Введите a" << endl;
	cin >> a;
	cout << "Введите b" << endl;
	cin >> b;
	cout << "x=b/a" << endl;
	x = b / a;
	cout << "x=" << x << endl;
	//5 задание
	double z, c,sredlin;
	cout << "Введите координаты z"<<endl;
	cin >> z;
	cout << "Введите координаты c"<<endl;
	cin >> c;
	sredlin=(z + c) / 2;
	cout << "Середина отрезка находится в точке с координатой " << sredlin << endl;
}