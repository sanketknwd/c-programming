1.write a c program to find the sum of all the elements of array.
#include<stdio.h>

void main()
{
	int arr[5],i,sum=0;
	printf("Enter Array Element:\n");
	
	for(i=0;i<5;i++)
		scanf_s("%d", &arr[i]);

	for (i = 0; i < 5; i++)
	{
		sum = sum + arr[i];
	}

	printf("Sum of array Elements are:%d\n", sum);
}


Output:
Enter Array Element:
45
67
89
34
56
Sum of array Elements are:291

**************************************************************
2.An array consist of Integers. Write a C program to
count the number of elements less than, greater than
and equal to zero.

#include<stdio.h>

void main()
{
	int arr[5],i,sum=0,count=0,count1=0,count2=0;
	printf("Enter Array Element:\n");
	
	for(i=0;i<5;i++)
		scanf_s("%d", &arr[i]);

	for (i = 0; i < 5; i++)
	{
		
		if (arr[i] > 0)
		{
			count++;
		}
		if (arr[i] == 0)
		{
			count1++;
		}
		if (arr[i] < 0)
		{
			count2++;
		}


		
	}
	printf("Number greater than zero are:%d\n", count);
	printf("Number equal to zero are:%d\n", count1);
	printf("Number less than zero are:%d\n", count2);

}

Output:
Enter Array Element:
12
23
0
-6
-1
Number greater than zero are:2
Number equal to zero are:1
Number less than zero are:2

**************************************************************
3.Write a C program that return the positions of the 
pallindrome element in array.

#include<stdio.h>

void main()
{
	int arr[100],i,n,temp,rem,rev=0,flag=0;

	printf("how many position you want:\n");
	scanf_s("%d", &n);

	printf("Enter array element:\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("array elements are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("position of palindrome number:\n");
	for (i = 0; i < n; i++)
	{
		temp = arr[i];
		while (temp != 0)
		{
			rem = temp % 10;
			temp = temp / 10;
			rev = rev * 10 + rem;

		}
		if (rev == arr[i])
		{
			flag = 1;
			printf("%d\n", i);
		}
		rem = 0;
		rev = 0;
	}
	if (flag == 0)
	{
		printf("There is no palindrome number\n");
	}
}


Output:
how many position you want:
5
Enter array element:
12
13
14
151
34
array elements are:
12
13
14
151
34
position of palindrome number:
3

**************************************************************
4.Write a C program to sort first half of array in 
ascending order and second half of array in 
descending order.


#include<stdio.h>

		void main()
		{
			int arr[100],num, i, n, k, temp;

			printf("Enter How many Element you want\n");
			scanf("%d", &num);

			n = 9 / 2;
			//printf("%d\n", n);

			printf("Enter Array Element:\n");

			for (i = 0; i < num; i++)
			{
				scanf_s("%d", &arr[i]);
			}

			for (i = 0; i < num; i++)
			{
				if (i < n)
				{
					for (k = 0; k < n; k++)
					{
						//printf("second loop:%d\n", arr[k]);
						if (arr[i] < arr[k])
						{
							temp = arr[i];
							arr[i] = arr[k];
							arr[k] = temp;

							//printf("final element:%d\n", arr[i]);
						}
						//printf("\n");
					}
				}
				else if (i >= n)
				{
					//printf("%d\n", n);
					for (k = n; k < num; k++)
					{
						//printf("second loop:%d\n", arr[k]);
						if (arr[i] > arr[k])
						{
							temp = arr[i];
							arr[i] = arr[k];
							arr[k] = temp;

							//printf("final element:%d\n", arr[i]);
						}
						//printf("\n");
					}
				}

			}
			printf("half Array Assending And Half Array Desending:\n");
			for (i = 0; i < num; i++)
			{
				printf("%d\n", arr[i]);
			}
		}



Output:
Enter How many Element you want
10
Enter Array Element:
45
32
12
89
09
67
89
45
67
23
half Array Assending And Half Array Desending:
12
32
45
89
89
67
67
45
23
9
**************************************************************
5.Write a C program to copy the elements of one array 
into another array.

#include<stdio.h>

void main()
{
	int arr[100], arr1[100], i,n,k;

	printf("how many position you want:\n");
	scanf_s("%d", &n);

	printf("Enter array element:\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("array elements are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	i = 0;
	for (k = 0; k < n; k++)
	{
		arr1[k] = arr[i];
		i++;
	}
	printf("second array element:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr1[i]);
	}
}

Output:
how many position you want:
5
Enter array element:
12
34
56
78
90
array elements are:
12
34
56
78
90
second array element:
12
34
56
78
90

**************************************************************
6.Write a C program to sort only even numbers in given 
array.
Eg.
Input: 45 8 75 29 5 49 56 22 14 497 288 18 2
Output: 45 2 75 29 5 49 8 14 18 497 22 56 288

#include<stdio.h>
void main()
{
	int arr[100], arr1[100],n, i, k = 0, count = 0, temp, p;
	
	printf("how many position you want:\n");
	scanf_s("%d", &n);

	printf("Enter Array Element:\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr1[k] = arr[i];
			k++;
			count++;
		}
	}
	for (k = 0; k < count; k++)
	{
		for (p = k + 1; p < count; p++)
		{
			if (arr1[k] > arr1[p])
			{
				temp = arr1[k];
				arr1[k] = arr1[p];
				arr1[p] = temp;
			}
		}
	}
	k = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr[i] = arr1[k];
			k++;
		}
	}
	printf("Even sort array Element:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
}


