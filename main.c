//*****************************************************************************
// Copyright(c) 2026 TrenserTechnology solution Pvt Ltd
// All rights are reserved
//*****************************************************************************
//
// File     :   main.c
// summary  :   perform bit operations
// Note     :   
// Author   :   Arunya
// Date     :   04-02-2026

//**************** Include files **********************************************
#include <stdio.h>
#include "bitoperation.h"

//**************** Local types ************************************************

//**************** Local constants ********************************************

//**************** Local variables ********************************************

//**************** Local Functions ********************************************

int main()
{
    void (*pOperation)(void);

    pOperation = BitAndOperation;
    pOperation();
    
    pOperation = BitOROperation;
    pOperation();

    pOperation = BitRightShiftOperation;
    pOperation();
    pOperation = BitLeftShiftOperation;
    pOperation();

    return 1;
}