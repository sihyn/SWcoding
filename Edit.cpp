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
	printf("ȯ���� �ݾ�: ");
	scanf("%d",&inputWon);
	
	int val;
	int n;
	float changeRate;
	
	do{
		printf("************************************************\n");
		printf("ȯ���� ��ȭ ����: 1.USD, 2.JPY 3.EUR 4.CNY 5.GBP\n");
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
		printf("����ȯ��: %7.2f\n",changeRate);
		outputMoney = inputWon / changeRate;
		val = outputMoney*100;
		val = ((int)((val%100)*changeRate/100)/10*10);
		
		int won1000, won500, won100, won50, won10;
	    won1000 = val/1000;
	    won500 = (val%1000)/500;
	    won100 = (val%500)/100;
	    won50 = (val%100)/50;
	    won10 = (val%50)/10;
	    
	    printf("%d�� >> %d",inputWon,(int)outputMoney);
	    
	    switch(n){
	    	case 1:
	    		printf("�޷�\n");
	    		break;
	    	case 2:
	    		printf("��\n");
	    		break; 
	    	case 3:
	    		printf("����\n");
	    		break;
			case 4:
	    		printf("����\n");
	    		break; 
			case 5:
	    		printf("�Ŀ��\n");
	    		break; 		 
		}
		printf("�ܵ�: %d��\n",val);
		printf("1000��- %d 500��- %d 100��- %d 50��- %d 10��- %d",won1000,won500,won100,won50,won10);
		printf("\n");
	
	}while(n<6);
	return 0;
}



