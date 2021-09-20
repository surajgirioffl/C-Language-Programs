//C Lanuage
/* */
/* */
//
/*Q. Question based on multiple no.s entered by user and different questions based on the same*/
//Started on 20th July 2021 and 90% codes written on 24th,26th,27th and 28th July 2021
//COMPLETE

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
// #include <unistd.h>
int size;
int number[100]; //for taking number from user
//basic important functions
void function_caller(int choice); //function used for switch statement in choice selected by user in main(). It's just for reduce the code in main()
int *ask_for_data();			  //for taking all numbers from user
void number_in_word(int n);		  //for converting number into word

//operations performer functions

// 1.as per questions given in Assignment
void summation(int *p);
void sum_odd_even(int *p);
void count_odd_even(int *p);
void count_prime(int *p);
void sum_prime(int *p);
void positive_negative(int *p);
void ascending(int *p);
void descending(int *p);
void greatest(int *p);
void smallest(int *p);
void lcm(int *p);
void hcf(int *p);
void average(int *p);
void divisible_by_5(int *p);
void median_mode(int *p);
void perfect(int *p);

// 2.as per questions beyond Assignment
void inverse(int *p);
void palindrom(int *p);
void armstrong(int *p);
void factorial(int *p);
void table(int *p);
void occurance(int *p);
void factors(int *p);
void squre(int *p);
void squre_root(int *p);
void divisible_by_n(int *p);

int single_num_factorial(int num);
void custom_power(int *p);
void npr(int *p);
void ncr(int *p);
// void all_operations_at_once();

int main()
{
	char again[5]; //for repeatation of program
	do
	{
		system("cls"); //clrscr();
		printf("How many numbers do you want to enter:\n");
		scanf("%d", &size);

		puts("select anyone of the following to process further:\n");

		printf("01. To find summation of all %d numbers entered.\n", size);
		printf("02. To find sum of even numbers and odd numbers seperately from entered %d numbers\n", size);
		printf("03. To count even number and odd number from entered %d numbers\n", size);
		printf("04. To count prime and composite numbers in entered %d numbers\n", size);
		printf("05. To find sum of prime number and composite number seperately from entered %d numbers\n", size);
		printf("06. To find sum of positive, negative and zero from entered %d numbers.\n", size);
		printf("07. To arrange entered %d number in ascending order.\n", size);
		printf("08. To arrange entered %d number in descending order.\n", size);
		printf("09. To find greatest number from entered %d numbers.\n", size);
		printf("10. To find smallest number from entered %d numbers.\n", size);
		printf("11. To find LCM of entered %d numbers\n", size);
		printf("12. To find HCF of entered %d numbers\n", size);
		printf("13. To find average of entered %d numbers\n", size);
		printf("14. To count which number is divisible by 5 in entered %d numbers\n", size);
		printf("15. To find median and mode of entered %d numbers\n", size);
		printf("16. To find perfect number from enterd %d numbers\n", size);

		//more possible questions than Assignment work
		printf("17. To find inverse of all %d numbers and difference of sum of original numbers and reversed numbers\n", size);
		printf("18. To find palindrom numbers from entered %d numbers\n", size);
		printf("19. To find armstrong numbers from entered %d numbers\n", size);
		printf("20. To find factorial of all entered %d numbers\n", size);
		printf("21. To find table of all entered %d numbers\n", size);
		printf("22. To find occurance of any numbers from entered %d numbers\n", size);
		printf("23. To find factors and their number of all entered %d numbers.\n", size);
		printf("24. To find squre of all entered %d numbers.\n", size);
		printf("25. To find squre root of all entered %d numbers\n", size);
		printf("26. To count and print the numbers which is divisible by any number entered by you.\n");
		printf("27. To find custom power of all %d numbers.\n", size);
		printf("28. To find npr of all %d numbers.\n", size);
		printf("29. To find ncr of all %d numbers.\n", size);
		printf("30. To execute all 29 above opearation at once.\n");
		printf("31. To Exit the whole program.\n");

		int choice; //for store value of selected choice of user
		puts("\nPlease select your choice from above. e.g 1,2,3 etc.");
		scanf("%d", &choice);

		//function calling
		function_caller(choice);

		//after returning control to main() i.e in last part of execution in this program
		printf("\n\nDo you want to restart the whole program again. yes or no:\n");
		fflush(stdin);
		gets(again);
	} //end of block of do

	while (strcmp(again, "yes") == 0 || strcmp(again, "Yes") == 0);

	puts("\nThanking You....\nBye Bye..........\nSee you...");
	return 0;
} //end of main() function

