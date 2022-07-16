/** quiz06-02.c
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
        
    double dailyHighTemp[] = { 63.0, 64.5, 78.1, 80.9, 76.2, 79.0, 82.1 };
    double avgHighTemp = 0.0;

    avgHighTemp = avgOfDoubles(dailyHighTemp, 7);
    printf("the average daily high for this week is %.1lf\n", avgHighTemp);

    return 0;
}