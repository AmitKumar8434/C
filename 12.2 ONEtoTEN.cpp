#include<iostream>
#include<conio.h>
using namespace std;
int n=1;
void odd();
void even();
void odd(){
	if(n>10)
	return;
	else{
		printf("%3d",n+1);
		n++;
		even();
	}
	}
void even(){
	if(n>10)
	return;
	else{
		printf("%3d",n-1);
		n++;
		odd();
		
	}
}
int main(void)
{
	odd();
	return 0;
	
}
