#include <stdio.h>

int main()
{	
	int i;
	char city[4][6] = {"seoul", "Busan", "Daegu", "Ulsan"};
	char city_kor[4][5];

	for(i=0; i<4; i++)
	{
		printf("%s\n", city[i]);	//city[i] -> 사실상 주소임
	}


	return 0;
}
