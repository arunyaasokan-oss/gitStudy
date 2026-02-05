//*****************************************************************************
// Copyright(c) 2026 Trenser Technology solution pvt Ltd
// Allrights are reserved
//*****************************************************************************
//
// File     :   bitoperation.c
// Summary  :
// Note     :
// Author   :   Arunya
// Date     :   04-02-2026
//************************ Include Files **************************************
#include <stdio.h>
#include <stdint.h>

//*************************Local types*****************************************

//*************************Local contants**************************************
#define SET_BIT 1
#define BITCOUNT 8

//*************************Local variables ************************************

//************************* Local functions ***********************************
static void BitOperationPrintBinary(int32_t lInput);
static void BitOperationReadInput(int32_t *lInputData1, int32_t *lInputData2);
static void BitOperationGetNotOperand(int32_t *lInputNum1);
static void BitOperationShiftOperand(int32_t *lInputData1,
                                     int32_t *lShiftPos);
static void BitOperationGetOddOrEven(int32_t *lInputNum1);
static void BitOperationShiftOperand(int32_t *lInputData1,
                                     int32_t *lShiftPos);

//*****************************************************************************
// Purpose   :Perform bitwise And wise operation
// Input     :none
// Output    :none
// Return    :none
// Note      :
//*****************************************************************************
void BitAndOperation(void)
{
    int32_t lNum1 = 0;
    int32_t lNum2 = 0;
    int32_t lResult = 0;

    BitOperationReadInput(&lNum1, &lNum2);

    lResult = lNum1 & lNum2;
    printf("%u & %u : %d \n", lNum1, lNum2, lResult);
    printf("%x & %x : %x \n", lNum1, lNum2, lResult);
    BitOperationPrintBinary(lResult);
}
//*****************************************************************************
// Purpose   :Perform bitwise And wise operation
// Input     :none
// Output    :none
// Return    :none
// Note      :
//*****************************************************************************
void BitOROperation(void)
{
    int32_t lNum1 = 0;
    int32_t lNum2 = 0;
    int32_t lResult = 0;

    BitOperationReadInput(&lNum1, &lNum2);

    lResult = lNum1 | lNum2;
    printf("%d | %d :%d \n", lNum1, lNum2, lResult);
    printf("%x | %x :%x \n", lNum1, lNum2, lResult);

    BitOperationPrintBinary(lResult);
}
//*****************************************************************************
// Purpose   :Perform bitwise NOT  operation
// Input     :none
// Output    :none
// Return    :none
// Note      :
//*****************************************************************************
void BitNotOperation(void)
{
    int32_t lNum1 = 0;
    int32_t lResult = 0;

    BitOperationGetNotOperand(&lNum1);
    lResult = ~lNum1;
    printf("!%d :%d \n", lNum1, lResult);
    printf("!%x :%x \n", lNum1, lResult);
    BitOperationPrintBinary(lResult);
}
//*****************************************************************************
// Purpose   :Perform bitwise right shift operation
// Input     :none
// Output    :none
// Return    :none
// Note      :
//*****************************************************************************
void BitRightShiftOperation(void)
{
    int32_t lNum1 = 0;
    int32_t lshftPos = 0;

    int32_t lResult = 0;

    lNum1 = 5;
    lshftPos = 2;
    lResult = lNum1 >> lshftPos;
    printf("%d >> %d = %u \n", lNum1, lshftPos, lResult);
    printf("%x >> %x = %x\n", lNum1, lshftPos, lResult);
}
//*****************************************************************************
// Purpose   :Perform bitwise left shift operation
// Input     :none
// Output    :none
// Return    :none
// Note      :
//*****************************************************************************
void BitLeftShiftOperation(void)
{
    int32_t lNum1 = 0;
    int32_t lshftPos = 0;

    int32_t lResult = 0;

    lNum1 = 5;
    lshftPos = 2;
    lResult = lNum1 >> lshftPos;
    printf("%d >> %d = %u \n", lNum1, lshftPos, lResult);
    printf("%x >> %x = %x\n", lNum1, lshftPos, lResult);
}
//*****************************************************************************
// Purpose  : To set a bit
// Input    : none
// Output   : none
// Return   : none
// Note     :
//*****************************************************************************
void BitOperationSetBit(void)
{
    int32_t lNum1 = 0;
    int32_t lPos = 0;
    int32_t lResult = 0;

    lNum1 = 4;
    lPos = 4;

    lResult = lNum1 |= (SET_BIT << lPos);
    printf("%d\n", lResult);
}
//*****************************************************************************
// Purpose  : print a number into binary
// Input    : ulInput - input a decimal number
// Output   : none
// Result   : none
// Note     :
//*****************************************************************************
static void BitOperationPrintBinary(int32_t lInput)
{
    int32_t lNoofBits = 0;
    int32_t lIndex = 0;
    int32_t lBit = 0;
    lNoofBits = sizeof(int) * BITCOUNT;

    for (lIndex = lNoofBits - 1; lIndex >= 0; lIndex--)
    {
        lBit = (lInput >> lIndex) & SET_BIT;
        printf("%d", lBit);
    }
    printf("\n");
}

//*****************************************************************************
// Purpose   : To find out a number is odd or even
// Input     : none
// Output    : none
// Return    : none
// Note      : none
//*****************************************************************************
void BitOperationCheckOddOrEven(void)
{
    int32_t lCheckNum = 0;

    BitOperationGetOddOrEven(&lCheckNum);
    if (lCheckNum & 1)
    {
        printf(" It is a odd number \n");
    }
    else
    {
        printf("It is a even number \n");
    }
}
//*****************************************************************************
// Purpose   :   Read input from user
// Input     :   none
// Output    :   none
// Return    :   none
// Note      :
//*****************************************************************************
static void BitOperationReadInput(int32_t *lInputData1, int32_t *lInputData2)
{
    *lInputData1 = 0;
    *lInputData2 = 0;

    printf("enter first number\n");
    scanf(" %d", lInputData1);
    scanf(" %d", lInputData1);

    printf("enter second number\n");
    scanf(" %d",lInputData2);
}
//*****************************************************************************
//Purpose   :   Read operand for BITWISE NOT operator
//Input     :   none
//Output    :   none
//Return    :   none
//Note      :
//*****************************************************************************
static void BitOperationGetOddOrEven(int32_t *lInputNum1)
{
    lInputNum1 = 0;
    printf("enter input to find BITWISE NOT\n");
    scanf(" %d", lInputNum1);
}
//*****************************************************************************
// Purpose   :   Read operand for shift operation
// Input     :
// Output    :
// Return    :
// Note      :
//*****************************************************************************
static void BitOperationShiftOperand(int32_t *lInputData1,
                                     int32_t *lShiftPos)
{
    *lInputData1 = 0;
    *lShiftPos = 0;

    printf("enter a number\n");
    scanf(" %d", lInputData1);

    printf("enter the position to shift\n");
    scanf(" %d", lShiftPos); 
}