Output:
how many position you want:
13
Enter Array Element:
45
8
75
29
5
49
56
22
14
497
288
18
2
Even sort array Element:
45
2
75
29
5
49
8
14
18
497
22
56
288
**************************************************************
7.Write a program in C to separate odd and even 
integers in same array.

#include<stdio.h>

void main()
{
	int arr[100],i,n,k,temp;

	printf("how many position you want:\n");
	scanf_s("%d", &n);

	printf("Enter array element:\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("array elements are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
		{
			for (k = i + 1; k < n; k++)
			{
				if (arr[k] % 2 == 0)
				{
					temp = arr[k];
					arr[k] = arr[i];
					arr[i] = temp;
					break;
				}
			}
		}
	}
	printf("sorted array elements are half sum and half odd:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
}



Output:
how many position you want:
10
Enter array element:
12
11
23
44
56
45
67
8
4
12
array elements are:
12
11
23
44
56
45
67
8
4
12
sorted array elements are half sum and half odd:
12
44
56
8
4
12
67
11
23
45

**************************************************************
8.Write a program in C to count the frequency of each 
element of an array.

#include<stdio.h>

void main()
{
	int arr[100],i,n,k,count=0;

	printf("how many position you want:\n");
	scanf_s("%d", &n);

	printf("Enter array element:\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("array elements are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("frequence of each element of array:\n");
	for (i = 0; i <n; i++)
	{
		for (k = 0; k < n; k++)
		{
			if (arr[i] == arr[k])
			{
				count++;
			}
		}
		printf("%d = %d\n", arr[i], count);
		count = 0;
	}
	
}


Output:
how many position you want:
10
Enter array element:
12
12
34
12
56
78
87
78
90
34
array elements are:
12
12
34
12
56
78
87
78
90
34
frequence of each element of array:
12 = 3
12 = 3
34 = 2
12 = 3
56 = 1
78 = 2
87 = 1
78 = 2
90 = 1
34 = 2
**************************************************************
9.Write a program in C to print all unique elements in 
an array.

#include<stdio.h>

void main()
{
	int arr[100],i,n,k,count=0;

	printf("how many position you want:\n");
	scanf_s("%d", &n);

	printf("Enter array element:\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("array elements are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("unique Element are:\n");
	for (i = 0; i <n; i++)
	{
		for (k = 0; k < n; k++)
		{
			if (arr[i] == arr[k])
			{
				count++;
			}
		}
		if(count==1)
		printf("%d\n", arr[i]);
		count = 0;
	}
	
}

Output:
how many position you want:
5
Enter array element:
12
12
34
34
5
array elements are:
12
12
34
34
5
unique Element are:
5
**************************************************************
10. Write a program in C to insert New value in the array 
(sorted list ).

#include<stdio.h>

void main()
{
	int arr[100],i,n,a,k,temp;

	printf("how many position you want:\n");
	scanf_s("%d", &n);

	printf("Enter array element:\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("array elements are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("Enter Element You want to insert:\n");
	scanf_s("%d", &a);
	arr[n] = a;
	printf("unique Element are:\n");
	for (i = 0; i <n+1; i++)
	{
		for (k = i + 1; k < n+1; k++)
		{
			if (arr[i] > arr[k])
			{
				temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;
			}
		}
	}
	
	for (i = 0; i < n+1; i++)
	{
		printf("%d\n", arr[i]);
	}
	
}

Output:
how many position you want:
5
Enter array element:
98
76
65
54
43
array elements are:
98
76
65
54
43
Enter Element You want to insert:
21
sorted list with New Element are:
21
43
54
65
76
98
**************************************************************
11. Write a program in C to delete an element at desired 
position from an array.

#include<stdio.h>

void main()
{
	int arr[100], i, n,a;

	printf("how many position you want:\n");
	scanf_s("%d", &n);

	printf("Enter array element:\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("array elements are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("Enter Element Position:\n");
	scanf_s("%d", &a);
	printf("Array After Delete Element Element:\n");
	for (i = a; i < n-1; i++)
	{
		arr[i]=arr[i+1];
		
	}

	for (i = 0; i < n-1; i++)
	{
		printf("%d\n", arr[i]);
	}

}



Output:
how many position you want:
5
Enter array element:
12
34
56
78
90
array elements are:
12
34
56
78
90
Enter Element Position:
3
Array After Delete Element Element:
12
34
56
90
**************************************************************
12. Write a program in C to find the maximum / 
minimum element in an array.

#include<stdio.h>

void main()
{
	int arr[100], i, n, min, max;

	printf("Enter How many Element you want\n");
	scanf("%d", &n);

	printf("Enter Array Element:\n");

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	max = arr[0];
	min = arr[0];
	for (i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		else if (arr[i] > max)
		{
			max = arr[i];
		}


	}
	printf("minimum no:%d\n", min);
	printf("maximum no:%d\n", max);

}


Output:
Enter How many Element you want
5
Enter Array Element:
34
56
23
78
90
minimum no:23
maximum no:90
**************************************************************
13. Write a program in C to find the second largest 
element in an array.


#include<stdio.h>
	void main()
	{
		int arr[7],n, i, k, max, max1 = 0;

		printf("Enter How many Element you want\n");
		scanf("%d", &n);

		printf("Enter Array Element:\n");

		for (i = 0; i < n; i++)
		{
			scanf_s("%d", &arr[i]);
		}

		max = arr[0];
		for (i = 0; i < n; i++)
		{
			if (arr[i] > max)
			{
				max1 = max;
				max = arr[i];
			}
			else if (arr[i] > max1 && arr[i] < max)
			{
				max1 = arr[i];
			}
		}
		printf("second maximum no:%d\n", max1);

	}

	


Output:
Enter How many Element you want
5
Enter Array Element:
23
45
67
21
78
second maximum no:67
**************************************************************
14. Write a C Program to Find the Number of Elements 
in an Array

#include<stdio.h>

void main()
{
	int arr[100], i, n,count=0;

	printf("Enter How manay Element You Want\n");
	scanf("%d", &n);

	printf("Enter array Element\n");

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);

	}
	printf("Array Element\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);

	}

	for (i = 0; i < n; i++)
	{
		count++;

	}

	printf("%d Element in Array.",count);

}

Output:
Enter How manay Element You Want
5
Enter array Element
12
34
56
78
90
Array Element
12
34
56
78
90
5 Element in Array.
**************************************************************
15. Write a C Program to Check Array bounds while 
Inputing Elements into the Array

#include<stdio.h>

void main()
{
	int arr[100], i=0,n;

	printf("Enter Memory Location You want:\n");
	scanf_s("%d", &n);

	printf("Enter Array Element:\n");
	
	{
		for (i = 0; i < 100; i++)
		{
			if (i < n)
			{
				scanf_s("%d", &arr[i]);
			}
			else
			{
				printf("Array Out of Bound.\n");
				break;
			}

		}
	}
	
}

Output:
Enter Memory Location You want:
5
Enter Array Element:
12
23
45
67
89
Array Out of Bound.

**************************************************************
16. Write a C Program to Print the Alternate Elements 
in an Array.

#include<stdio.h>

void main()
{
	int arr[100], i, n,count=0;

	printf("Enter How manay Element You Want\n");
	scanf("%d", &n);

	printf("Enter array Element\n");

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);

	}
	printf("Array Element\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);

	}

	printf("Alternet Array Element\n");
	i = 0;
	while (i < n)
	{
		printf("%d\n", arr[i]);
		i = i + 2;
	}

}

Output:
Enter How manay Element You Want
6
Enter array Element
12
32
14
56
78
90
Array Element
12
32
14
56
78
90
Alternet Array Element
12
14
78
**************************************************************
17. Write a C Program to Find 2 Elements in the Array 
such that Difference between them is Largest
#include<stdio.h>

void main()
{
	int arr[100], i, n,k,sub=0,difference=0,a,b;

	printf("how many position you want:\n");
	scanf_s("%d", &n);

	printf("Enter array element:\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("array elements are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n; k++)
		{
			sub = arr[i] - arr[k];

			if (sub > difference)
			{
				difference = sub;
				a = arr[i];
				b = arr[k];
			}
			sub = 0;
		}
		
	}
		printf("Largest Difference values are:%d and %d\n", a ,b);

}

