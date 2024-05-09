#include <stdio.h>
#include <stdlib.h>
  int main (){
    float math,English,Chemistry,History,khmer,physic,biology,total,average;
    char grande;

    printf("\033[31menter the Chemistry = \033[0m");scanf("%d",&Chemistry);
    printf("enter the Histrory = ");scanf("%f",&History);
    printf("enter the khmer = ");scanf("%f",&khmer);
    printf("enter the physic = ");scanf("%f",&physic);
    printf("enter the biology = ");scanf("%f",&biology);
    printf("enter the math = ");scanf("%f",&math);
    printf("enter the Englsih = ");scanf("%f",&English);
    total=Chemistry+History+khmer+physic+biology+math+English;
    printf("total = %.2f",total);
    printf("\n");
	  average=total/7;
    printf("average= %.2f",average);
    printf("\n");
     grande=(average<=100&&average>90)? 'A'
          :(average<=90&&average>80)? 'B'
          :(average<=80&&average>70)? 'C'
          :(average<=70&&average>60)? 'D'
          :(average<=60&&average>50)? 'E'
          :'F';
          printf("Chemistry\tHistroy\tkhmer\tphysic\tbiology\tmath\tEnglsih\ttotal\taverage\tgrande");
          printf("\t\t%.2f\t\t\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%c",Chemistry,History,khmer,physic,biology,math,English,total,average,grande);
	}
