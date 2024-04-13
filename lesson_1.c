/*
递归就是一个函数在它的函数体内调用它自身
执行递归函数将反复调用其自身，每调用一次就进入新的一层
注意递归函数必须有结束条件

递归函数特点：
1、每一级函数调用时都有自己的变量，但是函数代码并不会得到复制
2、每次调用都会有一次返回
3、递归函数中，位于递归调用前的语句和各级被调用函数具有相同的执行顺序
4、递归函数中，位于递归调用后的语句的执行顺序和各个被调用函数的顺序相反
5、递归函数必须有终止语句

一句话总结递归：自我调用且有完成状态
*/

/*
猴子第一天摘下N个桃子，当时就吃了一半，还不过瘾，就又多吃了一个。
第二天又将剩下的桃子吃掉一半，又多吃了一个。以后每天都吃前一天剩下的一半零一个。
到第10天在想吃的时候就剩一个桃子了,问第一天共摘下来多少个桃子？并反向打印每天所剩桃子数。
*/
#include<stdio.h>

int getPeachNumber(int n)
{
    int num;
    if (n == 10)
    {
        return 1;
    }
    else
    {
        num = (getPeachNumber(n+1) + 1) * 2;
        printf("the number of peach in %d day is: %d\n", n, num);
    }

    return num;
}


int main()
{
    int num = getPeachNumber(1);
    printf("the number of peach is: %d\n", num);

    return 0;
}