Output:
how many position you want:
5
Enter array element:
12
34
56
78
90
array elements are:
12
34
56
78
90
Largest Difference values are:90 and 12
**************************************************************
18. Write a C Program to Input a String & Store their 
Ascii Values in an Integer Array.

#include<stdio.h>
void main()
{
	char city[50];
	int i;

	printf("Enter String\n");

	scanf("%s", city);

	for (i = 0; city[i] != '\0'; i++)
	{
		printf("%c = %d\n", city[i], city[i]);
	}
	

}

Output:
Enter String
sangamner
s = 115
a = 97
n = 110
g = 103
a = 97
m = 109
n = 110
e = 101
r = 114
**************************************************************
19. Write a C program to store squares of the elements 
in the same array.
#include<stdio.h>

void main()
{
	int arr[100], i, n;

	printf("How many memory location you want\n");
	scanf_s("%d", &n);

	printf("Enter Array Element:\n");

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);

	}
	printf("Array Element:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);

	}
	printf("Squre of Array Element:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]* arr[i]);

	}
}

Output:
How many memory location you want
5
Enter Array Element:
12
34

56
78
90
Array Element:
12
34
56
78
90
Squre of Array Element:
144
1156
3136
6084
8100
**************************************************************
20. Write C Program to Find the two Elements such that 
their Sum is Closest to given number.

