#include<stdio.h>     //此程序用于提醒指针的用法  大部分源代码来自《C Primer Plus》
void chuji(void);
void youxianji(void);
void caozuo(void);
void _const(void);
int main(void)
{
	chuji();
	youxianji();
	caozuo();
	_const();

	return 0;
}
void chuji(void)                  //最基本的指针
{
	int * num;
	int number = 1;

	num = &number;
	printf("num=%p *num=%d\n", num, *num);        //%p对应指针
	printf("\n");
	printf("\n");
}
void youxianji(void)        //通过此函数可以看出指针的优先级
{
	int data[2] = { 100,200 };
	int moredata[2] = { 300,400 };

	int *p1, *p2, *p3;

	p1 = p2 = data;
	p3 = moredata;
	printf("*p1=%d         *p2=%d         *p3=%d\n", *p1, *p2, *p3);
	printf("*p1++=%d     *++p2=%d     (*p3)++=%d\n", *p1++, *++p2, (*p3)++);
	printf("*p1=%d         *p2=%d         *p3=%d\n", *p1, *p2, *p3);
	printf("\n");
	printf("\n");
}
void caozuo(void)           //通过此函数可以看出指针能进行什么操作
{
	int urn[5] = { 100,200,300,400,500 };
	int *ptr1, *ptr2, *ptr3;

	ptr1 = urn;                  //把一个地址赋给指针
	ptr2 = &urn[2];          //把一个地址赋给指针
	                                  //解引用指针以及获得指针的地址
	printf("pointer value,dereferenced pointer,pointer adress:\n");
	printf("prt1=%p,*ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1);

	ptr3 = ptr1 + 4;        //指针加法
	printf("\nadding an int to a pointer:\n");
	printf("ptr1+4=%p,&*ptr1+4)=%d\n", ptr1 + 4, *(ptr1 + 4));
	ptr1++;                    //递增指针
	printf("\nvalues after ptr++\n");
	printf("prt1=%p,*ptr1=%d,&ptr1=%p\n", ptr1, *ptr1, &ptr1);
	ptr2--;                     //递减指针
	printf("\nvalues after --ptr2:\n");
	printf("prt2=%p,*ptr2=%d,&ptr2=%p\n", ptr2, *ptr2, &ptr2);
	--ptr1;                    //恢复为初始值
	++ptr2;                  //恢复为初始值
	printf("\npointers reset to original values:\n");
	printf("ptr1=%p,ptr2=%p\n", ptr1, ptr2);
	printf("\nsubtracting one pointer from another:\n");
	printf("ptr1=%p,ptr2=%p,ptr2-ptr1=%td\n", ptr1, ptr2,ptr2-ptr1);         //一个指针减去另一个指针     %td
	printf("\nsubtracting an int from a pointer:\n");
	printf("ptr3=%p,ptr3-2=%p\n", ptr3, ptr3 - 2);          //指针减去一个整数

}
void _const(void)//const 在指针的用法
{

}
