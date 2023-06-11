#include <stdio.h>

#define ll long long

ll int factorial(int);

int main()
{
    int n;
    scanf("%d", &n);
    
    printf("%lld", factorial(n));
    
    return 0;
}

ll int factorial(int n)
{
   ll int res;

    
    if(n>1)
        res = n*factorial(n-1);	//재귀문이 실행되는 곳!
    else
        res=1;					//1: 재귀문의 시작!(factorial(1)), 2: n=0일때
        
    return res;
}
