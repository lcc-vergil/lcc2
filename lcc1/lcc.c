#include <stdio.h>
void outcome(double i)//注射剂量
{
    int j;//注射次数
    double k;//单次注射剂量
    for (j = 10; j <=180; j = j + 10)
    {
        k = i / j;
        printf("注射剂量:%.1fml\n", i);
        printf("注射次数：%d\n", j);
        printf("单次注射剂量：%.5fml\n", k);
    }
}
int main() {
    int a[3] = { 1,3,5 };//注射器型号
    int n;
    for (n = 0; n < 3; n++)
    {
        if (a[n] == 1)
        {
            outcome(0.8);
        }
        if (a[n] == 3)
        {
            outcome(2.0);
            outcome(3.0);
        }
        if (a[n] == 5)
        {
            outcome(4.0);
            outcome(5.0);
        }
    }
    return 0;
}