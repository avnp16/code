//This C program is used to print on the screen without using a semicolon.

#include<stdio.h>

void main() {

    //Method One
    if(printf("Hello world"))
    {
    } 
    
    //Method Two
    while(!printf("Hello world"))
    {
    }
    
    //Method Three
    switch(printf("Hello world"))
    {
    }

}