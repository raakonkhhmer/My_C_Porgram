#include<stdio.h>
	int main(){
		int score1,score2,score3,score4,score5;
		printf("Enter score1 = ");scanf("%d",&score1);
		printf("Enter score2 = ");scanf("%d",&score2);
		printf("Enter score3 = ");scanf("%d",&score3);
		printf("Enter score4 = ");scanf("%d",&score4);
		printf("Enter score5 = ");scanf("%d",&score5);
		
		float total= score1+score2+score3+score4+score5;
		float average= total/5;
	    printf("total= %.3f",total);
		printf("average=%.3f",average);
		
		printf("\tscore1\tscore2\tscore3\tscore4\tscore5");
		printf("\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f",score1,score2,score3,score4,score5);
		
		
		return 0;
			}
