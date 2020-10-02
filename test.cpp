#include <stdio.h>

int main(void)
{
    FILE *fp;
    int i,a[10],b[10]={0};

    fp=fopen("test.txt","r+");//打开文件以便写入数据
    for (i = 0; i < 10; i++) { //准备要写入文件的数组
        a[i]=i*2;
    }
    for (i = 0; i < 4; i++) { //将a数组中的整数写入fp指向的c:\a.txt文件
        fprintf(fp,"%d\n",a[i]);
    }
    fclose(fp); //写入完毕，关闭文件

    fp=fopen("test.txt","r");//打开文件以便从中读取数据
    for (i = 0; i < 10; i++) { //从fp指向的文件中读取10个整数到b数组
        fscanf(fp,"%d",&b[i]);
    }
    fclose(fp); //读取完毕，关闭文件

    for (i = 0; i < 10; i++) { //输出从fp文件读取的10个整数。
        printf("%d\n",b[i]);
    }

return 0;
}
