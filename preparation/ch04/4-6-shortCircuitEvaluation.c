#include <stdio.h>

int main()
{
	int x=5, y=10, z;
	

	// ||: or -> 둘 중 하나가 참이라도 참값을 반환함
	// C언어: 0 이외의 값은 모두 참으로 인정함
	// (x+=2)가 참이므로, 뒤에 어떤식이 오든 항상 참임. 따라서 (y+=1)은 실행되지 않음
	z = (x+=2) || (y+=1);
	
	printf("condition: int x=5, y=10, z = (x+=2) || (y+=1)\n");
	printf("Check the value of x, y and z!!\n\n");
	
	printf("x: %d, y: %d\n", x, y);
	printf("z: %d\n", z);

	return 0;
}
