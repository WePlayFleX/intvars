#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int var1;						
	int var2;						
	var1 = 20;						
	var2 = var1 + 10;				
	cout << "var1 + 10 равно ";			
	cout << var2 << endl;			

	system("pause");
	return 0;
}