//for calling any function as per user choice. (using switch)
void function_caller(int choice)
{
	switch (choice)
	{
	case 1:
		summation(ask_for_data()); //function ask_for_data() returns int* which is accepted as argument by summation. similary for below functions
		break;

	case 2:
		sum_odd_even(ask_for_data());
		break;

	case 3:
		count_odd_even(ask_for_data());
		break;

	case 4:
		count_prime(ask_for_data());
		break;

	case 5:
		sum_prime(ask_for_data());
		break;

	case 6:
		positive_negative(ask_for_data());
		break;

	case 7:
		ascending(ask_for_data());
		break;

	case 8:
		descending(ask_for_data());
		break;

	case 9:
		greatest(ask_for_data());
		break;

	case 10:
		smallest(ask_for_data());
		break;

	case 11:
		lcm(ask_for_data());
		break;

	case 12:
		hcf(ask_for_data());
		break;

	case 13:
		average(ask_for_data());
		break;

	case 14:
		divisible_by_5(ask_for_data());
		break;

	case 15:
		median_mode(ask_for_data());
		break;

	case 16:
		perfect(ask_for_data());
		break;

	case 17:
		inverse(ask_for_data());
		break;

	case 18:
		palindrom(ask_for_data());
		break;

	case 19:
		armstrong(ask_for_data());
		break;

	case 20:
		factorial(ask_for_data());
		break;

	case 21:
		table(ask_for_data());
		break;

	case 22:
		occurance(ask_for_data());
		break;

	case 23:
		factors(ask_for_data());
		break;

	case 24:
		squre(ask_for_data());
		break;

	case 25:
		squre_root(ask_for_data());
		break;

	case 26:
		divisible_by_n(ask_for_data());
		break;
	case 27:
		custom_power(ask_for_data());
		break;

	case 28:
		npr(ask_for_data());
		break;

	case 29:
		ncr(ask_for_data());
		break;

	case 30:
		//all_operations_at_once();
		printf("\nAll operation at once can give strange result.\nBecause in this case we take data in array only one times and pass the same data to all the functions by reference.");
		printf("\nIn this way if some function change the value at address then our next function gets the altered values.\nIn some case it may be that our value get lost.\nSo It is obvious to get strange and abnormal result.");
		printf("\nSo It is not recomended to call all function with same reference else you have no option to modification in any value. If you have altered the value then you may remain safe but if value get lost then you will get absolutely a strange result.");
		break;

	case 31:
		exit(0);

	default:
		puts("You have selected wrong choice.\n");
	}
}

//taking value
int *ask_for_data()
{
	//int num[size]; //array local declaration will not work. so it will not work.
	for (int i = 0; i < size; i++)
	{
		number_in_word(i + 1); //function calling to printing proper message for user
		scanf("%d", &number[i]);
	}
	return number; //because return type is int*
}

//for converting number in word
//it will write 1st, 2nd, 3rd etc for nice look
void number_in_word(int n)
{
	//this is very simple and it will also work properly but I have tried do this using function of pointer return type
	if (n % 10 == 1 && n != 11)
		printf("\nwrite the %02dst number:\n", n);
	else if (n % 10 == 2 && n != 12)
		printf("write the %02dnd number:\n", n);
	else if (n % 10 == 3 && n != 13)
		printf("write the %02drd number:\n", n);
	else
		printf("write the %02dth number:\n", n);
}

//operations performer functions
//1.as per questions given in Assignment

//01
//for sum of all numbers
void summation(int *p)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + *(p + i);
	}
	printf("\n===Sum of all entered numbers is %d===\n", sum);
} //done

