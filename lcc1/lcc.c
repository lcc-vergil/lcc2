#include <stdio.h>
void outcome(double i)//ע�����
{
    int j;//ע�����
    double k;//����ע�����
    for (j = 10; j <=180; j = j + 10)
    {
        k = i / j;
        printf("ע�����:%.1fml\n", i);
        printf("ע�������%d\n", j);
        printf("����ע�������%.5fml\n", k);
    }
}
int main() {
    int a[3] = { 1,3,5 };//ע�����ͺ�
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