/*
    23.03.29 leejuchan

    @brief : 신체검사 정보

    @details : 이름, 키, 몸무게, 시력, 혈액형, 혈압(SBP, DBP)을 입력받아 출력
                키 & 몸무게의 평균값, 시력 분포를 출력
    @note : 값을 직접 입력받는 함수 추가하기
*/

#include <stdio.h>

#define MAX_PERSON 10
#define MAX_VISION 20 // 최대시력 = 3.0 (0.1단위 * 30)


// 신체검사 구조체
typedef struct
{
    char *name;
    int height;
    int weight;
    double vision;
    char *bloodType;
    int SBP; // Systolic Blood Pressure 수축기 혈압 (최대 혈압)
    int DBP; // Diastolic Blooc Pressure 이완기 혈압 (최소 혈압)
} physical;

int peopleCount = 0; // 인원 수


// prototype
void add_physical(physical phy[], char *name, int height, int weight, double vision, char *bloodType, int SBP, int DBP);
// void input_physical(physical phy[]);
double calc_heightAverage(physical phy[]);
double calc_weightAverage(physical phy[]);
void calc_visionDistribution(physical phy[], int visionDist[]);
int calc_MAP(int SBP, int DBP);


int main(void)
{

    physical cs[MAX_PERSON];
    int visionDist[MAX_VISION]; // 시력분포표

    add_physical(cs, "김가나", 150, 50, 0.1, "A", 90, 70);
    add_physical(cs, "이다라", 160, 60, 0.2, "B", 100, 80);


    // 신체검사 결과 목록
    puts("----------- Physical Examination -----------");
    puts(" name   height  weight  vision  bloodtype  bloodpressure");

    for(int i=1; i<=peopleCount; i++)
    {
        printf("%s   %d      %d      %1.1lf       %s            %d\n", 
                cs[i].name, cs[i].height, cs[i].weight, cs[i].vision, cs[i].bloodType, calc_MAP(cs[i].SBP, cs[i].DBP));
    }


    // 평균 키, 몸무게 출력
    puts("----------------- Average ----------------");
    printf("Height : %3.1lf\n", calc_heightAverage(cs));
    printf("Weight : %3.1lf\n", calc_weightAverage(cs));


    // 시력 분포 출력
    puts("----------- Vision Distribtion -----------");

    calc_visionDistribution(cs, visionDist);

    for(int i=0; i<MAX_VISION/4; i++)
    {
        printf("%1.1lf : %d\t\t", i/10.0, visionDist[i]);
        printf("%1.1lf : %d\t\t", (i+5)/10.0, visionDist[i+5]);
        printf("%1.1lf : %d\t\t", (i+10)/10.0, visionDist[i+10]);
        printf("%1.1lf : %d\n", (i+15)/10.0, visionDist[i+15]);
    }
}


// 신체검사 데이터 추가 함수
void add_physical(physical phy[], char *name, int height, int weight, double vision, char *bloodType, int SBP, int DBP)
{
    peopleCount++; // 1번 인덱스부터 저장 

    phy[peopleCount].name = name;
    phy[peopleCount].height = height;
    phy[peopleCount].weight = weight;
    phy[peopleCount].vision = vision;
    phy[peopleCount].bloodType = bloodType;
    phy[peopleCount].SBP = SBP;
    phy[peopleCount].DBP = DBP;
}


// 신체검사 데이터 직접입력 함수
// void input_physical(physical phy[])
// {
//     peopleCount++;

//     printf("name : "); scanf("%s", phy[peopleCount].name);
//     // printf("height : "); scanf("%d", &phy[peopleCount].height);
//     // printf("weight : "); scanf("%d", &phy[peopleCount].weight);
//     // printf("vision : "); scanf("%lf", &phy[peopleCount].vision);
//     // printf("bloodType : "); scanf("%s", &phy[peopleCount].bloodType);
//     // printf("SBP : "); scanf("%d", &phy[peopleCount].SBP);
//     // printf("DBP : "); scanf("%d", &phy[peopleCount].DBP);

//     printf("%d", phy[peopleCount].name);
// }


// 평균 키 계산
double calc_heightAverage(physical phy[])
{
    int heightTotal = 0;
    for(int i=1; i<=peopleCount; i++)
    {
        heightTotal += phy[i].height;
    }

    double heightAverage = (double) heightTotal / peopleCount;

    return heightAverage;
}


// 평균 몸무게 계산
double calc_weightAverage(physical phy[])
{
    int weightTotal = 0;
    for(int i=1; i<=peopleCount; i++)
    {
        weightTotal += phy[i].weight;
    }

    double weightAverage = (double) weightTotal / peopleCount;

    return weightAverage;
}


// 시력 분포 구함
void calc_visionDistribution(physical phy[], int visionDist[])
{
    // 배열 분포표 초기화
    for(int i=0; i<MAX_VISION; i++)
    {
        visionDist[i] = 0;
    }

    // 배열 분포표 입력
    for(int i=1; i<=peopleCount; i++)
    {
        if(phy[i].vision >= 0.0 && phy[i].vision <= MAX_VISION / 10.0) // 시력범위 0.0 ~ 3.0
        {
            visionDist[(int) (phy[i].vision * 10)]++;
        }
    }
}


// 혈압 계산
int calc_MAP(int SBP, int DBP) // MAP = Mean Arterial Pressure 평균 동맥압
{
    int MAP;

    MAP = (SBP + 2*DBP) / 3;

    return MAP;
}