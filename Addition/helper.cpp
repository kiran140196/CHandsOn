////////////////////////////////////////////////////////////////////////////////////
//Function name:helper
//Input:		int
//Output:		int
//Description:	it is used to calculate the addition of digit in number
////////////////////////////////////////////////////////////////////////////////////

int adddigit(int iNum)
{
	int idigit=0,iSum=0;
	while(iNum!=0)
	{
		idigit=iNum%10;
		iSum=idigit+iSum;
		iNum=iNum/10;
	}
	return iSum;
}