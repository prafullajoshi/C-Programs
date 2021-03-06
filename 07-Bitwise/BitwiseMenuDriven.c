
/*Write a menu driven program for manipulation of bitwise operators*/


#include<stdio.h>
#include<stdlib.h>

int TurnOffBits(int,int,int);
int TurnOnBits(int,int,int);
int ToggleBits(int,int,int);
int CountingNoOfOnes(int);
int CountingNoOfZeros(int);
int TurnOffRightMostBit(int);
int setRightAlignedBits(int,int,int);
int SetBits(int,int,int,int);
int SwapNumbers(int,int);
int SwapBits(int,int,int,int);
int CheckBit(int,int);
int CheckForTwosPower(int);
int main()
{
	int ch,number,position,bits;
	
	int num1,num2,result=0;
	
	
	printf("\nMENU");
	printf("\n1.TurnOffBits");
	printf("\n2.TurnOnBits");
	printf("\n3.ToggleBits");
	printf("\n4.CountingNoOfOnes");
	printf("\n5.CountingNoOfZeros");
	printf("\n6.TurnOffRightMostBit");
	printf("\n7.setRightAlignedBits");
	printf("\n8.SetBits");
	printf("\n9.SwapNumbers");
	printf("\n10.SwapBits");
	printf("\n11.CheckBit");
	printf("\n12.CheckForTwo'sPower");
	printf("\n13.Exit");	
	printf("\nEnter the choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("\nEnter the number :");
			scanf("%d",&number);
			
			printf("\nEnter the position :");
			scanf("%d",&position);
			
			printf("\nEnter the no of bits :");
			scanf("%d",&bits);
			
			result=TurnOffBits(number,position,bits);
			printf("After turning OFF %d bits from %d is %d",bits,number,result);
			break;
		case 2:
			printf("\nEnter the number :");
			scanf("%d",&number);
			
			printf("\nEnter the position :");
			scanf("%d",&position);
			
			printf("\nEnter the no of bits :");
			scanf("%d",&bits);
			
			result=TurnOnBits(number,position,bits);
			printf("After turning ON %d bits from %d is %d",bits,number,result);
			break;
		case 3:
			printf("\nEnter the number :");
			scanf("%d",&number);
			
			printf("\nEnter the position :");
			scanf("%d",&position);
			
			printf("\nEnter the no of bits :");
			scanf("%d",&bits);
			
			result=ToggleBits(number,position,bits);
			printf("After toggling of %d bits from %d is %d",bits,number,result);
			break;
		case 4:
			printf("\nEnter the number :");
			scanf("%d",&number);
			
			result=CountingNoOfOnes(number);
			printf("Number of 1 bits in %d is :%d\n",number,result);
			break;
		case 5:
			printf("\nEnter the number :");
			scanf("%d",&number);
			
			result=CountingNoOfZeros(number);
			printf("The size of integer :%ld bits\n",(sizeof(int))*8);
			printf("Number of 0 bits in %d is :%d\n",number,result);
			break;
		case 6:
			printf("\nEnter the number :");
			scanf("%d",&number);
			
			result=TurnOffRightMostBit(number);
			printf("\nAfter Turning OFF right most bit from %d is :%d\n",number,result);
			break;
		case 7:
			printf("\nEnter the number :");
			scanf("%d",&number);
			
			printf("\nEnter the position :");
			scanf("%d",&position);
			
			printf("\nEnter the no of bits :");
			scanf("%d",&bits);

			result=setRightAlignedBits(number,position,bits);
			printf("\nAfter right aligned %d bits from %d is :%d\n",bits,number,result);
			break;
		case 8:
			printf("\nEnter the 1st number :");
			scanf("%d",&num1);		
					
			printf("\nEnter the 2nd number :");
			scanf("%d",&num2);
			
			printf("\nEnter the position for replacing :");
			scanf("%d",&position);
			
			printf("\nEnter the no of bits to replace :");
			scanf("%d",&bits);
			
			result=SetBits(num1,num2,position,bits);	
			printf("\nAfter replacing %d bits in %d from %d is :%d\n",bits,num1,num2,result);
		case 9:
			printf("\nEnter the 1st number :");
			scanf("%d",&num1);		
					
			printf("\nEnter the 2nd number :");
			scanf("%d",&num2);
			
			printf("\nBefore swapping the numbers\nA =%d\nB =%d\n",num1,num2);
			
			SwapNumbers(num1,num2);
			break;
			
		case 10:
			printf("\nEnter the 1st number :");
			scanf("%d",&num1);		
					
			printf("\nEnter the 2nd number :");
			scanf("%d",&num2);
			
			printf("\nEnter the position for replacing :");
			scanf("%d",&position);
			
			printf("\nEnter the no of bits to replace :");
			scanf("%d",&bits);

			printf("\nBefore swapping the bits\nA =%d\nB =%d\n",num1,num2);
			
			SwapBits(num1,num2,position,bits);
			break;
			
		case 11:	
			printf("\nEnter the number :");
			scanf("%d",&number);
			
			printf("\nEnter the position :");
			scanf("%d",&position);
			CheckBit(number,position);
			break;
		case 12:
			printf("\nEnter the number :");
			scanf("%d",&number);
			
			CheckForTwosPower(number);
			break;
		case 13:
			exit(0);
			break;		
		default:
			printf("Sorry....");
	}
	return 0;		
}



