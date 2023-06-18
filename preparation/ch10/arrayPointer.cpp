#include <iostream>
#include <stdio.h>

using namespace std;



int main()
{

	int arr[][3]={
			
			{1, 2, 3},
			{4, 5, 6},
			{7, 8, 9}

	};
	
	int (*p)[3] = arr;

	cout << "p: " << p << endl;
	cout << "arr: " << arr << endl;
	cout << "*p: " << *p << endl;
	cout<< "**p: " << **p << endl;
	cout << "*arr: "<< *arr << endl;
	cout << "**arr: "<< **arr << endl;
	printf("\n");
	


	cout<< "p+1: " << p+1 <<endl;
	cout << "arr+1: " << arr+1 <<endl;
	cout << "arr[1]: " << arr[1] << endl;
	cout << "*(p+1): " << *(p+1) << endl;
	cout << "*(arr+1): " << *(arr+1)<< endl;
	cout << "*(p+1)+1: " << *(p+1)+1 << endl;
	
	

	return 0;
}
