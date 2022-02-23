#include <iostream>

using namespace std;
	int main (){
	
	int Num1, Num2, Num3;
	double average;
	char again;
	
	do {
		cout << "Enter three numbers to get the average:";
		cin >> Num1 >> Num2 >> Num3;
			average = (Num1+Num2+Num3)/3;
			cout << "The average is: " << average << "\n\n";
			
			cout << "Do you want to get another average? (Y/N)";
			cin >> again;
			
	}
	while (again=='Y' || again == 'y');
	system("pause");
	
	return 0;
}