//02
//for sum of odd and even numbers
void sum_odd_even(int *p)
{
	int count_odd = 0;
	int count_even = 0;
	int sum_even = 0;
	int sum_odd = 0;
	int even_num[size]; //because maximum number of even number will equal to size i.e numbers of all numbers
	int odd_num[size];  //similarly as above

	for (int i = 0; i < size; i++)
	{
		if (*(p + i) > 0 && *(p + i) % 2 == 0)
		{
			even_num[count_even] = *(p + i);
			count_even++;
			sum_even = sum_even + *(p + i);
		}

		else if (*(p + i) > 0)
		{
			odd_num[count_odd] = *(p + i);
			count_odd++;
			sum_odd = sum_odd + *(p + i);
		}
	} //loop ends
	puts("\n====ODD NUMBERS ARE FOLLOWING====");
	for (int i = 0; i < count_odd; i++)
		printf("%d\t", odd_num[i]);
	printf("\nSum of all %d odd numbers is %d\n", count_odd, sum_odd);

	puts("\n====EVEN NUMBERS ARE FOLLOWING====");
	for (int i = 0; i < count_even; i++)
		printf("%d\t", even_num[i]);
	printf("\nSum of all %d even numbers is %d\n", count_even, sum_even);
} //done

//for count odd and even
void count_odd_even(int *p)
{
	int count_odd = 0;
	int count_even = 0;
	int sum_even = 0;
	int sum_odd = 0;
	int even_num[size]; //because maximum number of even number will equal to size i.e numbers of all numbers
	int odd_num[size];

	for (int i = 0; i < size; i++)
	{
		if (*(p + i) > 0 && *(p + i) % 2 == 0)
		{
			even_num[count_even] = *(p + i);
			count_even++;
			sum_even = sum_even + *(p + i);
		}

		else if (*(p + i) > 0)
		{
			odd_num[count_odd] = *(p + i);
			count_odd++;
			sum_odd = sum_odd + *(p + i);
		}
	} //loop ends
	puts("====ODD NUMBERS ARE FOLLOWING====");
	for (int i = 0; i < count_odd; i++)
		printf("%d\t", odd_num[i]);
	printf("\nSum of all %d odd numbers is %d\n", count_odd, sum_odd);
	printf("So Total number of odd numbers is %d\n", count_odd);

	puts("\n====EVEN NUMBERS ARE FOLLOWING====");
	for (int i = 0; i < count_even; i++)
		printf("%d\t", even_num[i]);
	printf("\nSum of all %d even numbers is %d\n", count_even, sum_even);
	printf("So Total numbers of even numbers is %d\n", count_even);
} //done

//03
//for count prime
void count_prime(int *p)
{
	int prime_count = 0;
	int prime[size]; //size is the maximum possiblity of prime number. so we have used this. same in other case also
	int composite_count = 0;
	int composite[size];
	int checking; //it helps in check prime using composite condition

	for (int i = 0; i < size; i++)
	{
		checking = 0;
		if (*p == 2)
		{
			prime[prime_count] = *p;
			prime_count++;
		}
		else if (*p > 2)
		{
			for (int j = 2; j < *p; j++) //we can also use j<*p but no profit and execution time will increase. e.g if n is 15 the it is not divisible by any number after 15/2 i.e 7. so we use n/2 instead of n
			{
				if (*p % j == 0)
					checking++; //use for check of composite. if composite then no prime
			}

			if (checking == 0)
			{
				prime[prime_count] = *p;
				prime_count++;
			}
			else
			{
				composite[composite_count] = *p;
				composite_count++;
			}
		}
		p++;
	} //first loop ends

	//now data printing time for prime
	puts("\n====PRIME NUMBERS ARE FOLLOWING====");
	for (int i = 0; i < prime_count; i++)
		printf("%d\t", prime[i]);
	printf("\nSo Total number of prime numbers is %d\n", prime_count);

	//now data printing time for composite
	puts("\n====COMPOSITE NUMBERS ARE FOLLOWING====");
	for (int i = 0; i < composite_count; i++)
		printf("%d\t", composite[i]);
	printf("\nSo Total number of composite numbers is %d\n", composite_count);
} //done

