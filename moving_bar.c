 

#include <stdio.h>

#define WIDTH 10

#define ABS(x) ( (x)>0 ? (x):-(x) )

void print_bar( int num ){

    char str[WIDTH+1]; 
    int i;

    for (i = 0;   i < num;   i++) str[i] = '#';
    for (i = num; i < WIDTH; i++) str[i] = ' ';
    
    str[WIDTH] = '\0';
    printf( "\r%s", str  );
    fflush( stdout );
} 

void wait(void){
    int j, k;

    for( j = 0; j < 5000 ; j++ ){
        for( k = 0; k < 10000 ; k++ ) {

        }
    }
}


int main(){

    int i;
    while(1){
        for( i = 0; i<WIDTH*2; i++ ){
            wait();
            print_bar( ABS( WIDTH-i) ) ;
        }
    }
    return 0;
}
