#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// switch-case & do-while
int main() {
	const float RATE_USD = 1233.07;	
	const float RATE_JPY = 9.87;
	const float RATE_EUR = 1342.46;
	const float RATE_CNY = 193.52;
	const float RATE_GBP = 1605.09;
	
	float outputMoney = 0;

	int inputWon;
	printf("환전할 금액: ");
	scanf("%d",&inputWon);
	
	int val;
	int n;
	float changeRate;
	
	do{
		printf("************************************************\n");
		printf("환전할 외화 선택: 1.USD, 2.JPY 3.EUR 4.CNY 5.GBP\n");
		scanf("%d",&n);
		
	switch(n) {
		case 1:
			changeRate = RATE_USD;
			break;
		case 2:
			changeRate = RATE_JPY;
			break;
		case 3:
			changeRate = RATE_EUR;
			break;
		case 4:
			changeRate = RATE_CNY;
			break;
		case 5:
			changeRate = RATE_GBP;
			break;
	}		
		printf("기준환율: %7.2f\n",changeRate);
		outputMoney = inputWon / changeRate;
		val = outputMoney*100;
		val = ((int)((val%100)*changeRate/100)/10*10);
		
		int won1000, won500, won100, won50, won10;
	    won1000 = val/1000;
	    won500 = (val%1000)/500;
	    won100 = (val%500)/100;
	    won50 = (val%100)/50;
	    won10 = (val%50)/10;
	    
	    printf("%d원 >> %d",inputWon,(int)outputMoney);
	    
	    switch(n){
	    	case 1:
	    		printf("달러\n");
	    		break;
	    	case 2:
	    		printf("엔\n");
	    		break; 
	    	case 3:
	    		printf("유로\n");
	    		break;
			case 4:
	    		printf("위안\n");
	    		break; 
			case 5:
	    		printf("파운드\n");
	    		break; 		 
		}
		printf("잔돈: %d원\n",val);
		printf("1000원- %d 500원- %d 100원- %d 50원- %d 10원- %d",won1000,won500,won100,won50,won10);
		printf("\n");
	
	}while(n<6);
	return 0;
}



