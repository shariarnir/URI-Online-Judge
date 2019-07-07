#include<stdio.h>
int main(){
    int employee_num,work_hour;
    double bill_per_hour,SALARY;
    scanf("%d%d%lf",&employee_num,&work_hour,&bill_per_hour);
    SALARY = work_hour * bill_per_hour;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",employee_num,SALARY);

    return 0;
}