//04
//for sum prime numbers
void sum_prime(int *p)
{
	int prime_count = 0;
	int prime[size]; //size is the maximum possiblity of prime number. so we have used this. same in other case also
	int composite_count = 0;
	int composite[size];
	int checking; //it helps in check prime using composite condition

	int prime_sum = 0;
	int composite_sum = 0;

	for (int i = 0; i < size; i++)
	{
		checking = 0;
		if (*p == 2)
		{
			prime[prime_count] = *p;
			prime_sum = prime_sum + (*p);
			prime_count++;
		}
		else if (*p > 2)
		{
			for (int j = 2; j < *p; j++) //we can also use j<*p but no profit and execution time will increase. e.g if n is 15 the it is not divisible by any number after 15/2 i.e 7. so we use n/2 instead of n
			{
				if (*p % j == 0)
					checking++; //use for check of composite. if composite then no prime
			}

			if (checking == 0)
			{
				prime[prime_count] = *p;
				prime_sum = prime_sum + (*p);
				prime_count++;
			}
			else
			{
				composite[composite_count] = *p;
				composite_sum = composite_sum + (*p);
				composite_count++;
			}
		}
		p++;
	} //first loop ends

	//now data printing time for prime
	puts("\n====PRIME NUMBERS ARE FOLLOWING====");
	for (int i = 0; i < prime_count; i++)
		printf("%d\t", prime[i]);
	printf("\nSo Total number of prime numbers is %d\n", prime_count);
	printf("And SUM of all prime numbers is %d\n", prime_sum);

	//now data printing time for composite
	puts("\n====COMPOSITE NUMBERS ARE FOLLOWING====");
	for (int i = 0; i < composite_count; i++)
		printf("%d\t", composite[i]);
	printf("\nSo Total number of composite numbers is %d\n", composite_count);
	printf("And SUM of all composite numbers is %d\n", composite_sum);
} //done

//05
//to find positive, negative and zero numbers
void positive_negative(int *p)
{
	int count_positive = 0;
	int positive[size];
	int sum_of_positive = 0;

	int count_negative = 0;
	int negative[size];
	int sum_of_negative = 0;

	int count_zero = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(p + i) > 0) //for positive
		{
			positive[count_positive] = *(p + i);
			sum_of_positive = sum_of_positive + *(p + i);
			count_positive++;
		}
		else if (*(p + i) < 0) //for negative
		{
			negative[count_negative] = *(p + i);
			sum_of_negative = sum_of_negative + *(p + i);
			count_negative++;
		}
		else if (*(p + i) == 0) //for zeros
			count_zero++;
	}
	//this is priting time
	//for positive
	puts("\n====DETAILS ABOUT POSITIVE NUMBERS====");
	for (int i = 0; i < count_positive; i++)
		printf("%d\t", positive[i]);
	printf("\n1.Total number of positive numbers is %d\n", count_positive);
	printf("2. SUM of positive numbers is %d\n", sum_of_positive);

	//for negative
	puts("\n====DETAILS ABOUT NEGATIVE NUMBERS====");
	for (int i = 0; i < count_negative; i++)
		printf("%d\t", negative[i]);
	printf("\n1.Total number of negative numbers is %d\n", count_negative);
	printf("2. SUM of negative numbers is %d\n", sum_of_negative);

} //done

//06
//to arrange all numbers in ascending order
void ascending(int *p)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (*(p + i) > *(p + j)) //for smallest
			{
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	} //ends of outer for loop

	//now printing of data
	puts("\n====ALL DATA IN ASCENDING ORDER ARE FOLLOWING====");
	for (int i = 0; i < size; i++)
		printf("%d\t", *(p + i));
} //done

//07
//to arrange all numbers in descending order
void descending(int *p)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (*(p + i) < *(p + j)) //for greatest
			{
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	} //ends of outer for loop

	//now printing of data
	puts("\n====ALL DATA IN DESCENDING ORDER ARE FOLLOWING====");
	for (int i = 0; i < size; i++)
		printf("%d\t", *(p + i));
} //done

//08
//to find greatest number in all
void greatest(int *p)
{
	int num = *p; //p[0]
	for (int i = 0; i < size; i++)
	{
		if (num < *(p + i)) //for finding greatest
			num = *(p + i);
	}

	//printing data
	printf("\nGreatest number in all %d numbers is %d\n", size, num);
} //done

