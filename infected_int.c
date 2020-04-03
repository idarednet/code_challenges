/* Code Challenge
 * ==============
 * Given an integer, return boolean if the integer is infected or not
 * For an integer to be infected, it must be seperated into its digit places,
 * squared and added continuously.  If the result equals 1, then the int
 * is infected
 * i.e. 19 -> 1^2 + 9^2 = 82 -> 8^2 + 2^2 = 68 -> 6^2 + 8^2 = 100 -> 1^2 + 0^2 + 0^2 = 1 -> 19 IS AN INFECTED INT
#include <stdio.h>                                                                              
                                                                                                
typedef int infected;
#define true 1
#define false 0

infected getInfectedness(int n){
    int o = n;

    while (n != 1) {
        int numDigits = 0;

        while(o!=0) {
            numDigits++;
            o=o/10;
        }

        int digits[numDigits +1];
        memset(digits, 0, sizeof(digits));
    
        o = 0;
        while (n > 0) {
            digits[o]= n % 10;
            n /= 10;
            o++;
        }
        for (int i = 0; i < o; i++)
            n = n + digits[i] * digits[i];
    }
    return true;
}

int main() {
    infected haveVirus;
    if((haveVirus = getInfectedness(19)) == true)
        printf("Infected!\n");
    else
        printf("Not Infected\n");
    return haveVirus;
}
