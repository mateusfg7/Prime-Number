#include <iostream>

int primeCheck(int number)
{		
	int prime, cont;		
	if(number > 2){		
		cont = number;
		while(cont > 0)
		{
			if(cont != number && cont != 1)
			{		
				if (number%cont != 0)
				{
					prime = 1;
				}
				else
				{
					prime = 0;
					break;
				}	
			}
			cont--;
		}
		return prime;	
	}
	return 0;
}

int main(){
	int i = 0;
	while (true)
	{
		if (primeCheck(i) == 1)
		{
			std::cout << "\n";
			std::cout << i;
			std::cout << "\n";
		}
		i++;
	}
	return 0;
}


