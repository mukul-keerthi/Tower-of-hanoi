/******************************************************************************
Tower of Hanoi implementation
Mukul 
25/06/19

*******************************************************************************/

#include <stdio.h>

void towers(int, char, char, char);

int main()
{
    int num; //Number of disks in the tower
    printf("Enter number of disks\n");
    scanf("%d", &num);
    printf("The sequence of moves involved in tower are\n");
    towers(num, 'A', 'C', 'B'); //Sequence of moving disks

    return 0;
}

void towers(int num, char source, char aux, char dest) {
    
    if (num == 1) {
        
        printf("\n Move disk 1 from tower %d from disk %c to disk %c",num, source, dest);
        return;
    }
    
    towers(num-1, source, aux, dest); //Move the next disc
    
    printf("\n Move disk %d from tower %c to tower %c",num, source, dest);
    
    towers(num-1, aux, dest,source);
    
    
}
