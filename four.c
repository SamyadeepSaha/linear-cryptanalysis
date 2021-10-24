//Blocks of C Program of Linear Cryptanalysis (4-bit S-box) 
						
#include<stdio.h>

/* 				Global macros:

Here two macros with name BITS and ROWS are defined. 

BIT is assigned a value of 4 to manifest that the S-box that is taken for this 
LC analysis is a 4-Bit S-box or the S-box elements consist of 4 bits in their binary equivalent. 

row is assigned a value 16 to manifest the number of rows in the truth table of LC 
or the numbers of elements in the 4-bit S-box as both are equal.  

Rows in the truth table of LC: It can also be stated that for 16 elements 16, 4-bit binary 
equivalents (BEs) are generated. .*/

#define BITS 4
#define ROWS 16

void d2b(int a,int b[])
{
    /* This function converts 4-bit integer into its binary form.
     * It takes two argument,first is integer itself and second one is a 4 element array to store bits.
     */
     int i;
	for(i=BITS-1;i>=0;i--)
	{
		b[i]=a&1;   // extract current last bit and store it in the respective position array
		a=a>>1; // right shift by one position, it brings next bit to last position
	}
}

void la(int x[ROWS][ROWS],int z[ROWS])
{
    /* This function generates input or output vector.
     * It takes two arguments, first is a 16x16 array to store IPVs or OPBFs and second one is index or output s-box.
     */
     int i;
	for(i=0;i<ROWS;i++)
	{
        /* This loop goes through all elements in p-box.
         * Stores input or output vector row wise.
         */
		int zbin[BITS];
		d2b(z[i],zbin); // It picks current element in p-box. Converts into binary and store it in zbin array.
		x[i][0]=0;  // Sets first column to zero.
       
         int j;
          /*  sets value columnwise for current row.
         * such as z1, z2, z3, z4, z1+z2, z1+z3, z1+z4, z2+z3, z2+z4, z3+z4, z1+z2+z3, z1+z3+z4, z1+z2+z4, z2+z3+z4, z1+z2+z3+z4.
         */
		for(j=1;j<=BITS;j++)
		{
			x[i][j]=zbin[j-1];
		}
		x[i][5]=zbin[0]^zbin[1];
		x[i][6]=zbin[0]^zbin[2];
		x[i][7]=zbin[0]^zbin[3];
		x[i][8]=zbin[1]^zbin[2];
		x[i][9]=zbin[1]^zbin[3];
		x[i][10]=zbin[2]^zbin[3];
		x[i][11]=zbin[0]^zbin[1]^zbin[2];
		x[i][12]=zbin[0]^zbin[2]^zbin[3];
		x[i][13]=zbin[0]^zbin[1]^zbin[3];
		x[i][14]=zbin[1]^zbin[2]^zbin[3];
		x[i][15]=zbin[0]^zbin[1]^zbin[2]^zbin[3];
	}
}

void lat(int ip[ROWS][ROWS],int op[ROWS][ROWS],int lat[ROWS][ROWS])
{
    /* This function generates linear approximation table.
     * It takes input vector and output vector as 16x16 array, and 16x16 array to store linear approximation table.
     */
     int i;
	for(i=0;i<ROWS;i++)
	{
		int j;
		for(j=0;j<ROWS;j++)
		{
			int k;
			for(k=0;k<ROWS;k++)
			{
				(ip[k][i]==op[k][j])?(lat[i][j]++):0;   //  linearity checking
			}
		}
	}
}

int check(int sbox[ROWS])
{
	int flag=1;
	int i;
	for(i=0;i<ROWS;i++)
	{
		int j;
		for(j=i+1;j<ROWS;j++)
		{
			if(sbox[i]==sbox[j])
				flag=0;
		}
	}
	return flag;
}

void print2file(int sbox[ROWS])
{
    /* This function prints the linear approximation table. Conclusion of the table is printed to a file for a given sbox.
     * It takes sbox as an argument.
     */
	int box[ROWS]={0,1,2,3,4,5,6,7,8,9,0xa,0xb,0xc,0xd,0xe,0xf};
	FILE *fp=fopen("four.txt","a");   // Initialize file pointer.
	if(fp==NULL)
	{
		printf("Could not open the file!!");
	}
	else
	{
		if(check(sbox)) // Checking if sbox is valid or not.
		{
			fprintf(fp,"\nS-Box: ");
			int i;
			for(i=0;i<ROWS;i++)
				fprintf(fp," %d,",sbox[i]); // It prints sbox.
			int ip[ROWS][ROWS];
			int op[ROWS][ROWS];
			la(ip,box); // Generates Input vector and store it in box.
			la(op,sbox);    // Generates output vector and store it in array sbox.
			int table[ROWS][ROWS]={0};
			lat(ip,op,table);   // Generates linear approximation table and stores it in array table.
			fprintf(fp,"\n\nLinear Approximation Table:\n");
            /* Following for loop prints the linear approximation table */
			for(i=0;i<ROWS;i++)
			{
				int j;
				for( j=0;j<ROWS;j++)
				{
					fprintf(fp,"%3d",table[i][j]);
				}
				fprintf(fp,"\n");
			}
			fprintf(fp,"\nConclusion:\n");
			int con[ROWS+1]={0};    // Declare and initialize array to store occurence of each number in linear approximatin table.
            /* Following for loop counts the occurence of numbers. */
			for(i=0;i<ROWS;i++)
			{
				int j;
				for(j=0;j<ROWS;j++)
				{
					con[table[i][j]]++; // Increase the position designated by the number.
				}
			}
			for(i=0;i<(ROWS+1);i++)
				fprintf(fp,"%3ds = %d\n",i,con[i]); // Printing the count of numbers.
			fclose(fp);
		}
		else
		{
			//this will execute if correct s-box is not provided
            
			fprintf(fp,"Try with proper S-Box");
		}
	}
}


//MAIN FUNCTION BEGINS
void main()
{
    int box[ROWS]={0,1,2,3,4,5,6,7,8,9,0xa,0xb,0xc,0xd,0xe,0xf};
    int sbox[ROWS]={0,0xf,7,4,0xe,2,0xd,1,0xa,6,0xc,0xb,9,5,3,8};
    print2file(sbox);  //This function prints the linear approximation table. Conclusion of the table is printed to a file for a given sbox.
}	
