
#include<stdio.h>
#include<stdlib.h>
int occur(int *,int,int);
int main()
{
	int *a=NULL;
	int no=0,iRet=0,intg=0;
	printf("enter the no of elements u want to enter");
	scanf("%d",&no);
	a=(int*)malloc(sizeof(int)*no);
	if(a==NULL)
	{
		printf("memory is not allocated");
	}
	printf("enter the elements");
	for(int i=0;i<no;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element you want to search");
	scanf("%d",&intg);
	iRet=occur(a,no,intg);
	printf("occurance of integer in given number is %d",iRet);
	return 0;
}
int occur(int arr[],int iSize,int iNum)
{
	int iCnt=0,iOccur=0;
	if(arr==NULL || iSize<=0 )
	{
		return -1;
	}
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(arr[iCnt]==iNum)
		{
			iOccur++;
		}
	}
	return iOccur;
}
