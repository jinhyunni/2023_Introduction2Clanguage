#include <stdio.h>

typedef struct sangpum{
	
		char name[10];
		int price;
		int salenum;
		int profit;
		
} sp;

void input_fruit(sp *);
void calprofit_fruit(sp *);
void printout_fruit(sp *);

int main()
{
	int i, tot=0; 
	sp grp[4]={
	
		{"Apple", 150, 5},
		{"Orange", 200, 10},
		{"Banana", 100, 7}
	
	};
	
	//Declaring struct pointer
	sp *p=grp;
	
	//Input 4'th fruit's information by using struct pointer
	input_fruit(p+3); 

	//Calculate profit earned by selling the folling fruit
	calprofit_fruit(p);

	//Print out fruit's information by using struct pointer
	printout_fruit(p);

	return 0;
}

void input_fruit(sp *p)
{
	printf("Fruit's name?");
	scanf("%s", p->name); 
	printf("Fruit's price?");
	scanf("%d", &p->price);
	printf("How many fruits sold? ");
	scanf("%d", &p->salenum); 
}

void calprofit_fruit(sp *p)
{
	int i;	
	
	for(i=0; i<4; i++)
	{
		p->profit = (p->salenum)*(p->price);	
		p++;
	}
}

void printout_fruit(sp *p)
{
	int i;
	int tot=0;	
	
	for(i=0; i<4; i++)
	{
		printf("name: %s\n", p->name);
		printf("product number sold: %d\n", p->salenum);
		printf("price: %d\n", p->price);
		printf("profit: %d\n\n", p->profit);
		tot += p->profit;
		p++;
		
	}
	
	printf("Total profit: %d", tot);
	
}
