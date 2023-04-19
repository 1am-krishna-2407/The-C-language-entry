#include<stdio.h>
int main(){
  FILE * file;
  if (file= fopen("hello.txt", "w")){
    if (fputs("Swami Vivekananda ...",file)>=0){
        printf("String written to the file successfully. ");
    }

  }
  fclose(file);
  return 0;
}
// create a file name hello.txt
