#include<stdio.h>
#include<conio.h>
#define n 100
#include<math.h>
#include<stdlib.h>
float s1=0,poy1,poy2,s2=0,k1,k2,poly3;
float j=1,k=0;
struct node
{
	char val[2];
	int pow1;
	int coeff;
	struct node *link;
}*head=NULL,*temp,*head1,*nr1;

int con;
void display()
{
	struct node *temp1=head;
	int j;
	printf("\n\n");
	for(;temp1!=NULL;temp1=temp1->link)
	{
		
	printf("%c",temp1->val[0]);
	printf("%d*",temp1->coeff);
	printf("(%c",temp1->val[1]);
	printf("^%d)",temp1->pow1);
}
	
	if(con>0)
	printf("+%d = 0",con);	
	else if(con==0)
	printf("+%d = 0",con);
	else
	printf("%d = 0",con);

}

void insert()
{
	
	char a,c1,c2;
	int b,co;
	struct node *inser;
	inser=(struct node *)malloc(sizeof(struct node));
	if(head==NULL)
	{
		c2=getchar();
	printf("enter your character (+ or -): ");
	scanf("%c",&a);
	inser->val[0]=a;
	printf("enter your co-efficient: ");
	scanf("%d",&co);
	inser->coeff=co;
	c2=getchar();
	printf("enter your character: ");
	scanf("%c",&c1);
	inser->val[1]=c1;
	printf("enter your power: ");
	scanf("%d",&b);
	inser->pow1=b;
	inser->link=NULL;
	head=inser;
}
else
{
	c2=getchar();
	printf("enter your character (+ or -): ");
	scanf("%c",&a);
	inser->val[0]=a;
	printf("enter your co-efficient: ");
	scanf("%d",&co);
	inser->coeff=co;
	c2=getchar();
	printf("enter your character: ");
	scanf("%c",&c1);
	inser->val[1]=c1;
	printf("enter your power: ");
	scanf("%d",&b);
	inser->pow1=b;
	inser->link=head;
	head=inser;
}
}

void diff()
{
	head1=head;
	struct node *nr;
	nr=(struct node *)malloc(sizeof(struct node));
	if(head1->pow1>0 && head1->val[0]=='+')
	{
		nr->pow1=(head1->pow1)-1;
		nr->val[0]='+';
	}
	else if(head1->pow1<0 && head1->val[0]=='-')
		{
			nr->pow1=(head1->pow1)-1;
			nr->val[0]='+';
		}
	else if(head1->pow1>0 && head1->val[0]=='-')
		{
			nr->pow1=(head1->pow1)-1;
			nr->val[0]='-';
		}
		else
		{
			nr->pow1=(head1->pow1)-1;
			nr->val[0]='-';
		}
		nr->coeff=((head1->coeff)*(head1->pow1));
		nr->link=head1->link;
		nr->val[1]=head1->val[1];
		nr->link=NULL;
		if(nr1==NULL)
		nr1=nr;
		else
		{
			nr->link=nr1;
			nr1=nr;
				}		
}


void display1()
{
	struct node *temp2=nr1->link;
	printf("\n\n");
	for(;temp2!=NULL;temp2=temp2->link)
	{
	//if(temp2->val[0]=='+' && temp2->pow1<0)
	//{
//	printf("-");
//}
//else if(temp2->val[0]=='-' && temp2->pow1>0)
//{
	//printf("+");
//}
    //if(temp2->val[0]=='+' && temp2->pow1<0)
	//printf("-");
    // //if(temp2->val[0]=='-' && temp2->pow1>0)
	//printf("-");
	//else if(temp2->val[0]=='+' && temp2->pow1>0)
//	printf("+");
//	if(!((temp2->pow1<0 && temp2->val[0]>0) || (temp2->pow1>0 && temp2->val[0]>0)))
//else
//{
	printf("%c",temp2->val[0]);
//}

//	else
//	printf(" ");
	printf("%d*",temp2->coeff);
	printf("(%c",temp2->val[1]);
	printf("^%d)",temp2->pow1);
}
}