//09
//to find smallest number from all
void smallest(int *p)
{
	int num = *p; //p[0]
	for (int i = 0; i < size; i++)
	{
		if (num > *(p + i)) //for finding smallest
			num = *(p + i);
	}

	//printing data
	printf("\nsmallest number in all %d numbers is %d\n", size, num);
} //done

//10
//to find lcm of all numbers
void lcm(int *p)
{
	int num = *p;
	int check; //to check the eligibility of lcm
	//1st we need to find the greatest number of array
	for (int i = 0; i < size; i++)
	{
		if (num < *(p + i))
			num = *(p + i);
	}
	//so num has the greatest value of array.
	//now we find multiple of num and check the divisibility by others
	int stat_num = num; //to store num before getting assigned
	int j = 1;			//use to get multiple of num to find lcm

	while (1)
	{
		check = 0;
		for (int i = 0; i < size; i++)
		{
			if (num % (*(p + i)) == 0)
				check++;
		}
		if (check == size) //we can also simply use opposite of this condition in while loop instead of infinity and then we can easily find lcm without if-else
			break;
		else
			num = stat_num * (j++);
	}

	printf("\n====LCM of all %d numbers is %d====\n", size, num);

} //done

//11
//to find hcf of all numbers
void hcf(int *p)
{
	int num = *p;
	int check; //to check the eligibility of hcf
	//1st we need to find the smallest number of array
	for (int i = 0; i < size; i++)
	{
		if (num > *(p + i))
			num = *(p + i);
	}
	//so here 'num' contains the smallest value of array elements

	while (num > 0)
	{
		check = 0;
		for (int i = 0; i < size; i++)
		{
			if (*(p + i) % num == 0)
				check++;
		}
		if (check == size)
			break;
		else
			num--;
	}

	printf("\n====HCF of %d numbers is %d====\n", size, num);
} //done

//12
//to find average of all numbers
void average(int *p)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
		sum = sum + (*(p + i));

	printf("\n====AVERAGE of all %d numbers is %05f====\n", size, (sum / (float)size));
} //done

//13
//to find numbers which are divisible by 5
void divisible_by_5(int *p)
{
	int j = 0;			 //to count numbers divisible by 5
	int divisible[size]; //to store numbers divisible by 5

	for (int i = 0; i < size; i++)
	{
		if (*(p + i) % 5 == 0)
		{
			divisible[j] = *(p + i);
			j++;
		}
	}

	puts("\n====FOLLOWING NUMBERS ARE DIVISIBLE BY 5====");
	for (int i = 0; i < j; i++)
		printf("%d\t", divisible[i]);

	if (j > 1)
		printf("\nSo Total %d number is divisible by 5\n", j);
	else
		printf("\nSo Total %d numbers are divisible by 5\n", j);
} //done

//14
//to find median and mode of all numbers
void median_mode(int *p)
{
	//first we need to arrange all data in ascending or descending order. It will use to find median
	int temp;
	//for arranging data in ascending
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (*(p + i) > *(p + j))
			{
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	} //outermost loop ends

	//now finding median for ungrouped data
	if (size % 2 == 0)
		printf("\n===MEDIAN of ungrouped data is %d===\n\n", *(p + (size / 2)));
	else
		printf("\n===MEDIAN of ungrouped data is %d===\n\n", *(p + ((size / 2) + 1)));

	//now finding mode for ungrouped data
	int count[size]; //for counting occurance of any number
	for (int i = 0; i < size; i++)
	{
		count[i] = 0;
		for (int j = 0; j < size; j++)
		{
			if (*(p + i) == *(p + j))
				count[i]++;
		}
	} //end of loop of i (here)

	//for chech maximum number of repeatation of a number but it may be possible that many numbers repeats same numbers of times.
	temp = count[0]; //let
	//now we find greatest in count[size]
	for (int i = 0; i < size; i++)
	{
		if (temp < count[i])
			temp = count[i];
	}
	//now temp is the greatest among all count[size].

	//priting mode
	int j = 0;
	int once_printer[size]; //to print one number only one times if the number is mode. The maximum size of array is 'size' because it may be that all numbers are different.
	int mode_counter = 0;   //to count how many modes exists
	int checking = 0;
	for (int i = 0; i < size; i++)
	{
		checking = 0;
		if (count[i] == temp)
		{
			for (int k = 0; k < j; k++)
			{
				if (once_printer[k] == (*(p + i))) //it is used because jo number ek baar print ho chuka hai wo dobara print na ho..
					checking++;
			}
			if (checking == 0)
			{
				printf("Mode of ungrouped data is %d===\n", *(p + i));
				mode_counter++;
				once_printer[j] = (*(p + i));
				j++;
			}
		}
} //outermost for loop ends

printf("\nSo Total %d mode/modes exists\n", mode_counter);
} //done

