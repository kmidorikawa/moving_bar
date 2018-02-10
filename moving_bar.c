 

#include <stdio.h>

#define WIDTH 10

#define ABS(x) ( (x)>0 ? (x):-(x) )

void print_bar( int num ){

    char str[WIDTH+1]; 
//    for(int i=0; i< WIDTH; i++) str[i] = ' ';
//   for(int i=0; i< num; i++)   str[i] = '#';
    for(int i=0; i< num; i++)   printf("#");
    for(int i=0; i< WIDTH - num; i++)   printf(" ");

    printf( "\r", str  );
    fflush( stdout );
} 

void wait(void){
    for( int  j = 0; j < 5000 ; j++ ){
        for( int  k = 0; k < 10000 ; k++ ) {

        }
    }
}


int main(){

    while(1){
        for( int  i = 0; i<WIDTH*2; i++ ){
            wait();
            print_bar( ABS( WIDTH-i) ) ;
        }
    }
    return 0;
}
