#include<stdio.h>
#include<stdlib.h>
#include <time.h>


int main()
{
int a,b,k,i,n,N,symbol;
int c,d,e,f;
FILE *fp=fopen("result.txt","w");
srand(time(NULL));
do{
printf("\n��������Ŀ����  -1�˳�����:");
scanf("%d",&N);
printf("\n���������㷶Χ  -1�˳�����:");
scanf("%d",&f);
printf("\n��������������(1.�������� 2.��������) -1�˳�����: ");
scanf("%d",&n);

switch(n)
{
case 1:
{
FILE *fp=fopen("result.txt","w");
printf("\n��ѡ���Ƿ�����˳�(1.���� 2.������) -1�˳�����: ");
scanf("%d",&e);

for(i=0;i<N;i++)
{
a=rand()%f+1;
b=rand()%f+1;
printf("%d",a);
fprintf(fp,"%d",a);
switch(e){

case 1:	{
k=rand()%4+1;
switch(k)
{
case 1:printf("+");fprintf(fp,"%c",43);break;
case 2:printf("-");fprintf(fp,"%c",45);break;
case 3:printf("*");fprintf(fp,"%c",42);break;
case 4:printf("/");fprintf(fp,"%c",47);break;
}
printf("%d=\n",b);
fprintf(fp,"%d=\n",b);
break;
}

case 2:{
k=rand()%2+1;
switch(k)
{
case 1:printf("+");fprintf(fp,"%c",43);break;
case 2:printf("-");fprintf(fp,"%c",45);break;
}
}
printf("%d=\n",b);
fprintf(fp,"%d=\n",b);
} 



}
fclose(fp);
}
break;

case 2:
{
FILE *fp=fopen("result.txt","w");
printf("\n��ѡ���Ƿ�����˳�(1.���� 2.������) -1�˳�����: ");
scanf("%d",&e);
for(i=0;i<N;i++)
{
	c=rand()%f+1;
	symbol=rand();
	if(symbol%2)
		c=-c;
	else
		c=c;
	d=rand()%f+1;
	symbol=rand();
	if(symbol%2)
		d=-d;
	else
		d=d;

printf("%d",c);
fprintf(fp,"%d",c);
switch(e){

case 1:{
k=rand()%4+1;
switch(k)
{
case 1:printf("+");fprintf(fp,"%c",43);break;
case 2:printf("-");fprintf(fp,"%c",45);break;
case 3:printf("*");fprintf(fp,"%c",42);break;
case 4:printf("/");fprintf(fp,"%c",47);break;
}
printf("%d=\n",d);
fprintf(fp,"%d=\n",d);
break;
}
case 2:{
k=rand()%2+1;
switch(k)
{
case 1:printf("+");fprintf(fp,"%c",43);break;
case 2:printf("-");fprintf(fp,"%c",45);break;
}
}
printf("%d=\n",d);
fprintf(fp,"%d=\n",d);
}
}
fclose(fp);
break;
}

}
}while(n!=-1);

}