//15
//to find perfect numbers in all and operation on them
void perfect(int *p)
{
	int sum;	   //to add the factors
	int count = 0; //to count number of perfect numbers

	for (int i = 0; i < size; i++)
	{
		sum = 0;
		for (int factor = 1; factor < *p; factor++)
		{
			if (*p % factor == 0)
				sum = sum + factor;
		}
		if (sum == *p)
		{
			printf("%d\t", *p);
			count++;
		}

		p++;
	} //end of outermost loop
	if (count == 1)
		printf("\nSo, Total %d perfect number found\n", count);
	else
		printf("\nSo, Total %d perfect numbers found\n", count);
} //done

//2.as per questions beyond Assignment
//16
//to find inverse of every number and perform operation on it

void inverse(int *p)
{
	int r;		 //for remainder
	int sum = 0; //for finding inverse

	printf("\n====INVERSE OF ALL %d NUMBERS ARE FOLLOWING====\n", size);
	for (int i = 0; i < size; i++)
	{
		sum = 0;
		while ((*(p + i)) > 0)
		{
			r = (*(p + i)) % 10;
			sum = (sum * 10) + r;
			*(p + i) = (*(p + i)) / 10;
		}
		printf("%d\t", sum);
	} //outermost loop ends
} //done

//17
//to check palindrome number in given numbers and perform some operation it
void palindrom(int *p)
{
	//number = it's inverse then number is called palindrome
	int r;			 //for remainder
	int sum = 0;	 //for finding inverse
	int count = 0;   //to count
	int value_saver; //to save the valu3e

	printf("\n====PALINDROME NUMBERS ARE FOLLOWING====\n");
	for (int i = 0; i < size; i++)
	{
		value_saver = (*(p + i));
		sum = 0;
		while ((*(p + i)) > 0)
		{
			r = (*(p + i)) % 10;
			sum = (sum * 10) + r;
			*(p + i) = (*(p + i)) / 10;
		}
		if (sum == value_saver)
		{
			printf("%d\t", sum);
			count++;
		}
	} //outermost loop ends
	if (count == 1)
		printf("\nSo, Total %d palindrome number found\n", count);
	else
		printf("\nSo, Total %d palindrome numbers found\n", count);
} //done

//18
//to check armstrong number in given number and perform operation on it
void armstrong(int *p)
{
	int digit;		 //for number of digit in a number
	int r;			 //for remainder
	float sum;		 //use in finding armstrong
	int value_saver; //to save the value which is assigned
	int count = 0;

	puts("\n====ALL ARMSTRONG NUMBERS ARE FOLLOWING====");
	for (int i = 0; i < size; i++)
	{
		value_saver = (*(p + i));
		sum = 0;
		digit = 0;

		while ((*(p + i)) > 0)
		{
			//r= *(p+i) % 10; //not required
			digit++;
			*(p + i) = (*(p + i)) / 10;
		}

		*(p + i) = value_saver;

		while (*(p + i) > 0)
		{
			r = *(p + i) % 10;
			sum = sum + pow(r, digit);
			*(p + i) = (*(p + i)) / 10;
		}
		if ((int)sum == value_saver && value_saver != 1)
		{
			printf("%d\t", value_saver);
			count++;
		}
	}
	printf("\nSo, Total number of Armstrong numbers is %d\n", count);
} //done

//19
//to find factorial
void factorial(int *p)
{
	puts("\n===FACTORIAL OF ALL NUMBERS ARE FOLLOWING====");
	for (int i = 0; i < size; i++)
	{
		printf("%02d. Factorial of %d is %d\n", i + 1, *p, single_num_factorial(*p));
		p++;
	}
} //done

