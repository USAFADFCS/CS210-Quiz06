/** quiz06-01.c
* ===========================================================
*    Name: 
* Section:
* Purpose: Quiz 6
* ===========================================================
*/

#include <stdio.h>

// YOUR CODE GOES HERE


// THIS CODE IS PROVIDED FOR YOU -- DO NOT TOUCH!
int main(void){
        
    int numHours = 0;
    int numMins = 0;
    int totalMinutes = 0;

    printf("enter a number of minutes to be converted: ");
    scanf("%i", &totalMinutes);

    hoursMinutes(totalMinutes, &numHours, &numMins);
    printf("%i minutes is equivalent to ", totalMinutes);
    printf("%i hours, and %i minutes \n", numHours, numMins);
    
    return 0;
}