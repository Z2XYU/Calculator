//计算器
#include <stdio.h>
float calc(float x, char cal, float y);


int main()
{
    float num1, num2, result, num3, num4;
    char cal, choose;

    //%*c清空缓冲区 抛弃换行符
    scanf("%f%c%f%*c", &num1, &cal, &num2);
    //或使用setbuf(stdin,NULL);清空缓冲区
    result = calc(num1, cal, num2);
    printf("=%.2f\n", result);
    do
    {
        printf("是否还要继续进行计算\n");
        printf("请输入'Y'或'N'\n");

        //%*c清空缓冲区 抛弃换行符

        scanf("%c%*c", &choose);
        // 或使用setbuf(stdin,NULL);清空缓冲区
        if (choose == 'N' || choose == 'n')
            break;
        else if (choose == 'Y' || choose == 'y')
        {
            num3 = result;

            
            //%*c清空缓冲区 抛弃换行符
            scanf("%c%f%*c", &cal, &num4);
            //或使用setbuf(stdin,NULL);清空缓冲区
            result = calc(num3, cal, num4);
            printf("=%.2f\n", result);
        }
    } while (1);
    return 0;
}
float calc(float x, char cal, float y)
{
    if (cal == '+')
        return x + y;
    else if (cal == '-')
        return x - y;
    else if (cal == '*')
        return x * y;
    else if (cal == '/')
        return x / y;
    else
    {
        printf("该计算方式未设计\n");
        return 0;
    }
}