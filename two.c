#include<stdio.h>

#define SIZE 4
#define BITS 2

void bin(int a,int b[])
{
	for(int x=BITS-1;x>=0;x--)
	{
		if(a&1)
			b[x]=1;
		else
			b[x]=0;
		a=a>>1;
	}
}

int main()
{
	int sbox[SIZE];
	int sboxbin[SIZE][BITS];
	int arr[10],i,k;
	int matrix[4][4];
	 
	//taking inputs of S-box
	printf("\nEnter the four numbers of S box: ");
	for(int x=0;x<SIZE;x++)
		scanf("%d",&sbox[x]);

	//Binary coversion of the given input numbers
	for(int x=0;x<SIZE;x++)
	{
		bin(sbox[x],sboxbin[x]);
		printf("\n 2 bit Binary of %d is ",sbox[x]);
		for(int y=0;y<BITS;y++)
			printf("%d",sboxbin[x][y]);
	}
     	
	//Extracting bits from each number,here we are extracting the first bit
	printf("\n\n Now we take first bit from all four 2-bit binary:--- \n\n");
	for(int x=0;x<SIZE;x++)
		printf("\nFirst bit of %d is %d",sbox[x],sboxbin[x][0]);
	
	// alloting the extracted bits to an array
	for(int x=0;x<SIZE;x++)
		arr[x]=sboxbin[x][0];
	
	// print X3 which contains first bits of four numbers
	int x3[SIZE];
	printf("\n\n Now we take first bit from all four 2-bit binary:--- \n\n");
	printf("\n\n Now Suppose X3= ");
	for(int x=0;x<SIZE;x++)
	{
		printf("\t%d",sboxbin[x][0]);
		x3[x]=sboxbin[x][0];
	}
	//Extracting bits from each number,here we are extracting the second bit
	printf("\n\n Now we take second bit from all four 2-bit binary:--- \n\n");
    	for(int x=0;x<SIZE;x++)
		printf("\nSecond bit of %d is %d",sbox[x],sboxbin[x][1]);
    
    	// alloting the extracted bits to an array
    	for(int x=0;x<SIZE;x++)
		arr[4+x]=sboxbin[x][1];
	 
	// print X4 which contains second bits of four numbers
	int x4[SIZE];
    	printf("\n\n Now we take 2nd bit from all four 2-bit binary:--- \n\n");
	printf("\n\n Now Suppose X4= ");
	for(int x=0;x<SIZE;x++)
	{
		printf("\t%d",sboxbin[x][1]);
		x4[x]=sboxbin[x][1];
	}

	// time for X1 and X2	
	printf("\n\nNow we take the positions of the S-Box as inputs,that is ,POSITION 0,1,2,3:-----");
	printf("\nHere too we get 2 more binary patterns of 4-bit long..that is extracting first and second bits..");
	// print X1 
	int x1[SIZE]={0,0,1,1};
	printf("\n\n Now Suppose X1= ");
	for(int x=0;x<SIZE;x++)
		printf("\t%d",x1[x]);
	// print X2
	int x2[SIZE]={0,1,0,1};
	printf("\n\n Now Suppose X2= ");
	for(int x=0;x<SIZE;x++)
		printf("\t%d",x2[x]);

	// now begin complex part :-(
	// linear Aproximation table
	int lat[SIZE][SIZE]={0};
	int zeros[SIZE]={0};

	// compare row zero
	// compare zeros
	lat[0][0]=4;
	// compare zeros with x1
	lat[0][1]=0;
	for(int x=0;x<SIZE;x++)
	{
		if(zeros[x]==x1[x])
			lat[0][1]++;
	}
	// compare zeros with x2
	lat[0][2]=0;
	for(int x=0;x<SIZE;x++)
	{
		if(zeros[x]==x2[x])
			lat[0][2]++;
	}
	// compare zeros with x1 xor x2
	lat[0][3]=0;
	for(int x=0;x<SIZE;x++)
	{
		if(zeros[x]==(x1[x]^x2[x]))
			lat[0][3]++;
	}

	
	// compare row x3
	// compare x3 with zeros
	lat[1][0]=0;
	for(int x=0;x<SIZE;x++)
	{
		if(x3[x]==zeros[x])
			lat[1][0]++;
	}
	// compare x3 with x1
	lat[1][1]=0;
	for(int x=0;x<SIZE;x++)
	{
		if(x3[x]==x1[x])
			lat[1][1]++;
	}
	// compare x3 with x2
	lat[1][2]=0;
	for(int x=0;x<SIZE;x++)
	{
		if(x3[x]==x2[x])
			lat[1][2]++;
	}
	// compare x3 with x1 xor x2
	lat[1][3]=0;
	for(int x=0;x<SIZE;x++)
	{
		if(x3[x]==(x1[x]^x2[x]))
			lat[1][3]++;
	}
	
	// compare row x4
	// compare x4 with zeros
	lat[2][0]=0;
	for(int x=0;x<SIZE;x++)
	{
		if(x4[x]==zeros[x])
			lat[2][0]++;
	}
	// compare x4 with x1
	lat[2][1]=0;
	for(int x=0;x<SIZE;x++)
	{
		if(x4[x]==x1[x])
			lat[2][1]++;
	}
	// compare x4 with x2
	lat[2][2]=0;
	for(int x=0;x<SIZE;x++)
	{
		if(x4[x]==x2[x])
			lat[2][2]++;
	}
	// compare x4 with x1 xor x2
	lat[2][3]=0;
	for(int x=0;x<SIZE;x++)
	{
		if(x4[x]==(x1[x]^x2[x]))
			lat[2][3]++;
	}
	
	// compare row x3 xor x4
	// compare x3 xor x4 with zeros
	lat[3][0]=0;
	for(int x=0;x<SIZE;x++)
	{
		if((x3[x]^x4[x])==zeros[x])
			lat[3][0]++;
	}
	// compare x3 xor x4 with x1
	lat[3][1]=0;
	for(int x=0;x<SIZE;x++)
	{
		if((x3[x]^x4[x])==x1[x])
			lat[3][1]++;
	}
	// compare x3 xor x4 with x2
	lat[3][2]=0;
	for(int x=0;x<SIZE;x++)
	{
		if((x3[x]^x4[x])==x2[x])
			lat[3][2]++;
	}
	// compare x3 xor x4 with x1 xor x2
	lat[3][3]=0;
	for(int x=0;x<SIZE;x++)
	{
		if((x3[x]^x4[x])==(x1[x]^x2[x]))
			lat[3][3]++;
	}

	// linear approximation table
	printf("\n\nLinear approx table\n");
	for(int x=0;x<4;x++)
	{
		for(int y=0;y<4;y++)
			printf("\t%d",lat[x][y]);
		printf("\n");
	}
}
