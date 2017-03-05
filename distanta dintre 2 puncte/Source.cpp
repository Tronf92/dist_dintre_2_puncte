#include <iostream>
#include <math.h>

using namespace std;

struct punct{
	int x,y;
};

double distanta(punct p1,punct p2);

void citire(){
	punct p1,p2;
	cout << "Introduceti coordonatele unui punct:" << endl;
	cout << "X:"<< endl;
	cin >> p1.x;
	cout << "Y:" << endl;
	cin >> p1.y;

	cout << "Introduceti coordonatele celui de ala doilea punct:"<< endl;
	cout << "X:" << endl;
	cin >> p2.x;
	cout << "Y:"<<endl;
	cin >> p2.y;
	distanta(p1,p2);

}

double distanta(punct p1,punct p2){
	int v;
	v=(p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y);
	cout << "Distanta dintre puncte este:" << sqrt(v) << endl;
	return 0;
	}

int main(){

	citire();	
	
	system("pause");
	return 0;
}