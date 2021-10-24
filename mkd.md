# Introduction

Symmetric key cryptography, Asymmetric key cryptography, Hash function
are the three categories of cryptography. Block cipher belongs to
symmetric key cryptography. An encryption algorithm that encrypts a
block of fixed size at a time is a block cipher. Substitution box
(S-Box) have been a part of the block cipher since very long which is
used to hide the relationship between the key and the cipher text. Data
Encryption Standard (DES) uses the same key for encryption and
decryption of data. In this paper, we are working on the 32-DES s-boxes.

For a 2 bit s box -A 2 bit S-box contains 4 elements from 0 to 3 and the
index of each element also varies from 0 to 3.

For a 4 bit s-box-A 4 bit s box contains 16 elements staring from 0 to F
(Hex) and the index of each elements also varies from 0 to F (hex).

In case of 2 bit s-box. For determining the standard of the 24 s-boxes.
We need to count the no. of 2’s in each s-box. If the count of no of 2’s
is higher, then we cannot conclude whether the linear equations are
present or not. That is, the S- box is good. If the count of no. of 2’s
is less, then we can easily conclude linear equations are present or
not.

In case of 4 bit s-box. For determining the standard of the 32 s-boxes,
if the number of 8’s in the table are less, it is good for the
cryptanalysts because it won’t be safe and are easy to crack. But if the
count of number of 8’s in the table are more compared to the other
numbers, then the s-box is said to be safe from cryptanalysis.

# Linear Cryptanalysis

Cryptanalysis is a way of getting to know the coded messages without
knowing the key. This is done by the hackers by breaking into security
systems to have access to encrypted messages. Linear Cryptanalysis is a
known plaintext attack where the attacker operates on the linear
approximations between plaintext, cipher text and the key.

## Linear Cryptanalysis on Block Cipher

In cryptography, S-box is a basic component of symmetric key algorithm
which is used to perform substitution. An S-box takes m bits of input
and converts it into n bits of output. An m\*n s-box can be implemented
using a table with \(2^m\) words of n bits each.

## Linear Cryptanalysis on Stream Cipher

The main aim of cryptography is to hide the data sent by a sender from
any attacker so that the data safely reaches only to the receiver. But
there are ways in which an attacker can get access to the messages.
There are several kinds of attacks by which an attacker can get access
to the message. One of them is known plaintext attack in which some of
the plaintext and cipher text is known to the attacker. The attacker
then somehow figures out the key and then deciphers the message sent by
the sender which uses the same key.

Linear cryptanalysis gives a known plaintext attack on several stream
ciphers. It is based on the same principles of linear cryptanalysis on
block ciphers introduced by Matsui.

## Concept of probability bias

Probability bias can be defined as-

No. of actual occurrence/ No. of total occurrence=Probability

If the probability reaches from \(\frac{1}{2}\) towards \(1\), the
chances of presence of that linear equation increases.

If it reaches towards \(0\), the chances of absence of that linear
equation increases.

If the probability bias is equal to \(\frac{1}{2}\), it means maximum
uncertainty.

To sum it up-

If probability bias is equal to \(\frac{1}{2}\) or close to
\(\frac{1}{2}\), maximum uncertainty whether the linear equations are
present or not. That means, security of that s-box is good and the
attacker won’t be able to crack it. The sbox said to be linear
crtyptanalysis immune.

If probability bias reaches towards \(0\) or \(1\), it is easy to sum up
whether the linear equations are present or not. That means, security of
that s-box is poor and the attacker is able to crack it.

Also, probability bias greater than \(\frac{1}{2}\) is better for a
crypto s-box. If that is the case then crypto s-box is said to be more
linear cryptanalysis immune. Based on this, we are analysing the
security of s-boxes in this paper.

# Linear Cryptanalysis of 2 bit S-boxes