#include<stdio.h>

void main()
{
	int arr[100],n,n1, i,k,sum=0,olddiff,diff=0,a=0,b=0,max=0;

	printf("How Many Element\n");
	scanf("%d", &n);
	printf("Enter Number\n");
	scanf("%d", &n1);

	printf("Enter Array Element\n");

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	printf("Array Element Are\n");

	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	olddiff = max;
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n; k++)
		{
			if (i == k)
				continue;
			sum = arr[i] + arr[k];
				if (sum < n1)
				{
					diff = n1 - sum;
					if (diff < olddiff)
					{
						olddiff = diff;
						a = arr[i];
						b = arr[k];
					}
				}
		}
	}
	printf("sum of %d and %d closest to given Number %d", a, b, n1);
}
Output:
How Many Element
10
Enter Number
20
Enter Array Element
1
2
3
4
5
6
7
8
9
10
Array Element Are
1
2
3
4
5
6
7
8
9
10
sum of 9 and 10 closest to given Number 20
**************************************************************
21. Write C Program to Find if a given Integer X appears 
more than N/2 times in a Sorted Array of N Integers

#include<stdio.h>
void main()
{
	int arr[100], i, n,x,k,temp,count=0;

	printf("Enter memory size you want\n");
	scanf_s("%d", &n);

	printf("Enter Array Element\n");

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("Given Array Element\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("Enter Number\n");
	scanf_s("%d", &x);

	for (i = 0; i < n; i++)
	{
		for (k = i + 1; k < n; k++)
		{
			if (arr[i] > arr[k])
			{
				temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i] == x)
			count++;
	}
	if (count >= (n / 2))
	{
		printf("Given Integer %d appears more than N/2 times in a Sorted Array",x);
	}
	else
	{
		printf("Given Integer %d Not appears more than N/2 times in a Sorted Array", x);
	}
	
}

Output:
Enter memory size you want
10
Enter Array Element
12
13
12
12
15
16
12
12
17
12
Given Array Element
12
13
12
12
15
16
12
12
17
12
Enter Number
12
Given Integer 12 appears more than N/2 times in a Sorted Array
**************************************************************
22. Write C Program to Find Union & Intersection of 2 
Arrays.

Union:

#include<stdio.h>

void main()
{
	int arr[100], arr1[100],arr2[100],arr3[100], i, n,k,flag=0,j,p,count=0;
	int q = 0,flag1=0;

	printf("Enter position you want\n");
	scanf("%d", &n);

	printf("Enter First Array Element\n");

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter Second Array Element\n");

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("union of Given two array\n");
	q = 0;
	for (i = 0; i < n; i++)
	{
			arr3[q] = arr[i];
			q++;
			count++;
		
	}
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n; k++)
		{
			if (arr1[i] == arr[k])
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			arr3[q] = arr1[i];
			q++;
			count++;
		}
		flag = 0;
	}

	for (i = 0; i < count; i++)
	{
		printf("%d\n", arr3[i]);
	}

}

