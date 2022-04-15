#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// kopo05 김시현
// Tickets 

//종합입장권(pass)
const int adult1day = 62000, student1day = 54000, child1day = 47000, baby1day = 15000, free = 0;
const int adult4pm = 50000, student4pm = 43000, child4pm = 36000, baby4pm = 15000;
 
 //파크입장권(parkpass) 
const int adultpark = 59000, studentpark = 52000, childpark = 46000, babypark = 15000;
const int adultpark4 = 47000, studentpark4 = 41000, childpark4 = 35000, babypark4 = 15000;

int pass, passtime, birth; //이용권종류, 이용권시간종류, 생년월일(8자리) 
int ticketcount, special, ageyear; //티켓수량, 우대사항, 생년(4자리) 
int age, ageindex, price; //나이, 연령분류, 나이별 가격 
int countprice, ticketprice, reset; //가격*티켓수, 우대사항적용가격, 처음으로 
// #이용권 선택 
void selectTicket() {
	do {
		printf("[이용권 선택]\n\n1. 종합이용권(민속박물관+놀이공원)\n2. 파크이용권(놀이공원)\n-> ");
		scanf("%d",&pass);
		if(!(pass == 1 || pass == 2)) {
			printf("\n---다시 선택해 주세요---\n");
		}
	} while(!(pass == 1 || pass == 2));
}
// #이용권시간 선택 
void selectTicketTime() {
	do {
		printf("\n[이용시간 선택]\n\n1. 1Day(종일권)\n2. After4(4시 이후 입장가능)\n-> "); 
		scanf("%d",&passtime);
		if(!(passtime == 1 || passtime == 2)) {
			printf("\n---다시 선택해 주세요---\n");
		}
	} while (!(passtime == 1 || passtime == 2));
}
// #생년월일 입력	
void inputIDnumber() {
	do {
		printf("\n[생년월일을 입력하세요](8자리)\n-> ");
		scanf("%8d",&birth); 
		if(!(birth>=19000101 && birth<=20221231)) {
			printf("\n---다시 입력해 주세요---\n");
		}
	} while (!(birth>=19000101 && birth<=20221231)); 
}
// #티켓 수량 입력 
void inputTicketCount() {
	do {
		printf("\n[티켓 구매 수](최대10장)\n-> ");
		scanf("%2d",&ticketcount);
		if(ticketcount > 10) {
			printf("\n---최대 구매 수량은 10장입니다---\n");
		} 
	} while (ticketcount > 10);
} 
// #우대사항 선택 
void inputSpecial() {
	do{
		printf("\n[우대사항 선택]\n\n1. 없음\n2. 장애인\n3. 국가유공자\n");
		printf("4. 휴가장병\n5. 임산부\n6. 다둥이 행복카드\n-> ");
		scanf("%d",&special);
		if(!(special == 1 || special == 2 || special ==3 || special == 4 || special == 5 || special == 6)) {
			printf("\n---다시 선택해 주세요---\n");
		}
	} while (!(special == 1 || special == 2 || special ==3 || special == 4 || special == 5 || special == 6));
}
// #만나이 계산 
void ageCalculation() {
		ageyear = birth/10000; //년도만 나오게
		int date = birth - (ageyear*10000);
		if(date > 415) { //생일이 4월12일 이후일 때 
			age = (2022 - ageyear)-1; 
		} 
		else if(date <= 415) { //생일이 4월 12일안일 때 
			age = 2022 - ageyear; 
	 	}
} 
// #나이 구별 
void ageIndex() {
	if (age >= 65) {
			ageindex = 1; //65세 이상 -> ageindex1 
		}
		else if(age>18 && age<65) { //19-64세-> ageindex2 
			ageindex = 2; 
		}
		else if(age>=13) { //13-18세-> ageindex3
			ageindex = 3;
		}
		else if(age>=3) { //3-12세-> ageindex4 
			ageindex = 4;
		}
		else if(age>=1) { //1-2세-> ageindex5 
			ageindex = 5; 
		} 
		else { 
			ageindex = 6; //12개월 미만-> ageindex6
		}
} 
// #이용권과 이용권 시간에 따른 티켓가격 
void Pass_agePrice() {
	switch(pass) {
		case 1 : 
			switch(passtime) {
				case 1:
					if(ageindex == 1){
						price = child1day;
					} 
					else if(ageindex == 2){
						price = adult1day;
						}
					else if(ageindex == 3){
						price = student1day;
						}
					else if(ageindex == 4){
						price = child1day;
						}
					else if(ageindex == 5){
						price = baby1day;
						}
					else if(ageindex == 6){
						price = free;
						} 
					break;
	 			case 2:
					if(ageindex == 1){
						price = child4pm;
					} 
					else if(ageindex == 2){
						price = adult4pm;
						}
					else if(ageindex == 3){
						price = student4pm;
						}
					else if(ageindex == 4){
						price = child4pm;
						}
					else if(ageindex == 5){
						price = baby4pm;
						}
					else if(ageindex == 6){
						price = free;
						}
					break;  	
			}
		break;	
			
		case 2 :
			switch(passtime) {
				case 1:
					if(ageindex == 1){
						price = childpark;
					} 
					else if(ageindex == 2){
						price = adultpark;
						}
					else if(ageindex == 3){
						price = studentpark;
						}
					else if(ageindex == 4){
						price = childpark;
						}
					else if(ageindex == 5){
						price = babypark;
						}
					else if(ageindex == 6){
						price = free;
						} 
					break;
					
				case 2:
					if(ageindex == 1){
						price = childpark4;
					} 
					else if(ageindex == 2){
						price = adultpark4;
						}
					else if(ageindex == 3){
						price = studentpark4;
						}
					else if(ageindex == 4){
						price = childpark4;
						}
					else if(ageindex == 5){
						price = babypark4;
						}
					else if(ageindex == 6){
						price = free;
						} 
					break;
		}
	break;
	}
}
// #티켓가격*티켓 수  
void addTicketCount() {
	if(ticketcount < 11) {
		countprice = price*ticketcount;
	}
}
// #우대사항 할인 
void specialDiscount() {
	switch(special) {
		case 1: 
			ticketprice = countprice;
			break;
		case 2:
			ticketprice = countprice*0.5;
			break;
		case 3:
			ticketprice = countprice*0.5;
			break;
		case 4:
			ticketprice = countprice*0.51;
			if(pass != 1) {
				ticketprice = countprice;
			} 
			break;
		case 5:
			ticketprice = countprice*0.5;
			if(pass != 1) {
				ticketprice = countprice;
			} 
			break;
		case 6:
			ticketprice = countprice*0.7;
			if(pass != 1) {
				ticketprice = countprice;
			} 
			break;
	}
} 
// #입력부 
void inputAll() {
	int pass = 0, passtime = 0, birth = 0, ticketcount = 0, special = 0, age = 0, ageindex = 0, price = 0, 
	countprice = 0, ticketprice = 0;
	printf("*******************************************\n");
	selectTicket();
	selectTicketTime();
	inputIDnumber();
	inputTicketCount();
	inputSpecial();
}
// #출력부 
void ticketAll() {
	do{
		inputAll();
		ageCalculation();
		ageIndex();
		Pass_agePrice();
		addTicketCount();
		specialDiscount();	
	printf("\n===티켓가격은 %d원입니다===\n", ticketprice);
	
	printf("\n 계속 발권 하시겠습니까?\n\n1. 티켓발권 2. 종료 -> ");
	scanf("%d",&reset);
	}while(reset == 1);
	
	printf("\n이용해주셔서 감사합니다\n");
	printf("*******************************************\n");
}
// #메인 
int main() {
	
	ticketAll();
	
return 0;
}
