#include <stdio.h>

long int getNumber();
long unsigned bitwiseAnd(long unsigned num1, long unsigned num2);
int countBits(long unsigned num);
void printMetadata(long unsigned num1,long unsigned num2,long unsigned num,int count);

int main() {

    //define
    long unsigned num1,num2,num;
    int count;

    //body
    num1 = getNumber();
    num2 = getNumber();
    num = bitwiseAnd(num1,num2);
    count = countBits(num );

    //some prints
    printMetadata(num1,num2,num,count);
}
long int getNumber()
{
    /**
     * function to get a number from user
     * @return an unsigned long
     */
    unsigned long num;
    printf("please enter a positive int number:");
    scanf("%lu",&num);
    return num;
}
long unsigned bitwiseAnd(long unsigned num1, long unsigned num2)
{
    /**
     * does a bitwise addition between numbers
     * if num1 a 4 (100 in binary) and num2 is 7 (111 in binary) num1 & num2 = 4 (100 in binary)
     * @param num1 an unsigned long
     * @param num2 an unsigned long
     * @return an unsigned long, the bitwise sum of the two numbers
     **/
    return num1 & num2;
}
int countBits(long unsigned num)
{
    /**
     * function that counts the bits in the number that are "on" (=1)
     * @param num an unsigned long
     * @return the count of the bits
     **/
    unsigned int count = 0;
    while (num) {
        count = count + (num & 1);
        num >>= 1;
    }
    return count;
}

void printMetadata(long unsigned num1,long unsigned num2,long unsigned num,int count)
{
    /**
     * this function prints the metadata of projects
     * @param num1 - an unsigned long
     * @param num2 - an unsigned long
     * @param num - an unsigned long, bitwise sum of num1 & num2
     * @param count - int, number of "on" bits in num
     */
    printf("\n");
    printf("first number is %lu\n",num1);
    printf("second number is %lu\n",num2);
    printf("bitwise sum of numbers is %lu\n",num);
    printf("number of 'on' bits in number is %d",count);
}