A 2 bit s box is described in the table [1](#table:1).

## 2-bit Crypto S-box

A 2 bit s-box can be written as follows where each element in the first
row named as index is the position of the elements of the S-box and the
second row named as “s-box” is the elements of the s–box. The values of
each element in the first row are unique and sequential in nature since
they are the position of elements which is always unique. The values of
the second row, which is said to be the elements of the s-box, are
unique but are not always sequential.

<div id="table:1">

| Row | Column | 1 | 2 | 3 | 4 |
| :-: | :----: | :-: | :-: | :-: | :-: |
|  1  | Index  | 0 | 1 | 2 | 3 |
|  2  | S-box  | 0 | 1 | 3 | 2 |

Example of 2-bit S-box

</div>

## Input vectors and Output boolean function of 2-bit crypto s-box

In the table [2](#table:2), row 1 is the index value of the s-boxes. Row
2 and Row 3 are taken as the input vectors (IPV1, IPV2). Column 1-4 are
the 2-bit binary values of the index (decimal) values. Row 2 is created
by taking the first digit of the 2 bit binary value of the
index(decimal) value and Row3 is created by taking the second digit of
the 2-bit binary value of the index(decimal value). Row 4 is the
elements of the taken s-box. Row 5 and row 6 are taken the Output
Boolean Functions (OPBF1, OPBF2). Column 1-4 are the 2 bit binary values
of the s-box. Row 5, i.e. the OPBF2 is created by taking the first digit
of the 2-bit binary value of the s-box. Similarly. Row 6, i.e. the OPBF1
is created by taking the second digit of the 2-bit binary values of the
s-box.

<div id="table:2">

| Row | Column | 1 | 2 | 3 | 4 |
| :-: | :----: | :-: | :-: | :-: | :-: |
|  1  | Index  | 0 | 1 | 2 | 3 |
|  2  |  IPV2  | 0 | 0 | 1 | 1 |
|  3  |  IPV1  | 0 | 1 | 0 | 1 |
|  4  | S-box  | 0 | 1 | 3 | 2 |
|  5  | OPBF2  | 0 | 0 | 1 | 1 |
|  6  | OPBF1  | 0 | 1 | 1 | 0 |

IPVs and OPBFs

</div>

## 2-bit linear relations

In the table [3](#table:3), the input vectors of the s box are shown
under the column Input vectors. There are two input vectors. The output
Boolean functions are shown under column of the same name. There are two
output BFs. Naming the Input vector (IPV2) as X1 , IPV1 as X2 . Naming
the output boolean functions (OPBF2) as Y1 , OPBF1 as Y2.

<div id="table:3">

| Index |           |   S-box   |   |            |            |
| :---: | :-------: | :-------: | :-: | :--------: | :--------: |
|       | IPV2 (X1) | IPV1 (X2) |   | OPBF2 (Y1) | OPBF1 (Y2) |
|   0   |     0     |     0     | 0 |     0      |     0      |
|   1   |     0     |     1     | 1 |     0      |     1      |
|   2   |     1     |     0     | 3 |     1      |     1      |
|   3   |     1     |     1     | 2 |     1      |     0      |

Relation between IPVs and OPBFs

</div>

## Linear Approximation Table of the 2-bit crypto S-box

The linear approximation table is formed by taking the input vectors
along the column of the table and by taking the OPBF’s along the rows of
the table. The linear approximation table is formed performing two
steps. First is, performing XOR operation between the IPV’s itself. And
again performing XOR operation between the OPBF’s itself. After the XOR
operation is performed, the task is to check the number of similar bits
between the XOR operated terms.

The linear equations to be checked for similarity are:

\[0=0\] \[X1=0\] \[X2=0\] \[X1 \oplus X2=0\] \[Y1=0\] \[Y2=0\]
\[Y1 \oplus Y2=0\] \[X1=Y1\] \[X2=Y1\] \[X1 \oplus X2=y1\] \[X1=Y2\]
\[X2=Y2\] \[X1 \oplus X2=Y2\] \[Y1 \oplus Y2=X1\] \[Y1 \oplus y2=x2\]
\[Y1 \oplus Y2=X1 \oplus X2\]

<div id="lat">

|                  | \(0\) | \(X1\) | \(X2\) | \(X1 \oplus X2\) |
| :--------------: | :---: | :----: | :----: | :--------------: |
|      \(0\)       |   4   |   2    |   2    |        2         |
|      \(Y1\)      |   2   |   4    |   2    |        2         |
|      \(Y2\)      |   2   |   2    |   2    |        4         |
| \(Y1 \oplus Y2\) |   2   |   2    |   4    |        2         |

Linear Approximation Table

</div>

The linear approximation table (table [4](#lat)) is formed in the
following way-

Taking the first equation, i.e. \(0=0\), we are comparing the number of
similar bits between 4bit binary value of 0 and 4 bit binary value of 0.
0000 and 0000 yields 4 similar bits between them. Therefore we place 4
in the first row. Similarly for the second equation \(X1=0\), we have
compared the number of similar bits between X1 (0011 ) and 0 (0000). Let
us take the equation \(X1 \oplus X2=Y1\), In this, first the XOR
operation is performed between X1(0011) and X2(0101),and the the
result(0110) is compared with Y1(0011) for similarity of bits. All the
other equations are checked similarly.

## Algebraic Normal Form

The equation considered for algebraic normal form is – \[\label{eq:1}
    OPBF=a0 \oplus a1 X1 \oplus a2 X2 \oplus a12 X1 X2\] \[\label{eq:2}
    b0 \oplus b1 Y1 \oplus b2 Y2 \oplus b12 Y1 Y2=a0 \oplus a1 X1 \oplus a2 X2 \oplus a12 X1 X2\]
For different values of \(a0, a1, a2, a12, b0, b1, b2, b12\) equation
[\[eq:2\]](#eq:2), we are trying to see if we are able to get the above
written 16 linear equations.

<div id="table:5">

| A0 | A1 | A2 | A12 | B0 | B1 | B2 | B12 |           Equation            |
| :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :---------------------------: |
| 0  | 0  | 0  |  0  | 0  | 0  | 0  |  0  |            \(0=0\)            |
| 0  | 1  | 0  |  0  | 0  | 0  | 0  |  0  |           \(X1=0\)            |
| 0  | 0  | 1  |  0  | 0  | 0  | 0  |  0  |           \(X2=0\)            |
| 0  | 1  | 1  |  0  | 0  | 0  | 0  |  0  |      \(X1 \oplus X2=0\)       |
| 0  | 0  | 0  |  0  | 0  | 1  | 0  |  0  |           \(Y1=0\)            |
| 0  | 1  | 0  |  0  | 0  | 1  | 0  |  0  |           \(X1=Y1\)           |
| 0  | 0  | 1  |  0  | 0  | 1  | 0  |  0  |           \(X2=Y1\)           |
| 0  | 1  | 1  |  0  | 0  | 1  | 0  |  0  |       \(X1 XOR X2=Y1\)        |
| 0  | 0  | 0  |  0  | 0  | 0  | 1  |  0  |           \(Y2=0\)            |
| 0  | 1  | 0  |  0  | 0  | 0  | 1  |  0  |           \(X1=Y2\)           |
| 0  | 0  | 1  |  0  | 0  | 0  | 1  |  0  |           \(X2=Y2\)           |
| 0  | 1  | 1  |  0  | 0  | 0  | 1  |  0  |      \(X1 \oplus X2=Y2\)      |
| 0  | 0  | 0  |  0  | 0  | 1  | 1  |  0  |      \(Y1 \oplus Y2=0\)       |
| 0  | 1  | 0  |  0  | 0  | 1  | 1  |  0  |      \(Y1 \oplus Y2=X1\)      |
| 0  | 0  | 1  |  0  | 0  | 1  | 1  |  0  |      \(Y1 \oplus Y2=X2\)      |
| 0  | 1  | 1  |  0  | 0  | 1  | 1  |  0  | \(X1 \oplus X2=Y1 \oplus Y2\) |

Equation from algebraic normal form

</div>

What we observe from the table [5](#table:5) is that all the linear
equations are obtained for different values of \(a0,a1,a2,b0,b1,b2,b12\)
when put in the equation [\[eq:2\]](#eq:2).

## Implementation in C

``` objectivec
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
```

## Output

``` default
Enter the four numbers of S box: 0 1 3 2

 2 bit Binary of 0 is 00
 2 bit Binary of 1 is 01
 2 bit Binary of 3 is 11
 2 bit Binary of 2 is 10

 Now we take first bit from all four 2-bit binary:---


First bit of 0 is 0
First bit of 1 is 0
First bit of 3 is 1
First bit of 2 is 1

 Now we take first bit from all four 2-bit binary:---



 Now Suppose X3= 	0	0	1	1

 Now we take second bit from all four 2-bit binary:---


Second bit of 0 is 0
Second bit of 1 is 1
Second bit of 3 is 1
Second bit of 2 is 0

 Now we take 2nd bit from all four 2-bit binary:---



 Now Suppose X4= 	0	1	1	0

Now we take the positions of the S-Box as inputs,that is ,POSITION 0,1,2,3:-----
Here too we get 2 more binary patterns of 4-bit long..that is extracting first and second bits..

 Now Suppose X1= 	0	0	1	1

 Now Suppose X2= 	0	1	0	1

Linear approx table
	4	2	2	2
	2	4	2	2
	2	2	2	4
	2	2	4	2
```

For the 2 bit crypto s-box ( 0132 )-

No. of 0’s=0

No. of 1’s=0

No. of 2’s=12

No. of 3’s=0

No. of 4’s=4

## Scrutiny for linear cryptanalysis 2-bit sbox

In the linear approximation table [4](#lat) there are 16 cells for 16
2-bit linear equations. The count for similarity of the bits for the
binary numbers are put in each cell. 4 in a cell tells that all the bits
are similar for that particular relation. 2 in a cell tells that the
particular relation is satisfied for 2 2-bit binary conditions and
remains unsatisfied for 2-bit binary conditions. This means, there
remains the maximum uncertainty for the attacker whether the linear
equations exists or not.

## Scrutiny for the code of linear cryptanalsis of 2-bit s-box

From the output of the code executed for the linear cryptanalysis of
2-bit S-box,SECTION [3.7](#two), we can see that the no. of 2’s is
maximum, i.e. the count for no. of 2’s is higher than the count of other
numbers.

Now, from the concept of probability bias-

No of 2’s obtained from the code is \(12\).

Therefore \(\frac{12}{16}=0.75\) which is near to both \(\frac{1}{2}\)
and \(1\). Therefore, we conclude the s-box is lineacryptanalysis
immune.

## Security conclusion for 24 2-bit s-box

<div id="sec:1">

|   | No. of 2s |   |   |    |
| :-: | :-------: | :-: | :-: | :-: |
| 0 |     1     | 2 | 3 | 12 |
| 0 |     1     | 3 | 2 | 12 |
| 0 |     2     | 1 | 3 | 12 |
| 0 |     2     | 3 | 1 | 12 |
| 0 |     3     | 1 | 2 | 12 |
| 1 |     0     | 2 | 3 | 12 |
| 1 |     0     | 3 | 2 | 12 |
| 1 |     2     | 0 | 3 | 12 |
| 1 |     2     | 3 | 0 | 12 |
| 1 |     3     | 0 | 2 | 12 |
| 1 |     3     | 2 | 0 | 12 |
| 2 |     0     | 1 | 3 | 12 |
| 2 |     0     | 3 | 1 | 12 |
| 2 |     1     | 0 | 3 | 12 |
| 2 |     1     | 3 | 0 | 12 |
| 2 |     3     | 0 | 1 | 12 |
| 2 |     3     | 1 | 0 | 12 |
| 3 |     0     | 1 | 2 | 12 |
| 3 |     0     | 2 | 1 | 12 |
| 3 |     1     | 0 | 2 | 12 |
| 3 |     1     | 2 | 0 | 12 |
| 3 |     2     | 0 | 1 | 12 |
| 3 |     2     | 1 | 0 | 12 |

No of 2’s in 24 2-bit s-box

</div>

# Linear Cryptanalysis of 4bit S-boxes

A 4-bit S-box is described in the table [7](#table:6).

## 4-bit Crypto S-box

A 4 bit s-box can be written as follows where each element in the first
row named as index is the position of the elements of the S-box and the
second row named as “s-box” is the elements of the s –box. The values of
each element in the first row are unique and sequential in nature since
they are the position of elements which is always unique. The values of
the second row, which is said to be the elements of the s box , are
unique but are not always sequential. The S-box taken is 0, F, 7, 4, E,
2, D, 1, A, 6, C, B, 9, 5, 3, 8.

<div id="table:6">

| Row | Column | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 |
| :-: | :----: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
|  1  | Index  | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9  | A  | B  | C  | D  | E  | F  |
|  2  | S-box  | 0 | F | 7 | 4 | E | 2 | D | 1 | A | 6  | C  | B  | 9  | 5  | 3  | 8  |

4-bit S-box

</div>

## Input Vectors and Output Boolean Function of 4-bit crypto S-box

In the table [8](#table:7), row 1 is the index value of the s-boxes. Row
2 to Row 5 are taken as the input vectors ( IPV1 , IPV2 , IPV3, IPV4 ).
Column 1-16 are the 4-bit binary values of the index (decimal) values.
Row 2 is created by taking the first digit of the 4 bit binary value of
the index(decimal) value ,Row3 is created by taking the second digit of
the 4-bit binary value of the index(decimal value) , Row4 is created by
taking the third digit of the 4-bit binary value of the index(decimal
value), Row5 is created by taking the fourth digit of the 4-bit binary
value of the index(decimal value). Row 6 is the elements of the taken
s-box. Row 7 and row 10 are taken the Output Boolean Functions (
OPBF1,OPBF2,OPBF3,OPBF4). Column 1-16 are the 4 bit binary values of the
s-box. Row 7, i.e. the OPBF4 is created by taking the first digit of the
4-bit binary value of the s-box. Similarly. Row 8, i.e. the OPBF3 is
created by taking the second digit of the 4-bit binary value of the
s-box, Row 9, i.e. the OPBF2 is created by taking the third digit of the
4-bit binary value of the s-box, Row 10, i.e. the OPBF1 is created by
taking the fourth digit of the 4-bit binary value of the s-box.

<div id="table:7">

| Row |  Column   | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 |
| :-: | :-------: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
|  1  |   Index   | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9  | A  | B  | C  | D  | E  | F  |
|  2  | IPV4(X4)  | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 1  | 1  | 1  | 1  | 1  | 1  | 1  |
|  3  | IPV3(X3)  | 0 | 0 | 0 | 0 | 1 | 1 | 1 | 1 | 0 | 0  | 0  | 0  | 1  | 1  | 1  | 1  |
|  4  | IPV2(X2)  | 0 | 0 | 1 | 1 | 0 | 0 | 1 | 1 | 0 | 0  | 1  | 1  | 0  | 0  | 1  | 1  |
|  5  | IPV1(X1)  | 0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 | 0 | 1  | 0  | 1  | 0  | 1  | 0  | 1  |
|  6  |   S-box   | 0 | F | 7 | 4 | E | 2 | D | 1 | A | 6  | C  | B  | 9  | 5  | 3  | 8  |
|  7  | OPBF4(Y4) | 0 | 1 | 0 | 0 | 1 | 0 | 1 | 0 | 1 | 0  | 1  | 1  | 1  | 0  | 0  | 1  |
|  8  | OPBF3(Y3) | 0 | 1 | 1 | 1 | 1 | 0 | 1 | 0 | 0 | 1  | 1  | 0  | 0  | 1  | 0  | 0  |
|  9  | OPBF2(Y2) | 0 | 1 | 1 | 0 | 1 | 1 | 0 | 0 | 1 | 1  | 0  | 1  | 0  | 0  | 1  | 0  |
| 10  | OPBF1(Y1) | 0 | 1 | 1 | 0 | 0 | 0 | 1 | 1 | 0 | 0  | 0  | 1  | 1  | 1  | 1  | 0  |

4-bit S-box IPVs and OPBFs

</div>

## 4-bit linear relations

In the table [9](#table:8), the input vectors of the s box are shown
under the column Input vectors. There are four input vectors. The output
Boolean functions are shown under column of name output Boolean
functions. There are four output BFs . Naming the Input vector (IPV4) as
X4 , IPV3 as X3 ,IPV2 as X2 and IPV1 as X1. Naming the output boolean
functions (OPBF4) as Y4 , OPBF3 as Y3, OPBF2 as Y2 and OPBF1 as Y1.

<div id="table:8">

|   |      |      |      |      |   |       |       |       |       |
| :-: | :--: | :--: | :--: | :--: | :-: | :---: | :---: | :---: | :---: |
|   |      |      |      |      |   |       |       |       |       |
|   | IPV4 | IPV3 | IPV2 | IPV1 |   | OPBF4 | OPBF3 | OPBF2 | OPFB1 |
| 0 |  0   |  0   |  0   |  0   | 0 |   0   |   0   |   0   |   0   |
| 1 |  0   |  0   |  0   |  1   | F |   1   |   1   |   1   |   1   |
| 2 |  0   |  0   |  1   |  0   | 7 |   0   |   1   |   1   |   1   |
| 3 |  0   |  0   |  1   |  1   | 4 |   0   |   1   |   0   |   0   |
| 4 |  0   |  1   |  0   |  0   | E |   1   |   1   |   1   |   0   |
| 5 |  0   |  1   |  0   |  1   | 2 |   0   |   0   |   1   |   0   |
| 6 |  0   |  1   |  1   |  0   | D |   1   |   1   |   0   |   1   |
| 7 |  0   |  1   |  1   |  1   | 1 |   0   |   0   |   0   |   1   |
| 8 |  1   |  0   |  0   |  0   | A |   1   |   0   |   1   |   0   |
| 9 |  1   |  0   |  0   |  1   | 6 |   0   |   1   |   1   |   0   |
| A |  1   |  0   |  1   |  0   | C |   1   |   1   |   0   |   0   |
| B |  1   |  0   |  1   |  1   | B |   1   |   0   |   1   |   1   |
| C |  1   |  1   |  0   |  0   | 9 |   1   |   0   |   0   |   1   |
| D |  1   |  1   |  0   |  1   | 5 |   0   |   1   |   0   |   1   |
| E |  1   |  1   |  1   |  0   | 3 |   0   |   0   |   1   |   1   |
| F |  1   |  1   |  1   |  1   | 8 |   1   |   0   |   0   |   0   |

Relation between IPVs and OPBFs

</div>

## Linear Approximation Table (LAT) of the 4-bit crypto s-box

The linear approximation table is formed by taking the input vectors
along the column of the table and by taking the OPBF’s along the rows of
the table. The linear approximation table is formed performing two
steps. First is, performing XOR operation between the IPV’s itself. And
again performing XOR operation between the OPBF’s itself. After the XOR
operation is performed, the task is to check the number of similar bits
between the XOR operated terms.

<span>width=</span>

<div id="table:9">

|             | 0  | X4 | X3 | X2 | X1 | X4,X3 | X4,X2 | X4,X1 | X3,X2 | X3,X1 | X2,X1 | X4,X3,X2 | X4,X3,X1 | X3,X2,X1 | X1,X2,X4 | X4,X3,X2,X1 |
| :---------: | :-: | :-: | :-: | :-: | :-: | :---: | :---: | :---: | :---: | :---: | :---: | :------: | :------: | :------: | :------: | :---------: |
|      0      | 16 | 8  | 8  | 8  | 8  |   8   |   8   |   8   |   8   |   8   |   8   |    8     |    8     |    8     |    8     |      8      |
|     Y4      | 8  | 10 | 8  | 8  | 6  |  10   |   6   |   8   |   8   |  10   |   6   |    6     |    12    |    10    |    12    |      8      |
|     Y3      | 8  | 6  | 6  | 8  | 8  |   8   |  10   |   6   |  10   |  10   |  12   |    8     |    12    |    10    |    6     |      8      |
|     Y2      | 8  | 8  | 6  | 6  | 8  |  10   |   6   |   8   |   8   |  10   |  10   |    12    |    6     |    8     |    10    |     12      |
|     Y1      | 8  | 8  | 10 | 10 | 8  |   6   |  10   |   8   |   8   |  10   |  10   |    4     |    6     |    8     |    10    |     12      |
|    Y4,Y3    | 8  | 12 | 6  | 8  | 10 |   6   |  12   |   6   |  10   |   8   |   6   |    10    |    8     |    8     |    10    |      8      |
|    Y4,Y2    | 8  | 10 | 10 | 10 | 6  |   8   |   8   |   8   |   8   |   8   |  12   |    10    |    6     |    10    |    10    |      4      |
|    Y4,Y1    | 8  | 10 | 10 | 10 | 6  |   8   |   8   |   8   |   8   |   4   |   8   |    10    |    10    |    10    |    6     |     12      |
|    Y3,Y2    | 8  | 10 | 8  | 10 | 8  |  10   |   8   |  10   |  10   |   8   |  10   |    8     |    10    |    2     |    8     |      8      |
|    Y3,Y1    | 8  | 10 | 8  | 10 | 8  |  10   |   8   |  10   |  10   |  12   |   6   |    8     |    6     |    10    |    4     |      8      |
|    Y2,Y1    | 8  | 8  | 12 | 4  | 8  |  12   |  12   |   8   |   8   |   8   |   8   |    8     |    8     |    8     |    8     |      8      |
|  Y4,Y3,Y2   | 8  | 8  | 12 | 6  | 10 |   4   |   6   |  10   |  10   |  10   |   8   |    10    |    10    |    8     |    8     |      8      |
|  Y4,Y3,Y1   | 8  | 8  | 8  | 10 | 10 |   8   |  10   |  10   |   2   |  10   |   8   |    10    |    10    |    8     |    8     |      8      |
|  Y3,Y2,Y1   | 8  | 6  | 6  | 8  | 8  |   8   |  10   |  14   |  10   |   6   |   8   |    8     |    8     |    10    |    10    |      8      |
|  Y1,Y2,Y4   | 8  | 10 | 8  | 8  | 14 |  10   |   6   |   8   |   8   |   6   |  10   |    6     |    8     |    10    |    8     |      8      |
| Y4,Y3,Y2,Y1 | 8  | 4  | 10 | 12 | 10 |  10   |   8   |   6   |  10   |   8   |   6   |    10    |    8     |    8     |    10    |      8      |

4-bit Linear Approximation Table

</div>

The linear approximation table (table [10](#table:9)) is formed in the
following way-

Taking the first equation, i.e. 0=0, we are comparing the number of
similar bits between 16bit binary value of 0 and 16 bit binary value of
0. 0000000000000000 and 0000000000000000 yields 16 similar bits between
them. Therefore we place 16 in the first row. Similarly for the second
equation X4=0, we have compared the number of similar bits between X4
(0000000011111111 ) and 0 (0000000000000000). Let us take the equation
X4 xor X1=Y4, In this, first the XOR operation is performed between
X4(0000000011111111) X1(0101010101010101),and the
result(0101010110101010) is compared with Y4(0100101010111001) for
similarity of bits.No of bits similar found are 8. All the other
equations are checked similarly.

## Implementation in C

``` objectivec
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
```

## Output

``` default
S-Box:  0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8,

Linear Approximation Table:
 16  8  8  8  8  8  8  8  8  8  8  8  8  8  8  8
  8 10  6  8  8 12 10 10 10 10  8  8 10  8  6  4
  8  8  6  6 10  6 10 10  8  8 12 12  8  8  6 10
  8  8  8  6 10  8 10 10 10 10  4  6  8 10  8 12
  8  6  8  8  8 10  6  6  8  8  8 10 14 10  8 10
  8 10  8 10  6  6  8  8 10 10 12  4 10  8  8 10
  8  6 10  6 10 12  8  8  8  8 12  6  6 10 10  8
  8  8  6  8  8  6  8  8 10 10  8 10  8 10 14  6
  8  8 10  8  8 10  8  8 10 10  8 10  8  2 10 10
  8 10 10 10 10  8  8  4  8 12  8 10  6 10  6  8
  8  6 12 10 10  6 12  8 10  6  8  8 10  8  8  6
  8  6  8 12  4 10 10 10  8  8  8 10  6 10  8 10
  8 12  6 10 10 10 10  6  8  4  8  8  8  8 10 10
  8 12 12  6  6  8  6 10 10  6  8 10  8 10  8  8
  8 10 10  8  8  8 10 10  2 10  8  8 10  8 10  8
  8  8  8 12 12  8  4 12  8  8  8  8  8  8  8  8

Conclusion:
  0s = 0
  1s = 0
  2s = 2
  3s = 0
  4s = 7
  5s = 0
  6s = 34
  7s = 0
  8s = 119
  9s = 0
 10s = 74
 11s = 0
 12s = 17
 13s = 0
 14s = 2
 15s = 0
 16s = 1
```

## Scrutiny for linear cryptanalysis of 4-bit s-box

In the linear approximation table [10](#table:9) there are 256 cells for
256 4-bit linear equations. The count for similarity of the bits for the
binary numbers are put in each cell. 16 in a cell tells that all the
bits are similar for that particular relation. 8 in a cell tells that
the particular relation is satisfied for 8 4-bit binary conditions and
remains unsatisfied for 8 4-bit binary conditions. This means, there
remains the maximum uncertainty for the attacker whether the linear
equations exists or not.

## Scrutiny for the code of linear crytanalysis of 4-bit s-box

From the output of the code executed for the linear cryptanalysis of
4-bit S-box,SECTION [4.6](#four), we can see that the no. of 8’s is
maximum, i.e. the count for no. of 8’s is less than the count of other
numbers.

Now, from the concept of probability bias-

No of 8’s obtained from the code is \(119\).

Therefore \(\frac{119}{256}=0.46\) which is near to \(\frac{1}{2}\), but
no. of 8’s less than 128 this s-box is not linear cryptanalysis immune.

## Security conclusion for 32 4-bit des s-box

<div id="sec:2">

|    | No. of 8s |    |    |    |    |    |    |    |    |    |    |    |    |    |    |     |
| :-: | :-------: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
| 14 |     4     | 13 | 1  | 2  | 15 | 11 | 8  | 3  | 10 | 6  | 12 | 5  | 9  | 0  | 7  | 119 |
| 0  |    15     | 7  | 4  | 14 | 2  | 13 | 1  | 10 | 6  | 12 | 11 | 9  | 5  | 3  | 8  | 119 |
| 4  |     1     | 14 | 8  | 13 | 6  | 2  | 11 | 15 | 12 | 9  | 7  | 3  | 10 | 5  | 0  | 119 |
| 15 |    12     | 8  | 2  | 4  | 9  | 1  | 7  | 5  | 11 | 3  | 14 | 10 | 0  | 6  | 13 | 127 |
| 15 |     1     | 8  | 14 | 6  | 11 | 3  | 4  | 9  | 7  | 2  | 13 | 12 | 0  | 5  | 10 | 115 |
| 3  |    13     | 4  | 7  | 15 | 2  | 8  | 14 | 12 | 0  | 1  | 10 | 6  | 9  | 11 | 5  | 127 |
| 0  |    14     | 7  | 11 | 10 | 4  | 13 | 1  | 5  | 8  | 12 | 6  | 9  | 3  | 2  | 15 | 127 |
| 13 |     8     | 10 | 1  | 3  | 15 | 4  | 2  | 11 | 6  | 7  | 12 | 0  | 5  | 14 | 9  | 113 |
| 10 |     0     | 9  | 14 | 6  | 3  | 15 | 5  | 1  | 13 | 12 | 7  | 11 | 4  | 2  | 8  | 117 |
| 13 |     7     | 0  | 9  | 3  | 4  | 6  | 10 | 2  | 8  | 5  | 14 | 12 | 11 | 15 | 1  | 119 |
| 13 |     6     | 4  | 9  | 8  | 15 | 3  | 0  | 11 | 1  | 2  | 12 | 5  | 10 | 14 | 7  | 127 |
| 1  |    10     | 13 | 0  | 6  | 9  | 8  | 7  | 4  | 15 | 14 | 3  | 11 | 5  | 2  | 13 | 131 |
| 7  |    13     | 14 | 3  | 0  | 6  | 9  | 10 | 1  | 2  | 8  | 5  | 11 | 12 | 4  | 15 | 113 |
| 13 |     8     | 11 | 5  | 6  | 15 | 0  | 3  | 4  | 7  | 2  | 12 | 1  | 10 | 14 | 9  | 113 |
| 10 |     6     | 9  | 0  | 12 | 11 | 7  | 13 | 15 | 1  | 3  | 14 | 5  | 2  | 8  | 4  | 113 |
| 3  |    15     | 0  | 6  | 10 | 1  | 13 | 8  | 9  | 4  | 5  | 11 | 12 | 7  | 2  | 14 | 113 |
| 2  |    12     | 4  | 1  | 7  | 10 | 11 | 6  | 8  | 5  | 3  | 15 | 13 | 0  | 14 | 9  | 117 |
| 14 |    11     | 2  | 12 | 4  | 7  | 13 | 1  | 5  | 0  | 15 | 10 | 3  | 9  | 8  | 6  | 117 |
| 4  |     2     | 1  | 11 | 10 | 13 | 7  | 8  | 15 | 9  | 12 | 5  | 6  | 3  | 0  | 14 | 109 |
| 11 |     8     | 12 | 7  | 1  | 14 | 2  | 13 | 6  | 15 | 0  | 9  | 10 | 4  | 5  | 3  | 117 |
| 12 |     1     | 10 | 15 | 9  | 2  | 6  | 8  | 0  | 13 | 3  | 4  | 14 | 7  | 5  | 11 | 113 |
| 10 |    15     | 4  | 2  | 7  | 12 | 9  | 5  | 6  | 1  | 13 | 14 | 0  | 11 | 3  | 8  | 111 |
| 9  |    14     | 15 | 5  | 2  | 8  | 12 | 3  | 7  | 0  | 4  | 10 | 1  | 13 | 11 | 6  | 113 |
| 4  |     3     | 2  | 12 | 9  | 5  | 15 | 10 | 11 | 14 | 1  | 7  | 6  | 0  | 8  | 13 | 115 |
| 4  |    11     | 2  | 14 | 15 | 0  | 8  | 13 | 3  | 12 | 9  | 7  | 5  | 10 | 6  | 1  | 119 |
| 13 |     0     | 11 | 7  | 4  | 9  | 1  | 10 | 14 | 3  | 5  | 12 | 2  | 15 | 8  | 6  | 127 |
| 1  |     4     | 11 | 13 | 12 | 3  | 7  | 14 | 10 | 15 | 6  | 8  | 0  | 5  | 9  | 2  | 113 |
| 6  |    11     | 13 | 8  | 1  | 4  | 10 | 7  | 9  | 5  | 0  | 15 | 14 | 2  | 3  | 12 | 121 |
| 13 |     2     | 8  | 4  | 6  | 15 | 11 | 1  | 10 | 9  | 3  | 14 | 5  | 0  | 12 | 7  | 125 |
| 1  |    15     | 13 | 8  | 10 | 3  | 7  | 4  | 12 | 5  | 6  | 11 | 0  | 14 | 9  | 2  | 121 |
| 7  |    11     | 4  | 1  | 9  | 12 | 14 | 2  | 0  | 6  | 10 | 13 | 15 | 3  | 5  | 8  | 117 |
| 2  |     1     | 14 | 7  | 4  | 10 | 8  | 13 | 15 | 12 | 9  | 0  | 3  | 5  | 6  | 11 | 119 |

No of 4’s in 32 4-bit s-box

</div>

From the table [11](#sec:2) we can see that none of them are linear
cryptanalysis immune, except one which has no of 8’s 131. This is a
problem in DES s-box.

# Conclusion

In this paper, we saw a detailed theoretical as well as an
implementation of that approach for concluding the security of 24 2-bit
s box and 32 4-bit DES s-box. We used C program to analyze the security
criteria based on the concept of probability bias and with the help of
linear approximation table. It can be concluded that for the all the 24
2-bit substitution box ,the security of the s box is good since the
probability bias based on the no. of 2’s obtained from the code as well
as from the linear approximation table is near to 1/2. It can also be
concluded that for all the 32 4-bit DES substitution box, the security
of the s box except one ,for linear cryptanlaysis is poor since the
probability bias based on the no. of 8’s obtained from the code as well
as the linear approximation table is near to 1/2 but less than 128 .
That is the majority of the 32 4-bit DES crypto sbox are not linear
cryptanlaysis immune. 

**References**

1\. A Tutorial on Linear and Differential Cryptanalysis by Howard M.
Heys

2\. A Review of Existing 4-bit Crypto S-box cryptanalysis Techniques and
Two New Techniques with 4-bit Boolean Functions for Cryptanalysis of
4-bit Crypto S-boxes by Sankhanil Dey and Ranjan Ghosh.

3\. Edward Schaefer (1996),A Simplified Data Encryption Standard
Algorithm, Cryptologia 96.

4\. Susan Landau (2000) Standing the Test of Time: The Data Encryption
Standard, Sun Microsystems.

5\. H.M.Heys. A tutorial on linear and differential
cryptanlysis.cryptologia,26(2002),189-221.

6\. H.M.Heys and S.E. Tavares.Substitution-permutation networks
resistant to differential and linear cryptanalysis.Journal of
Cryptology,9(1996),1-19.

7\. Mitsuru Matsui(1994). Linear Cryptanalysis method for DES cipher,
EUROCRYPT 1994,no.765,pp.386-397.

8\. Mitsuru Matsui(1994). The First Experimental Cryptanalysis of Data
Encryption Standard.Advances in Cryptology– CRYPTO’94.1-11

9.Bagheri N. (2015) Linear Cryptanalysis of Reduced-Round SIMECK
Variants. In: Biryukov A., Goyal V. (eds) Progress in Cryptology –
INDOCRYPT 2015. Lecture Notes in Computer Science, vol 9462. Springer,
Cham.