//20
//to find table of all numbers
void table(int *p)
{
	for (int i = 0; i < size; i++)
	{
		printf("\n===%02d. TABLE OF %d IS FOLLOWING====\n", i + 1, *p);
		for (int j = 1; j < 11; j++)
			printf("%dX%d=%d\n", *p, j, (*p) * j);
		p++;
	}
} //done

//21
//to find occurance of any number entered by user in all numbers stored in array
void occurance(int *p)
{
	int num;
	int count = 0; //to count the number of repeatation
	puts("write the number to find occurance of it:");
	scanf("%d", &num);

	for (int i = 0; i < size; i++)
	{
		if (num == *p)
			count++;
		p++;
	}
	printf("\nTotal number of occurance of %d in all %d numbers is %d\n", num, size, count);
} //done

//22
//to find factors of all numbers of array
void factors(int *p)
{
	int count; //for counting the factors
	for (int i = 0; i < size; i++)
	{
		count = 0;
		int n = *p; //to decrease n to find the factors
		printf("===%02d. ALL FACTORS OF %d ARE FOLLOWING===", i + 1, *p);
		while (n > 0)
		{
			if (*p % n == 0)
			{
				printf("%d\t", n);
				count++;
			}
			n--;
		}
		printf("\nSo Total Number of factors of %d is %d\n", *p, count);
		p++;
	}

} //done

//23
//to find squre of all numbers of array
void squre(int *p)
{
	int squred_num[size]; //for storing number whose squre is calculated

	for (int i = 0; i < size; i++)
		squred_num[i] = pow(*(p + i), 2);

	puts("\n====SQURE OF ALL NUMBERS ARE FOLLOWING====");
	for (int i = 0; i < size; i++)
		printf("%02d. Squre of %d is %d\n", i + 1, *(p + i), squred_num[i]);
} //done

//24
//to find squre_root of all numbers of array
void squre_root(int *p)
{
	float root[size]; //for assigned squre_root of all numbers

	for (int i = 0; i < size; i++)
		root[i] = sqrt(*(p + i));

	puts("\n====SQURE ROOTS OF ALL NUMBERS ARE FOLLOWING====");
	for (int i = 0; i < size; i++)
		printf("%02d. Squre root of %02d is %05f\n", i + 1, *(p + i), root[i]);
}

//25
//to chech which number is divisible_by_n entered by user
void divisible_by_n(int *p)
{
	int n;
	puts("\nwrite the number by which you want to check divisibility of all numbers written:");
	scanf("%d", &n);

	int j = 0;			 //to count numbers divisible by n
	int divisible[size]; //to store numbers divisible by n

	for (int i = 0; i < size; i++)
	{
		if (*(p + i) % n == 0)
		{
			divisible[j] = *(p + i);
			j++;
		}
	}

	printf("\n====FOLLOWING NUMBERS ARE DIVISIBLE BY %d====", n);
	for (int i = 0; i < j; i++)
		printf("%d\t", divisible[i]);

	if (j > 1)
		printf("\nSo Total %d number is divisible by %d\n", j, n);
	else
		printf("\nSo Total %d numbers are divisible by %d\n", j, n);
} //done

//26
//to find factorial of any single number and return it
int single_num_factorial(int num) //by recursion concept
{
	if (num == 1)
		return 1; //it becomes the terminating condition of recursion
	else
		return num * single_num_factorial(num - 1);
} //done

//27
//to find custom power of all number
void custom_power(int *p)
{
	int power;
	printf("\nwrite the exponential power for all the numbers:\n");
	scanf("%d", &power);

	printf("\n===THE VALUE OF ALL NUMBER WITH POWER %d ARE FOLLOWING===\n", power);
	for (int i = 0; i < size; i++)
	{
		printf("%d to the power %d = %f\n", *p, power, pow(*p, power));
		p++;
	}
} //done

