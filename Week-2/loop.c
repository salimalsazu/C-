#include<stdio.h>


int main (){
  
int cnt =0;  
  
  
for(int i = 0; i < 3; i++){
  // cnt++ ;
       for (int j = 0; j < 6; j++){
        // printf("%d ", j +1);

             for (int k = 0; k < 10; k++){
            cnt++;
           // printf("%d ", k +1);
             }

}

printf("\n");

}
  
  
  printf("Total count: %d", cnt);
  
  return 0;

  
}