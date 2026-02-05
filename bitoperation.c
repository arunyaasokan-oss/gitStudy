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

//*************************Local contants*************************************

//*************************Local variables ************************************

//************************* Local functions ***********************************

//*****************************************************************************
//Purpose   :Perform bitwise And wise operation
//Input     :none  
//Output    :none
//Return    :none
//Note      :
//*****************************************************************************
void BitAndOperation(void)
{
    uint32_t ulNum1 = 0;
    uint32_t ulNum2 = 0;
    uint32_t ulResult = 0;

    ulNum1 = 5;
    ulNum2 = 4;

    ulResult = ulNum1 & ulNum2;
    printf("a & b :%u \n",ulResult);
}
//*****************************************************************************
//Purpose   :Perform bitwise And wise operation
//Input     :none  
//Output    :none
//Return    :none
//Note      :
//*****************************************************************************
void BitOROperation(void)
{
    uint32_t ulNum1 = 0;
    uint32_t ulNum2 = 0;
    uint32_t ulResult = 0;

    ulNum1 = 5;
    ulNum2 = 4;

    ulResult = ulNum1 & ulNum2;
    printf("a & b :%u \n",ulResult);
}
//*****************************************************************************
//Purpose   :Perform bitwise NOT  operation
//Input     :none  
//Output    :none
//Return    :none
//Note      :
//*****************************************************************************
void BitNotOperation(void)
{
    uint32_t ulNum1 = 0;
    
    uint32_t ulResult = 0;

    ulNum1 = 5;

    ulResult = ~ulNum1 ;
    printf("!a:%u \n",ulResult);
}
//*****************************************************************************
//Purpose   :Perform bitwise right shift operation
//Input     :none  
//Output    :none
//Return    :none
//Note      :
//*****************************************************************************
void BitRightShiftOperation(void)
{
    uint32_t ulNum1 = 0;
    uint32_t ulshftPos = 0; 

    uint32_t ulResult = 0;

    ulNum1 = 5;
    ulshftPos = 2;
    ulResult = ulNum1 >> ulshftPos ;
    printf("%d >> %d = %u \n",ulNum1,ulshftPos,ulResult);
}
//*****************************************************************************
//Purpose   :Perform bitwise left shift operation
//Input     :none  
//Output    :none
//Return    :none
//Note      :
//*****************************************************************************
void BitLeftShiftOperation(void)
{
    uint32_t ulNum1 = 0;
    uint32_t ulshftPos = 0; 

    uint32_t ulResult = 0;

    ulNum1 = 5;
    ulshftPos = 2;
    ulResult = ulNum1 >> ulshftPos ;
    printf("%d >> %d = %u \n",ulNum1,ulshftPos,ulResult);
}