void pos_int()
{   //k=0 j=1
	int flag=0,flag2=0,co1,co2;
	k=0,j=1;
	do
	{
	s1=0;s2=0;
	flag=0;
	struct node *temp1=head,*temp2=head;
	for(;temp1!=NULL;temp1=temp1->link)
	{
//		printf("\n%f\n",k);
		poy1=temp1->pow1;
		co1=temp1->coeff;
//		printf("%f\n",poy1);
		if(temp1->val[0]=='+')
		{
		s1+=(pow(k,poy1)*co1);
//		printf("%f\n",s1);
	}
		else
		{
		s1=s1-(pow(k,poy1)*co1);
//		printf("%f\n",s1);
	}
}
		s1=s1+con;
//		printf("%f\n",s1);
		//s1+=pow(j,poy1);
//	printf("\n\n%f",s1);
	for(;temp2!=NULL;temp2=temp2->link)
	{
		
//		printf("%f\n",j);
		poy2=temp2->pow1;
		co2=temp2->coeff;
//		printf("%f\n",poy2);
		if(temp2->val[0]=='+')
		{
		s2+=(pow(j,poy2)*co2);
//		printf("%f\n",s2);
	}
		else
	{
			s2=s2-(pow(j,poy2)*co2);
//		printf("%f\n",s2);
		}
	}
		s2=s2+con;
	//	printf("%f\n",s2);
		//s1+=pow(j,poy1);
//	printf("\n\n%f",s2);
	if((s1>0 && s2>0) || (s1<0 && s2<0))
	{
		j++;
		k++;
		flag=0;
		temp1=NULL;
		temp2=NULL;
		flag2++;
	}
	else
	{
		flag=1;
		printf("[%f , %f]\n",k,j);
		break;
	}
	if(flag2==10)
	{
		printf("\n\ntry negative section for finding root....\n\n");
	break;
}
}while(flag!=1);
}


//negative section start.............

void neg_int()
{   //k=0 j=1
	int flag=0,flag2=0,co3,co4;
	k=0,j=-1;
	do
	{
	s1=0;s2=0;
	flag=0;
	struct node *temp1=head,*temp2=head;
	for(;temp1!=NULL;temp1=temp1->link)
	{
		poy1=temp1->pow1;
		co3=temp1->coeff;
		if(temp1->val[0]=='+')
		s1+=(pow(k,poy1)*co3);
		else
		s1=s1-(pow(k,poy1)*co3);
	}
		s1=s1+con;
		//s1+=pow(j,poy1);
	//printf("\n\n%f",s1);
	for(;temp2!=NULL;temp2=temp2->link)
	{
		poy2=temp2->pow1;
		co4=temp2->coeff;
		if(temp2->val[0]=='+')
		s2+=(pow(j,poy2)*co4);
		else
		s2=s2-(pow(j,poy2)*co4);
	}
		s2=s2+con;
		//s1+=pow(j,poy1);
//	printf("\n\n%f",s2);
	if((s1>0 && s2>0) || (s1<0 && s2<0))
	{
		j--;
		k--;
		flag=0;
		temp1=NULL;
		temp2=NULL;
		flag2++;
	}
	else
	{
		flag=1;
		printf("[%f , %f]",j,k);
		k1=k;
		k2=j;
		break;
	}
	if(flag2==10)
	{
		printf("\n\ntry positive section for finding root....\n\n");
	break;
}
}while(flag!=1);
}

