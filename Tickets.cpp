#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// kopo05 �����
// Tickets 

//���������(pass)
const int adult1day = 62000, student1day = 54000, child1day = 47000, baby1day = 15000, free = 0;
const int adult4pm = 50000, student4pm = 43000, child4pm = 36000, baby4pm = 15000;
 
 //��ũ�����(parkpass) 
const int adultpark = 59000, studentpark = 52000, childpark = 46000, babypark = 15000;
const int adultpark4 = 47000, studentpark4 = 41000, childpark4 = 35000, babypark4 = 15000;

int pass, passtime, birth; //�̿������, �̿�ǽð�����, �������(8�ڸ�) 
int ticketcount, special, ageyear; //Ƽ�ϼ���, ������, ����(4�ڸ�) 
int age, ageindex, price; //����, ���ɺз�, ���̺� ���� 
int countprice, ticketprice, reset; //����*Ƽ�ϼ�, ���������밡��, ó������ 
// #�̿�� ���� 
void selectTicket() {
	do {
		printf("[�̿�� ����]\n\n1. �����̿��(�μӹڹ���+���̰���)\n2. ��ũ�̿��(���̰���)\n-> ");
		scanf("%d",&pass);
		if(!(pass == 1 || pass == 2)) {
			printf("\n---�ٽ� ������ �ּ���---\n");
		}
	} while(!(pass == 1 || pass == 2));
}
// #�̿�ǽð� ���� 
void selectTicketTime() {
	do {
		printf("\n[�̿�ð� ����]\n\n1. 1Day(���ϱ�)\n2. After4(4�� ���� ���尡��)\n-> "); 
		scanf("%d",&passtime);
		if(!(passtime == 1 || passtime == 2)) {
			printf("\n---�ٽ� ������ �ּ���---\n");
		}
	} while (!(passtime == 1 || passtime == 2));
}
// #������� �Է�	
void inputIDnumber() {
	do {
		printf("\n[��������� �Է��ϼ���](8�ڸ�)\n-> ");
		scanf("%8d",&birth); 
		if(!(birth>=19000101 && birth<=20221231)) {
			printf("\n---�ٽ� �Է��� �ּ���---\n");
		}
	} while (!(birth>=19000101 && birth<=20221231)); 
}
// #Ƽ�� ���� �Է� 
void inputTicketCount() {
	do {
		printf("\n[Ƽ�� ���� ��](�ִ�10��)\n-> ");
		scanf("%2d",&ticketcount);
		if(ticketcount > 10) {
			printf("\n---�ִ� ���� ������ 10���Դϴ�---\n");
		} 
	} while (ticketcount > 10);
} 
// #������ ���� 
void inputSpecial() {
	do{
		printf("\n[������ ����]\n\n1. ����\n2. �����\n3. ����������\n");
		printf("4. �ް��庴\n5. �ӻ��\n6. �ٵ��� �ູī��\n-> ");
		scanf("%d",&special);
		if(!(special == 1 || special == 2 || special ==3 || special == 4 || special == 5 || special == 6)) {
			printf("\n---�ٽ� ������ �ּ���---\n");
		}
	} while (!(special == 1 || special == 2 || special ==3 || special == 4 || special == 5 || special == 6));
}
// #������ ��� 
void ageCalculation() {
		ageyear = birth/10000; //�⵵�� ������
		int date = birth - (ageyear*10000);
		if(date > 415) { //������ 4��12�� ������ �� 
			age = (2022 - ageyear)-1; 
		} 
		else if(date <= 415) { //������ 4�� 12�Ͼ��� �� 
			age = 2022 - ageyear; 
	 	}
} 
// #���� ���� 
void ageIndex() {
	if (age >= 65) {
			ageindex = 1; //65�� �̻� -> ageindex1 
		}
		else if(age>18 && age<65) { //19-64��-> ageindex2 
			ageindex = 2; 
		}
		else if(age>=13) { //13-18��-> ageindex3
			ageindex = 3;
		}
		else if(age>=3) { //3-12��-> ageindex4 
			ageindex = 4;
		}
		else if(age>=1) { //1-2��-> ageindex5 
			ageindex = 5; 
		} 
		else { 
			ageindex = 6; //12���� �̸�-> ageindex6
		}
} 
// #�̿�ǰ� �̿�� �ð��� ���� Ƽ�ϰ��� 
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
// #Ƽ�ϰ���*Ƽ�� ��  
void addTicketCount() {
	if(ticketcount < 11) {
		countprice = price*ticketcount;
	}
}
// #������ ���� 
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
// #�Էº� 
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
// #��º� 
void ticketAll() {
	do{
		inputAll();
		ageCalculation();
		ageIndex();
		Pass_agePrice();
		addTicketCount();
		specialDiscount();	
	printf("\n===Ƽ�ϰ����� %d���Դϴ�===\n", ticketprice);
	
	printf("\n ��� �߱� �Ͻðڽ��ϱ�?\n\n1. Ƽ�Ϲ߱� 2. ���� -> ");
	scanf("%d",&reset);
	}while(reset == 1);
	
	printf("\n�̿����ּż� �����մϴ�\n");
	printf("*******************************************\n");
}
// #���� 
int main() {
	
	ticketAll();
	
return 0;
}
