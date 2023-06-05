#include <stdio.h>

int main()
{	
	printf("True: 1, False: 0\n\n");

	// &&: And operator
	printf("(True) && (True) = %d\n", 1 && 1);
	printf("(True) && (False) = %d\n", 1 && 0);
	printf("(False) && (True) = %d\n", 0 && 1);
	printf("(False) && (False) = %d\n", 0 && 0);
	printf("\n");

	// ||: or operator
	printf("(True) || (True) = %d\n", 1 || 1);
	printf("(True) || (False) = %d\n", 1 || 0);
	printf("(False) || (True) = %d\n", 0 || 1);
	printf("(False) || (False) = %d\n", 0 || 0);
	printf("\n");

	// !: Not operator
	printf("!(True) = %d\n", !1);
	printf("!(False) = %d\n", !0);

	
}