Output:

Enter position you want
5
Enter First Array Element
1
2
3
4
5
Enter Second Array Element
4
5
6
7
8
union of Given two array
1
2
3
4
5
6
7
8

*********************
*intersection:

#include<stdio.h>

void main()
{
	int arr[100], arr1[100],arr2[100], i, n,k,flag=0,j,p,count=0;

	printf("Enter position you want\n");
	scanf("%d", &n);

	printf("Enter First Array Element\n");

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter Second Array Element\n");

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("Intersection of Given two array\n");
	p = 0;
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < i; k++)
		{

			if (arr[i] == arr[k])
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			for (j = 0; j < n; j++)
			{
				if (arr[i] == arr1[j])
				{
					arr2[p] = arr[i];
					p++;
					count++;
					break;
				}
			}
		}
		flag = 0;
	}
	printf("Array Element\n");
	for (i = 0; i < count; i++)
	{
		printf("%d\n", arr2[i]);
	}

}

Output:
Enter position you want
5
Enter First Array Element
1
2
5
78
9
Enter Second Array Element
78
3
1
2
6
Intersection of Given two array
Array Element
1
2
78
**************************************************************
23. Write a C program to find the sum of contiguous 
subarray within a one dimensional array of numbers 
which has the largest sum.

#include<stdio.h>
void main()
{
	int arr[100], i, n,k,sum=0,maxsum=0;

	printf("Enter memory size you want\n");
	scanf_s("%d", &n);

	printf("Enter Array Element\n");

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("Given Array Element\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		for (k = 0; k <= i; k++)
		{
			sum = sum + arr[k];
			if (maxsum < sum);
			{
				maxsum = sum;
			}
		}
		sum = 0;

	}

	printf("Maxsum of contiguous subarray is %d", maxsum);

}

Output:
Enter memory size you want
5
Enter Array Element
1
2
3
4
5
Given Array Element
1
2
3
4
5
Maxsum of contiguous subarray is 15
**************************************************************
24. Write a C program to find the maximum sum of a 
subsequent numbers in given array.

#include<stdio.h>

void main()
{
	int arr[10], i, n,sum=0,maxsum=0;

	printf("Enter Element You Want\n");
	scanf_s("%d", &n);

	printf("Enter Array Element\n");

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < n-1; i++)
	{
		sum = arr[i] + arr[i + 1];
		//printf("%d\n", sum);
		if (sum > maxsum)
		{
			maxsum = sum;

		}
		sum = 0;
	}

	printf("maximum sum of a subsequent numbers is %d", maxsum);
}

Output:
Enter Element You Want
4
Enter Array Element
12
32
41
12
maximum sum of a subsequent numbers is 73
**************************************************************