int TurnOffBits(int number,int position,int bits)
{
	return number & ~((1<<bits)-1)<<(position-bits);
}


int TurnOnBits(int number,int position,int bits)
{
	return number | ((1<<bits)-1)<<(position-bits);
}		


int ToggleBits(int number,int position,int bits)	
{
	return number^((1<<bits)-1)<<(position-bits);
}


int CountingNoOfOnes(int number)
{
	int x=1,count=0;
	if(number)
	{
		while(x<=number)
		{
			if(number & x)
			{
				count++;
			}
			x=x<<1;
		}	
	}
	return count;
}



int CountingNoOfZeros(int number)
{
	int x=1,count=0;
	
	while(x)
	{
		if(number & x)
		{
			x=x<<1;
		}
		else
		{
			count++;
			x=x<<1;
		}
	}
	return count;	
}		


int TurnOffRightMostBit(int number)
{
	int x=1;
	while(x)	
	{
		if(number & x)
		{
			break;
		}
		else
		{
			x=x<<1;
		}
	}
	x=~x;
	return number & x;
}                                                                                                                                                                                                                                        




int setRightAlignedBits(int number,int position,int bits)
{
	int x=1;
	x=(x<<bits)-1;
	x=x<<(position-bits);
	x=number & x;
	x=x>>(position-bits);
	return x;
}
	 	
	 	
	 	
int SetBits(int num1,int num2,int position,int bits)
{
	int x=1;
	x=(1<<bits)-1;		
	x=x<<(position-bits);
	num2=num2 & x;			//Keep only those bits active with which replacement is to 								//be performed,make other bits OFF
	num1=num1 & ~x;			//Turn OFF the bits on which replacement is to be performed 
	
	return num1 | num2;		//Perform OR to get respective bits replaced 
	
}
	
	
int SwapNumbers(int num1,int num2)
{
	num1=num1 ^ num2;
	num2=num1 ^ num2;
	num1=num1 ^ num2;
	printf("\nAfter swapping the numbers\nA =%d\nB =%d\n",num1,num2);
	return 0;
}		
	
	
int SwapBits(int num1,int num2,int position,int bits)
{
	int temp=1;				//
	temp=(x<<bits)-1;				//
	temp=temp<<(position-bits);		//
	
	int x_part=num1 & temp;
	int y_part=num2 & temp				//Take the required bits from 1st number in x1 
	
	
	num1=num1 & (~temp);			//Turn OFF only those bits from original number
	num2=num2 & (~temp);
	
	int x_swapped = y_part & num1
	int y_swapped = x_part & num2		//Take those bits to the right by (position-bits).
	
		
	printf("\nAfter swapping %d bits from %d position from both the numbers :\nA =%d\nB =%d\n",bits,position,x_swapped,y_swapped);
	
	return 0;
}

int CheckBit(int number,int position)
{
	int x1=1;
	x1=x1<<(position-1);
	x1=number & x1;
	x1=x1>>(position-1);
	if(x1)
	{
		printf("\nThe bit at %d position is :%d\n",position,x1);
	}
	else
	{
		printf("\nThe bit at %d position is :%d\n",position,x1);
	}
	return 0;	
}

int CheckForTwosPower(int number)
{
	int count=0,x1=1;
	if(number)
	{
		while(x1<=number)
		{
			if(number & x1)
			{
				count++;			//Count the no. of one bits in the number
			}
			x1=x1<<1;
		}
	}									
	if(count==1)					//If there is only one bit ON then it is 2's power. 
	{
		printf("\n%d is 2's power\n",number);
	}
	else
	{
		printf("\n%d is not 2's power\n",number);
	}
	return 0;
}