void pro_root()
{
	int h=0;
	float p;
	//k=0 j=1
	float s6;
	float co3;
do
{
	s6=0.000000;
	struct node *temp1=head,*temp2=head;
	p=(j+k)/2;
//	printf("%f   %f",s6,p);
	for(temp1=head;temp1!=NULL;temp1=temp1->link)
	{
		co3=(float)temp1->coeff;
		poly3=(float)temp1->pow1;
		if(temp1->val[0]=='+')
		s6+=(pow(p,poly3)*co3);
		else
		s6=s6-(pow(p,poly3)*co3);
	}
		s6=s6+(float)con;
		h++;
//	printf("\n\n%f",s6);
	if(s6>0)
	j=p;
	else
	k=p;
printf("[%f , %f]\n\n",k,j);
temp1=NULL;
if(h==2)
{
	break;
}
}while((k1==k2)||(s6==0.000000)||(h!=2));
	//printf("\n\n%d",s2);
}



void pro1_root()
{
	int h=0;
	float p;
	//k=0 j=1  k1>k2
	float s6;
	float co3;
do
{
	s6=0.000000;
	struct node *temp1=head,*temp2=head;
	p=(k1+k2)/2;
//	printf("%f   %f",s6,p);
	for(temp1=head;temp1!=NULL;temp1=temp1->link)
	{
		co3=(float)temp1->coeff;
		poly3=(float)temp1->pow1;
		if(temp1->val[0]=='+')
		s6+=(pow(p,poly3)*co3);
		else
		s6=s6-(pow(p,poly3)*co3);
	}
		s6=s6+(float)con;
		h++;
//	printf("\n\n%f",s6);
	if(s6>0)
	k1=p;
	else
	k2=p;
printf("[%f , %f]\n\n",k2,k1);
//temp1=NULL;
if(h==2)
{
	break;
}
}while((k1==k2)||(s6==0.000000)||(h!=2)) ;
	//printf("\n\n%d",s2);
}


////////////////////////////////////////////////////////////////////////////////////////

void fx_pos()
{
	printf("[%f , %f]",j,k);
	
	j=j-0.000001;
	int h1=0;
do
{
	int co1,co2;
	s1=0;s2=0;
	float sdl=0.000000;
	struct node *temp1=head,*temp2=nr1;
	for(;temp1!=NULL;temp1=temp1->link)
	{
//		printf("\n%f\n",k);
		poy1=temp1->pow1;
		co1=temp1->coeff;
//		printf("%f\n",poy1);
		if(temp1->val[0]=='+')
		{
		s1+=(pow(j,poy1)*co1);
//		printf("%f\n",s1);
	}
		else
		{
		s1=s1-(pow(j,poy1)*co1);
//		printf("%f\n",s1);
	}
}
		s1=s1+con;
//		printf("%f\n",s1);
		//s1+=pow(j,poy1);
//	printf("\n\n%f",s1);
	for(;temp2!=NULL;temp2=temp2->link)
	{
		
//		printf("%f\n",j);
		poy2=temp2->pow1;
		co2=temp2->coeff;
//		printf("%f\n",poy2);
		if(temp2->val[0]=='+')
		{
		s2+=(pow(j,poy2)*co2);
//		printf("%f\n",s2);
	}
		else
	{
			s2=s2-(pow(j,poy2)*co2);
//		printf("%f\n",s2);
		}
	}
		s2=s2+con;
	//	printf("%f\n",s2);
		//s1+=pow(j,poy1);
		sdl=j-(s1/s2);
		printf("%f\n",sdl);
		j=sdl;
		h1++;
		if(h1==25)
		break;
}while(h1!=25 || s1!=0.000000 || s1==s2);	
//	
}



////////////////////////////////////////////////////////////////////////////////////

