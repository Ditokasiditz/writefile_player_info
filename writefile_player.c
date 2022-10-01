#include<string.h>
#include<stdio.h>
int main()
{
	int i;
	struct player {
		char name[50];
		int level;
		int score;
	};
	struct  player p[10];
	for (i = 0; i < 5; i++){
		printf("player %d\n",i+1);
		printf("enter name:");  scanf("%s",p[i].name);
		printf("enter level:"); scanf("%d",&p[i].level);
		printf("enter score:"); scanf("%d",&p[i].score);
	}

	FILE*fp;
	fp = fopen("fileplayerinfor.txt","w");
	for (i = 0; i < 5; i++){
		fprintf(fp,"name : %s\t", p[i].name);
		fprintf(fp,"level : %d\t", p[i].level);
		fprintf(fp,"score : %d\n", p[i].score);
	}
	fclose(fp);
	return 0;
}