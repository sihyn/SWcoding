#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// kopo05 �����
// Score 
int main() {
	int score[21][10] = {0};
	int sum[21] = {0};
	int subjectSum[10] ={0};
	float average[21] = {0};
	float subjectAverage[10];
	int subjectCount, studentCount;
	 
	printf("���� �� �Է�: ");
	scanf("%d", &subjectCount);
	printf("�л� �� �Է�: ");
	scanf("%d", &studentCount);
	// #�Է� 
	for(int index = 0; index < studentCount; index++) {
		printf("kopo%02d �л��� ���� %d���� ���ʷ� �Է��ϼ���:",index+1,subjectCount);
		for(int index2 = 0; index2 < subjectCount; index2++) {
			scanf("%d",&score[index][index2]);
		}
	} 
	// #��� 
	for(int index = 0; index < studentCount; index++) {
		for(int index2 = 0; index2 < subjectCount; index2++) {
			sum[index] += score[index][index2];
			subjectSum[index2] += score[index][index2];
		}
		average[index] = sum[index] / (float)subjectCount;
	}
	for(int index = 0; index < subjectCount; index++) {
		subjectAverage[index] = subjectSum[index] / (float)studentCount;
	}
	// #���
	printf("\n");
	for(int index = 0; index < studentCount; index++) {
		printf("kopo%02d �л��� ���� ���� %d, ��� %.2f\n",index+1,sum[index],average[index]);
	}
	printf("\n");
	for(int index = 0; index < subjectCount; index++) {
		printf("%d ������� %.2f\n", index+1, subjectAverage[index]);
	} 
	return 0;
}
