//������
#include <stdio.h>
float calc(float x, char cal, float y);


int main()
{
    float num1, num2, result, num3, num4;
    char cal, choose;

    //%*c��ջ����� �������з�
    scanf("%f%c%f%*c", &num1, &cal, &num2);
    //��ʹ��setbuf(stdin,NULL);��ջ�����
    result = calc(num1, cal, num2);
    printf("=%.2f\n", result);
    do
    {
        printf("�Ƿ�Ҫ�������м���\n");
        printf("������'Y'��'N'\n");

        //%*c��ջ����� �������з�

        scanf("%c%*c", &choose);
        // ��ʹ��setbuf(stdin,NULL);��ջ�����
        if (choose == 'N' || choose == 'n')
            break;
        else if (choose == 'Y' || choose == 'y')
        {
            num3 = result;

            
            //%*c��ջ����� �������з�
            scanf("%c%f%*c", &cal, &num4);
            //��ʹ��setbuf(stdin,NULL);��ջ�����
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
        printf("�ü��㷽ʽδ���\n");
        return 0;
    }
}