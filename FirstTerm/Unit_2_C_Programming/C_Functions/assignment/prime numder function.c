#include "stdio.h"

// ÏÇáÉ áÊÍÏíÏ ÇáÃÚÏÇÏ ÇáÃæáíÉ Èíä ÇáäØÇŞ ÇáãÍÏÏ
void prime(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (i <= 1) {
        	fflush(stdin) ;
        		fflush(stdout);
            printf("number is not prime");

        }


        for (int j = 2;  j <10; j++) { // íßİí ÇáÊÍŞŞ ÍÊì ÇáÌĞÑ ÇáÊÑÈíÚí ááÚÏÏ
            if (i % j == 0) {

                break;
            }
            else {
            	fflush(stdin) ;
            		fflush(stdout);
                       printf("%d is  a prime number\n", i);
                      break;
                   }
        }


    }
}

int main() {
    int start, end;
    fflush(stdin) ;
    	fflush(stdout);
    printf("Enter the start number: ");
    fflush(stdin) ;
    	fflush(stdout);
    scanf("%d", &start);
    fflush(stdin) ;
    	fflush(stdout);
    printf("Enter the end number: ");
    fflush(stdin) ;
    	fflush(stdout);
    scanf("%d", &end);


    prime(start, end);

    return 0;
}
