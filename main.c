#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
int main(void)
{ 
char a[100] = {'0'};
char * name="";
FILE *fp= NULL;
//获取名字
fp = popen("bash mingzi.sh", "r");
  	if (fp == NULL){
		printf("popen error!\n");
		return 1;
	}
	while (fgets(a, sizeof(a), fp) != NULL){
		printf("%s", a);
		name=a;
	}
	pclose(fp);
//！获取名字
//获取学号
char * xuehao="";
char b[100] = {'0'};
fp = popen("bash xuehao.sh", "r");
  	if (fp == NULL){
		printf("popen error!\n");
		return 1;
	}
	while (fgets(b, sizeof(b), fp) != NULL){
		printf("%s", b);
		xuehao=b;
	}
	pclose(fp);
//！获取学号
//输入语文成绩
int y=0;
char * yuwen="";
char c[100] = {'0'};
char yuwei;
printf("语文成绩");
printf("\n");
fp = popen("bash shuzi.sh", "r");
  	if (fp == NULL){
		printf("popen error!\n");
		return 1;
	}
	while (fgets(c, sizeof(c), fp) != NULL){
		printf("%s", c);
		yuwen=c;
	}
	y=atoi(yuwen);
	pclose(fp);
//！输入语文成绩
//判断语文成绩等级
char * ydengji="";
char p[25];
sprintf(p,"bash dengji.sh %d",y);
fp = popen(p, "r");
	if (fp == NULL){
		printf("popen error!\n");
		return 1;
	}
	while (fgets(c, sizeof(c), fp) != NULL){
		printf("%s", c);
		ydengji=c;
	}
	pclose(fp);
	//!判断语文成绩等级
//输入数学成绩
int m=0;
char * maths="";
char d[100] = {'0'};
printf("\n");
printf("数学成绩");
printf("\n");
fp = popen("bash shuzi.sh", "r");
  	if (fp == NULL){
		printf("popen error!\n");
		return 1;
	}
	while (fgets(d, sizeof(d), fp) != NULL){
		printf("%s", d);
		maths=d;
	}
	m=atoi(maths);
	pclose(fp);
//！输入数学成绩
//判断数学成绩等级
char * mdengji="";
sprintf(p,"bash dengji.sh %d",m);
fp = popen(p, "r");
	if (fp == NULL){
		printf("popen error!\n");
		return 1;
	}
	while (fgets(d, sizeof(d), fp) != NULL){
		printf("%s", d);
		mdengji=d;
	}
	pclose(fp);
	//!判断数学成绩等级
//输入英语成绩
int E=0;
char * English="";
char e[100] = {'0'};
printf("\n");
printf("英语成绩");
printf("\n");
fp = popen("bash shuzi.sh", "r");
  	if (fp == NULL){
		printf("popen error!\n");
		return 1;
	}
	while (fgets(e, sizeof(e), fp) != NULL){
		printf("%s", e);
		English=e;
	}
	E=atoi(English);
	pclose(fp);
//！输入英语成绩
//判断英语成绩等级
char * edengji="";
sprintf(p,"bash dengji.sh %d ",E);
fp = popen(p, "r");
	if (fp == NULL){
		printf("popen error!\n");
		return 1;
	}
	while (fgets(e, sizeof(e), fp) != NULL){
		printf("%s", e);
		edengji=e;
	}
	pclose(fp);
	//!判断英语成绩等级
//输入科学成绩
int S=0;
char * science="";
char f[100] = {'0'};
printf("\n");
printf("科学成绩");
printf("\n");
fp = popen("bash shuzi.sh", "r");
  	if (fp == NULL){
		printf("popen error!\n");
		return 1;
	}
	while (fgets(f, sizeof(f), fp) != NULL){
		printf("%s", f);
		science=f;
	}
	S=atoi(science);
	pclose(fp);
//！输入科学成绩
//判断科学成绩等级
char * sdengji="";
sprintf(p,"bash dengji.sh %d ",S);
fp = popen(p, "r");
	if (fp == NULL){
		printf("popen error!\n");
		return 1;
	}
	while (fgets(f, sizeof(f), fp) != NULL){
		printf("%s", f);
		sdengji=f;
	}
	pclose(fp);
	//!判断科学成绩等级
//输入历史成绩
int h=0;
char * history="";
char g[100] = {'0'};
printf("\n");
printf("历史成绩");
printf("\n");
fp = popen("bash shuzi.sh", "r");
  	if (fp == NULL){
		printf("popen error!\n");
		return 1;
	}
	while (fgets(g, sizeof(g), fp) != NULL){
		printf("%s", g);
		history=g;
	}
	h=atoi(history);
	pclose(fp);
//！输入历史成绩
//判断历史成绩等级
char * hdengji="";
sprintf(p,"bash dengji.sh %d ",h);
fp = popen(p, "r");
	if (fp == NULL){
		printf("popen error!\n");
		return 1;
	}
	while (fgets(g, sizeof(g), fp) != NULL){
		printf("%s", g);
		hdengji=g;
	}
	
	pclose(fp);
	//!判断历史成绩等级
//输出成绩单
printf("\n");
printf("希望小学同学的成绩单");
printf("\n");
printf("姓名：%s\n",name);
printf("学号：%s\n",xuehao);
printf("语文成绩%d，成绩等级：%s\n",y,ydengji);
printf("数学成绩%d，成绩等级：%s\n",m,mdengji);
printf("英语成绩%d，成绩等级：%s\n",E,edengji);
printf("科学成绩%d，成绩等级：%s\n",S,sdengji);
printf("历史成绩%d，成绩等级：%s\n",h,hdengji);
int sum=0;
sum=y+m+E+S+h;
printf("总分为：%d\n",sum);


	
}














































































