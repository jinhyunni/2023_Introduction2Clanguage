#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char s[100], *p;
	int i;
	
	printf("���ڿ��� �Է��ϼ���: ");
	gets(s);	//���ڿ��� �Է¹޴� �Լ�! 
	
	p=s;	//�����Ͱ� ���ڿ��� �����ϱ� ����!
	
	while(*p != '\0')
	{
		*p=toupper(*p);	//������ p�� ����Ű�� �ִ� ���ڸ� �빮�ڷ�! �迭�� ���뵵 �ٲ��! 
		p++;	
	}
	
	p=s;
	
	printf("\n�빮�ڷ� ��ȯ�� ���; %s\n", s);
	 
	for(i=0; i<strlen(s); i++)
	{
		s[i]=tolower(s[i]);
	}
	
	printf("\n�ҹ��ڷ� ��ȯ�� ���: %s\n", s);
	
	
}
