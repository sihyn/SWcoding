#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// kopo05
// Calendar
int main() {
	int lastday[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; 
	int firstday; 
	int year,month; 
	int totalday = 0; 
	int index = 0;
	int index1;
		
do {
	printf("\n�⵵ �Է�(����� 0):");
	scanf("%d",&year); 
	  
	if(year == 0)  
		printf("\n�����մϴ�.");
		
	if(year != 0) {  
		printf("�� �Է�:");
		scanf("%d",&month);  
		printf("\n*********************%d  %d��*********************",year,month);
		printf("\n��\t��\tȭ\t��\t��\t��\t��\t\n");
		printf("***************************************************\n");
	
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)  
			lastday[1] = 29; 
		
		totalday = ((year-1) * 365)+((year-1) / 4)-((year-1) / 100)+((year-1) / 400);  
		
		for(index = 1; index < month; index++) {
			totalday += lastday[index-1];
			}
			
		firstday = (totalday+1)%7; 
		
		for(index1 = 0; index1 < firstday; index1++) 
			printf("\t");

		for(index1 = 1; index1 <= lastday[month-1]; index1++) {  
			printf("%-d\t",index1); 
		
		firstday = firstday+1; 
			if(firstday%7 == 0) {  
				printf("\n\n");
				firstday = 0; 
			}
		}
		printf("\n");
	}
} while(year != 0); 
return 0;
}



