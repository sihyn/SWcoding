#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// if-else & do-while
int main() {
	const float RATE_USD = 1233.07;	
	const float RATE_JPY = 9.87;
	const float RATE_EUR = 1342.46;
	const float RATE_CNY = 193.52;
	const float RATE_GBP = 1605.09;
	
	float outputDollar = 0;
	float outputJPY = 0;
	float outputEUR = 0;
	float outputCNY = 0;
	float outputGBP = 0;

	int inputWon;
	printf("ȯ���� �ݾ�: ");
	scanf("%d",&inputWon);
	
	int val;
	int n;
	
	do{
		printf("************************************************\n");
		printf("ȯ���� ��ȭ ����: 1.USD, 2.JPY 3.EUR 4.CNY 5.GBP\n");
		scanf("%d",&n);
		
	if(n==1) {
		printf("����ȯ��: %7.2f\n",RATE_USD);
		outputDollar = inputWon / RATE_USD;
		val = (outputDollar - ((int)outputDollar))*RATE_USD;
		printf("ȯ�� ���: %d �޷�, �ܵ�: %d��\n",(int)outputDollar, val/10*10);	
	
	} 
	else if(n==2) {
		printf("����ȯ��: %7.2f\n",RATE_JPY);
		outputJPY = inputWon / RATE_JPY;
		val = (outputJPY - ((int)outputJPY))*RATE_JPY;
		printf("ȯ�� ���: %d ��, �ܵ�: %d��\n",(int)outputJPY, val/10*10);	
	
	}
	else if(n==3) {
		printf("����ȯ��: %7.2f\n",RATE_EUR);
		outputEUR = inputWon / RATE_EUR;
		val = (outputEUR - ((int)outputEUR))*RATE_EUR;
		printf("ȯ�� ���: %d ����, �ܵ�: %d��\n",(int)outputEUR, val/10*10);	
	
	}
	else if(n==4) {
		printf("����ȯ��: %7.2f\n",RATE_CNY);
		outputCNY = inputWon / RATE_CNY;
		val = (outputCNY - ((int)outputCNY))*RATE_CNY;
		printf("ȯ�� ���: %d ����, �ܵ�: %d��\n",(int)outputCNY, val/10*10);
	
	}
	else if(n==5) {
		printf("����ȯ��: %7.2f\n",RATE_GBP);
		outputGBP = inputWon / RATE_GBP;
		val = (outputGBP - ((int)outputGBP))*RATE_GBP;
		printf("ȯ�� ���: %d �Ŀ��, �ܵ�: %d��\n",(int)outputGBP, val/10*10);
	
	} else {
		printf("Error");
		break;
	}
		int won1000, won500, won100, won50, won10;
	    won1000 = val/1000;
	    won500 = (val%1000)/500;
	    won100 = (val%500)/100;
	    won50 = (val%100)/50;
	    won10 = (val%50)/10;
		printf("1000��- %d 500��- %d 100��- %d 50��- %d 10��- %d",won1000,won500,won100,won50,won10);
		printf("\n");
	
	}while(n<6);
	return 0;
}



