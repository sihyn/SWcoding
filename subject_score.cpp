#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// kopo05 김시현
// Score 
int main() {
	int score[21][10] = {0};
	int sum[21] = {0};
	int subjectSum[10] ={0};
	float average[21] = {0};
	float subjectAverage[10];
	int subjectCount, studentCount;
	 
	printf("과목 수 입력: ");
	scanf("%d", &subjectCount);
	printf("학생 수 입력: ");
	scanf("%d", &studentCount);
	// #입력 
	for(int index = 0; index < studentCount; index++) {
		printf("kopo%02d 학생의 점수 %d개를 차례로 입력하세요:",index+1,subjectCount);
		for(int index2 = 0; index2 < subjectCount; index2++) {
			scanf("%d",&score[index][index2]);
		}
	} 
	// #계산 
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
	// #출력
	printf("\n");
	for(int index = 0; index < studentCount; index++) {
		printf("kopo%02d 학생의 과목 총점 %d, 평균 %.2f\n",index+1,sum[index],average[index]);
	}
	printf("\n");
	for(int index = 0; index < subjectCount; index++) {
		printf("%d 과목평균 %.2f\n", index+1, subjectAverage[index]);
	} 
	return 0;
}
