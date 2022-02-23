#include <iostream>
#include <cmath>

int main(){
	
	int i=1;
	
	int count=0;
	do{
		std::cout << "sqrt("<< i <<")="<< std::sqrt(i) << std :: endl;
		i+=2;
		count++;
		
	}
	while (count<25);
	
	return 0;
}
