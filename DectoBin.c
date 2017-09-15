/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DectoBin.c
 * Author: cmcy
 *
 * Created on September 15, 2017, 11:47 AM
 */

#include <stdio.h>
 
int convert(int);
 
int main()
{
    int dec, bin;
 
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    bin = convert(dec);
    printf("The binary equivalent of %d is %d.\n", dec, bin);
 
    return 0;
}
 
 /* Function to convert a decimal number to binary number */
int convert(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * convert(dec / 2));
    }
}