//28
//to find npr of all numbers
void npr(int *p)
{
	int r; //for r
	int q; //for factorial n-r (here *p-r)
	int n; //for factorial n (here *p)
	printf("\nwrite the value of r to find npr:\n");
	scanf("%d", &r);

	//npr = fact n/fact(n-r)
	printf("\n===npr OF FOR n=ALL %d NUMBERS AND r=%d ARE FOLLOWING===", size, r);
	for (int i = 0; i < size; i++)
	{
		n = single_num_factorial(*p);
		q = single_num_factorial(*p - r);
		printf("%d. npr for n=%d and r=%d is %d\n", i + 1, *p, r, n / q);
	}
} //done

//29
//to find ncr of all numbers
void ncr(int *p)
{
	//ncr= fact n/(fact r * fact (n-r) );
	int r; //for storing r
	int q; //for factorial n-r (here *p-r)
	int n; //for factorial n (here *p)

	printf("\nwrite the value of r to find npr:\n");
	scanf("%d", &r);

	printf("\n===ncr OF FOR n=ALL %d NUMBERS AND r=%d ARE FOLLOWING===", size, r);
	for (int i = 0; i < size; i++)
	{
		n = single_num_factorial(*p);
		q = single_num_factorial(*p - r);
		printf("%d. ncr for n=%d and r=%d is %d\n", i + 1, *p, r, n / (q * (single_num_factorial(r))));
		p++;
	}

} //done

/*
//30
//to execute all operations at once
void all_operations_at_once()
{
	//actually we have to perform all operation when all numbers written by user once. Means user don't need to write numbers every time to perform different operations
	int *ptr = ask_for_data(); //function ask_for_data() returns int* which is accepted as argument by summation. similary for below functions

	summation(ptr);
	printf("\n\n");
	sleep(1);

	sum_odd_even(ptr);
	printf("\n\n");
	sleep(1);
	fflush(stdin);

	count_odd_even(ptr);
	printf("\n\n");
	sleep(1);
	fflush(stdin);

	count_prime(ptr);
	printf("\n\n");
	sleep(1);
	fflush(stdin);

	sum_prime(ptr);
	printf("\n\n");
	sleep(1);
	fflush(stdin);

	positive_negative(ptr);
	printf("\n\n");
	sleep(1);
	fflush(stdin);

	ascending(ptr);
	printf("\n\n");
	sleep(1);
	fflush(stdin);

	descending(ptr);
	printf("\n\n");
	sleep(1);
	fflush(stdin);

	greatest(ptr);
	printf("\n\n");
	sleep(1);
	fflush(stdin);

	smallest(ptr);
	printf("\n\n");
	sleep(1);
	fflush(stdin);

	lcm(ptr);
	printf("\n\n");
	sleep(1);
	fflush(stdin);

	hcf(ptr);
	printf("\n\n");
	sleep(1);

	average(ptr);
	printf("\n\n");
	sleep(1);

	divisible_by_5(ptr);
	printf("\n\n");
	sleep(1);

	median_mode(ptr);
	printf("\n\n");
	sleep(1);

	perfect(ptr);
	printf("\n\n");
	sleep(1);

	inverse(ptr);
	printf("\n\n");
	sleep(1);
	
	palindrom(ptr);
	printf("\n\n");
	sleep(1);
	fflush(stdin);

	armstrong(ptr);
	printf("\n\n");
	sleep(1);
	fflush(stdin); 

	factorial(ptr);
	printf("\n\n");
	sleep(1);
	
	table(ptr);
	printf("\n\n");
	sleep(1);

	occurance(ptr);
	printf("\n\n");
	sleep(1);

	factors(ptr);
	printf("\n\n");
	sleep(1);

	squre(ptr);
	printf("\n\n");
	sleep(1);

	squre_root(ptr);
	printf("\n\n");
	sleep(1);

	divisible_by_n(ptr);
	printf("\n\n");
	sleep(1);

	custom_power(ptr);
	printf("\n\n");
	sleep(1);

	npr(ptr);
	printf("\n\n");
	sleep(1);

	ncr(ptr);
	printf("\n\n");
	sleep(1);

} //done
*/
// the last function all_operations_at_once() will not work because we are changing the value at address in different functions and the same address is passed to next function, so the arrays value get altered and then it is obvious to get strange result.

/*
 author ~ suraj kumar giri
 completion date ~ 28th July 2021
 purpose ~ Work provided by Anand sir
 */