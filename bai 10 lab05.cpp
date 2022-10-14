#include <stdio.h>
 
int main(void) {
    int num1 = 88;
    float num2 = 10.8;
    
    //chuy?n int sang string trong C
    char target1[100];
    sprintf(target1, "%d\n", num1);
    printf("%s", target1);

    //chuy?n float sang string trong C
    char target2[100];
    sprintf(target2, "%f\n", num2);
    printf("%s", target2);

    return 0;
}


