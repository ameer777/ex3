#include<stdio.h>
#include<stdbool.h>
#include"libraryFuction.h"
#define LINE 256
#define WORD 30

int getlin(char s[]){

  printf("please enter a string : \n");
  scanf("%s",s);
  int count = 1;
  for (int i = 0; s[i]; i++){
      if(*(s+i) == '\n')
      count++;
    }
    if(count > 256) return -1;
  return count;
}


int getword(char w[]){

    printf("please enter a string : \n");
    scanf("%s",w);
    int count=1;
    for (int i = 0; w[i] != '\0' ; i++){
        if((*(w+i) == '\n' || *(w+i) == ' ' || *(w+i) == '\t') &&(*(w+i+1) != '\n'
        && *(w+i+1) != ' ' && *(w+i+1) != '\t')){
          count++;
        }
    } 
    return count;
}

  int substring(char *str1, char *str2){
      if(str1 == NULL || str2 == NULL) {
          printf("there is a null str !");
          return 0;
      }
      bool flag = false;
      for(int i = 0; str1[i] ; i++){
          if(*(str1 + i) == *str2){
              int m = i+1;
          for(int j = 1; str2[j] ; j++){
              if(*(str1 + m) == *(str2+ j))
                flag = true;
              else{
                  flag = false;
                  break;
              } 
              m++;
          }
      }
          if(flag == true) return 1;
      }
      return -0;
  }
  
  int similar(char s[], char t[], int n){
      if(n < 0) {
          printf("n cant be < 0 !");
          return 0;
      }
      int index_n = 0;
      int j = 0;
      if(n == 0 && substring(t,s)) return 1;
      for(int i = 0; (*(t+j) != '\0') || (*(s+i) != '\0') ;i++){
          if(*(t+j)==*(s+i)) j++;
          else index_n++;
      }
      if(index_n == n) return 1;
      return 0;
  }
  
  void print_lines(char *str){
     char line[LINE];
    while(getlin(line))
    {
        if(substring(line,str)){
            puts(line);
        }
    }
      
  }
  
  void print_similar_words(char *str){
      char word[WORD];
      while(getword(word))
    {
        if(similar(word,str,1))
        {
            puts(word);
        }
     }
      
  }
  
  
  
  
