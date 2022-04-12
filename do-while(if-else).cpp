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
	printf("환전할 금액: ");
	scanf("%d",&inputWon);
	
	int val;
	int n;
	
	do{
		printf("************************************************\n");
		printf("환전할 외화 선택: 1.USD, 2.JPY 3.EUR 4.CNY 5.GBP\n");
		scanf("%d",&n);
		
	if(n==1) {
		printf("기준환율: %7.2f\n",RATE_USD);
		outputDollar = inputWon / RATE_USD;
		val = (outputDollar - ((int)outputDollar))*RATE_USD;
		printf("환전 결과: %d 달러, 잔돈: %d원\n",(int)outputDollar, val/10*10);	
	
	} 
	else if(n==2) {
		printf("기준환율: %7.2f\n",RATE_JPY);
		outputJPY = inputWon / RATE_JPY;
		val = (outputJPY - ((int)outputJPY))*RATE_JPY;
		printf("환전 결과: %d 엔, 잔돈: %d원\n",(int)outputJPY, val/10*10);	
	
	}
	else if(n==3) {
		printf("기준환율: %7.2f\n",RATE_EUR);
		outputEUR = inputWon / RATE_EUR;
		val = (outputEUR - ((int)outputEUR))*RATE_EUR;
		printf("환전 결과: %d 유로, 잔돈: %d원\n",(int)outputEUR, val/10*10);	
	
	}
	else if(n==4) {
		printf("기준환율: %7.2f\n",RATE_CNY);
		outputCNY = inputWon / RATE_CNY;
		val = (outputCNY - ((int)outputCNY))*RATE_CNY;
		printf("환전 결과: %d 위안, 잔돈: %d원\n",(int)outputCNY, val/10*10);
	
	}
	else if(n==5) {
		printf("기준환율: %7.2f\n",RATE_GBP);
		outputGBP = inputWon / RATE_GBP;
		val = (outputGBP - ((int)outputGBP))*RATE_GBP;
		printf("환전 결과: %d 파운드, 잔돈: %d원\n",(int)outputGBP, val/10*10);
	
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
		printf("1000원- %d 500원- %d 100원- %d 50원- %d 10원- %d",won1000,won500,won100,won50,won10);
		printf("\n");
	
	}while(n<6);
	return 0;
}