void fx_neg()
{
	k2=k2+0.000001;
	int h1=0;
do
{
	int co1,co2;
	s1=0;s2=0;
	float sdl=0.000000;
	struct node *temp1=head,*temp2=nr1;
	for(;temp1!=NULL;temp1=temp1->link)
	{
//		printf("\n%f\n",k);
		poy1=temp1->pow1;
		co1=temp1->coeff;
//		printf("%f\n",poy1);
		if(temp1->val[0]=='+')
		{
		s1+=(pow(k2,poy1)*co1);
//		printf("%f\n",s1);
	}
		else
		{
		s1=s1-(pow(k2,poy1)*co1);
//		printf("%f\n",s1);
	}
}
		s1=s1+con;
//		printf("%f\n",s1);
		//s1+=pow(j,poy1);
//	printf("\n\n%f",s1);
	for(;temp2!=NULL;temp2=temp2->link)
	{
		
//		printf("%f\n",j);
		poy2=temp2->pow1;
		co2=temp2->coeff;
//		printf("%f\n",poy2);
		if(temp2->val[0]=='+')
		{
		s2+=(pow(k2,poy2)*co2);
//		printf("%f\n",s2);
	}
		else
	{
			s2=s2-(pow(k2,poy2)*co2);
//		printf("%f\n",s2);
		}
	}
		s2=s2+con;
	//	printf("%f\n",s2);
		//s1+=pow(j,poy1);
		sdl=k2-(s1/s2);
		printf("%f\n",sdl);
		k2=sdl;
		h1++;
		if(h1==25)
		break;
}while(h1!=25 || s1!=0.000000 || s1==s2);

//		
}


main()
{
	struct node *temp2=head;
	int g,m=0,l,y2=0;
	char y1;
	printf("enter your equation length for unknown (in x terms count) : ");
	scanf("%d",&g);
	head1=head;
	while(m<g)
	{
		insert();
		m++;
		diff();
	}
	diff();
	printf("enter your constants: ");
	scanf("%d",&con);
	printf("\nyour equation is: ");
	if(m==0 && con==0)
	{
	display();
	printf("\n\nroots and root intervals are: ");
	printf("\n[0.000000 , 0.000000]\n\n");
	goto end;
}
	else if(m==0 && (con>0 || con<0))
	{
	if(con>0)
	printf("\n+%d != 0",con);
	else
	printf("\n%d != 0",con);
	printf("\n\nroots and roots interval are: ");
	printf("\n[%d.000000 , %d.000000]",con,con);
	goto end;
}
	else
	{
	display();
	printf("\n\ndifferative equation is:\n"); 
	display1();
	}
	do
	{
	printf("\n\n");
	printf("your choice:\n");
	printf("1.positive root interval\n");
	printf("2.negative root interval\n");
	printf("3.for exit any other value enter \n");
	printf("enter your choice: ");
	scanf("%d",&l);
	if(l==1)
	{
	printf("positive interval: \n\n");
	pos_int();
	y1=getchar();
	printf("if you found your root interval press y/Y otherwise n/N: ");
	scanf("%c",&y1);
	if(y1=='y' || y1=='Y')
	y2=1;
	}
	else if(l==2)
{	printf("negative interval: \n\n ");
	neg_int();
	y1=getchar();
	printf("\nif you found your root interval press y/Y otherwise n/N: ");
	scanf("%c",&y1);
	if(y1=='y' || y1=='Y')
	y2=1;
}
	else
	{
		exit(0);
	}
}while(y2!=1);
y2=0;
do
{
	printf("\n\n");
	printf("your choice:\n");
	printf("1.positive root\n");
	printf("2.negative root\n");
	printf("3.for exit any other value enter \n");
	printf("enter your choice: ");
	scanf("%d",&l);
	if(l==1){
	printf("positive interval: \n\n");
	pro_root();
	y1=getchar();
	fx_pos();
	printf("if you found your root interval press y/Y otherwise n/N: ");
	scanf("%c",&y1);
	if(y1=='y' || y1=='Y')
	y2=1;
	}
	else if(l==2){	
	printf("negative interval: \n\n");
	pro1_root();
	y1=getchar();
	fx_neg();
	printf("\nif you found your root interval press y/Y otherwise n/N: ");
	scanf("%c",&y1);
	if(y1=='y' || y1=='Y')
	y2=1;
}
else
{
	exit(0);
}
}while(y2!=1);
end:
printf("\n\n*****************P R O G R A M E___7___T E R M I N A T A E*****************\n\n");
getch();
}
