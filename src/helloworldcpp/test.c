#include <stdio.h>
#include <string.h>
#include <float.h>
#include <limits.h>
#include <time.h>
#include "test.h"
#define MAX 1000000
#define CODE 
int num;

void ex1___17()
{
    struct point p1=(20,30);
    printf("구조체 변수 p1의 주소 : %x \n",&p1);
    printf("멤버 변수 p1.x의 주소 : %x \n",&p1.x);

    return 0;
}


void ex1___16()
{
    int num1=3;
    struct point p1;

    p1.x=&num1;
    p1.y=&p1.x;

    printf("%d %d %d \n",num1,*p1.x,**p1.y);
    
    return 0;
}

void ex1___15()
{
    int num1=4;
    int num2=5;
    struct point p1;

    p1.x=&num1;
    p1.y=&num2;
    printf("%d %d \n",num1,num2);
    printf("%d %d \n",*p1.x, *p1.y);

    return 0;
}

void ex1___14()
{
    int i=0;\
    struct student stu;
j
    strcpy(stu.no,"20101323");
    strcpy(stu.name,"park");
    printf("학번 : %s, 아름 : %s \n",stu.no, stu.name);

    return 0;
}


void ex1___12()
{
  struct student stu[3];
  int i=0;

  for(i=0; i<3; i++)
  {
    printf("학번 이름 총점 순으로 입력하세요 : ");
    scanf("%s %s %lf",stu[i].no,stu[i].name,&stu[i].total);
  }
  printf("\n");

  printf("학생 정보를 출력합니다. \n");
  for(i=0; i<3; i++)
  {
    printf("%s %s %lf",stu[i].no,stu[i].name,stu[i].total);
    printf("\n");
  }
  return 0;
}


void ex1___11() 
{
    int i = 0;
    struct student stu[3] = {
        {"20101323", "park", 80, 80, 0},
        {"20101324", "kim", 95, 85, 0},
        {"20101325", "lee", 100, 90, 0}
    };

    for (i = 0; i < 3; i++) {
        stu[i].total = stu[i].math + stu[i].english;
        printf("학번 : %s, 이름 : %s \n", stu[i].no, stu[i].name);
        printf("총점 : %d \n", stu[i].total);
        printf("\n");
    }
}


void ex1___10()

  {
    struct student stu1 = {"20101323", "park", 80, 80, 0};
    struct student stu2 = {"20101324", "kim", 95, 85, 0};
    struct student stu3 = {"20101325", "lee", 100, 90, 0};

    stu1.total = stu1.math + stu1.english;
    printf("학번 : %s, 이름 : %s \n", stu1.no, stu1.name);
    printf("총점 : %lf\n", stu1.total);

    printf("\n");
    stu2.total = stu2.math + stu2.english;
    printf("학번 : %s, 이름 : %s\n", stu2.no, stu2.name);
    printf("총점 : %lf\n", stu2.total);

    printf("\n");
    stu3.total = stu3.math + stu3.english;
    printf("학번 : %s, 이름: %s\n", stu3.no, stu3.name);
    printf("총점 : %lf\n", stu3.total);

    return 0;
}


void ex1___9()
typedef struct score

{
    double math;
    double english;
    double average;
} SCORE;

struct student
{
    int no;
    SCORE s;
};

typedef struct student STUDENT;

int main(void)
{
    STUDENT stu = {2022088359, {90, 80, 0}};
    stu.s.average = (stu.s.math + stu.s.english) / 2.0;
    printf("학번 : %d\n", stu.no);
    printf("평균 점수 : %lf\n", stu.s.average);
}
 


void ex1___7()
struct score
{
    double math;
    double english;
    double total;
};
struct student
{
     int no;
     struct score s;
};
int main(void);
{
    struct student stu;

    stu.no=2022088359;
    stu.s.math=90;
    stu.s.english=80;
    stu.s.total=stu.s.math+stu.s.english;

    printf("학번 : %d \n",stu.no);
    printf("총점 : lf \n",stu.s.total);

   
}

void ex1___5()
{
    struct point p1={10,20};
    struct point p2={0,0};

    p2=p1;

    printf("%d %d \n",p1.x,p1.y);
    printf("%d %d \n",p2.x,p2.y);

    return 0;
}


void ex1___4()
struct 
{
    int x;
    int y;
};

int main(void);
{
    struct point p1={10,20};
    struct point p2={30,40};
    struct point p3={0,0};

    p3.x=p2.x - p1.x;
    p3.y=p2.y - p1.y;

    printf("%d %d \n",p3.x,p3.y);

}
 

void ex1___3()
struct point
{
    int x;
    int y;
};
int main(void);
{
    struct point p1={10,20};

    printf("%d %d \n",p1.x,p1.y);

}


void ex1___2()
struct group
{
    int a;
    double b; 
};
int main (void);
{
    struct group g1;

    scanf("%d %lf",&g1.b);
    
    printf("g1.a의 값: %d \n",g1.a);
    printf("g1.b의 값 : %d \n",g1.b);

}

void ex1___1()
 
{
    struct group g1;
    
    g1.a=10;
    g1.b=1.1234;

    printf("g1.a의 값 : %d \n",g1.a);
    printf("g1.b의 값 : %if \n",g1.b);

}

//////////////////////////// part 3 

void ex5___16()
{
    char c=3;
    double d=3.1;

    void* vx=NULL;

    vx=&c;
    printf("vx가 저장한 주소 : %x \n",vx);
    printf("vx의 값 : %d \n",*(char*)vx);
    
    
    vx=&d;
    printf("vx기 저장한 주소 : %x \n",vx);
    printf("vx의 값 : %if \n",*(double*)vx);

    vx=&c;
    *(char*)vx=5;
    printf("c가 저장한 값 : %x \n",c);
    printf("vx의 값 : %d \n",*(char*)vx);

    vx=&d;
    *(double*)vx=5;
    printf("d가 저장한 값 : %x \n",d);
    printf("vx의 값 : %lf \n",*(double*)vx);
}

void ex5___15()
{
    char c=3;
    double d=3.1;

    void* vx=NULL;

    vx=&c;
    printf("vx가 저장한 값 : %x \n",vx);
    printf("*vx의 값 : %d \n", *(char*)vx);

    vx=&d;
    printf("vx가 저장한 값 : %x \n",vx);
    printf("vx의 값 : %lf \n",*(double*)vx);
}


void ex5___14()
{
    char c=3;
    double d=3.1;

    void* vx=NULL;
    
    vx=&c;
    printf("vx의 주소 값 : %x \n", vx);

    vx=&d;
    printf("vx의 값 : %if \n",vx);

    return 0;


}

void ex5___13()
{
    int i=0;
    if(argc>4)
    {
        printf("문자열의 수가 너무 많습니다.\n");
        printf("프로그램을 종료합니다.\n");
        return 1;
    }

    printf("0번째 문자열 : %s \n",argv[0]);
    printf("1번째 문자열  : %s \n",argv[1]);
    printf("2번째 문자열 : %s \n",argv[2]);
    printf("3번째 문자열 : %s \n",argv[3]);

    return 0;
}


void ex5___12()
{
    
    int i=0;
    printf("문자열의 수 : %d \n", argc);

    for(i=0; i<argc; i++)
    {
        printf("argv[%d] : %s \n",i,argv[i]);
    }

    return 0;   
}

void ex5___11()
{
    int i=0;
    printf("문자열의 수 : %d \n",argc);

    for(i=0; i<argc; i++)
    {
        printf("%d반째 문자열 : %s \n",i,argc[i]);
    }
    return 0;
}


void ex5___10()
{
    char* p1=NULL;
    char* p2=NULL;

    p1=string1();
    p2=string2();
    return 0;
}
char* string1(void)
{
    static char strp[]="Good";
    return str;
}

char* string2(void)
{
    static char str[]="morning";
    return str;
}


void ex5___9()
{
    int* p=NULL;
    p=func();

    printf("%d %d %d %d \n",p[0],p[1],p[2],p[3]);
    printf("%d %d %d %d \n",*(p+0),*(p+1),*(p+2),*(p+3));
    return 0;
}
int* func()
{
    static int array[]={10,20,30,40};
    return array;
}

void ex5___8()
{
    int* p=NULL;
    p=func();

    printf("%d %d %d %d \n",p[0],p[1],p[2],p[3]);
    printf("%d %d %d %d",*(p+0),*(p+1),*(p+2),*(p+3));
    return 0;
}
int* func()
{
    int array[]={10,20,30,40,};
    return array;
}


void ex5___7()
{
    int* p=NULL;

    p=input();
    printf("%d \n",*p);

    return 0;
}
int* input()
{
    static int num1;
    scanf("%d",&num1);
    return &num1;
}

void ex5___6()
{
    int* p=NULL;

    p=input();
    printf("%d \n",*p);

    return 0;
} 
int* input()
{
    int num1;
    scanf("&d",&num1);
    return &num1;
}


void ex5___4()
{
    int array[2][4]={10,20,30,40,50,60,70,80};
    func(array,sizeof(array)/16,sizeof(array)/8);
    return 0;
}
void func(int (*p)[4],int num1,int num2)
{
    int i,j;
    for(i=0; i<num2; j++)
    {
        for(j=0; j<num2; j++)
        {
           printf("%d",p[i][j]);
        }
        printf("\n"); 
    }
}


void ex5___3()
{
    int array[]={10,20,30,40,50,60,70,80};
    func(array,sizeof(array)/sizeof(int));
}
void func(int* p,int num)
{
    int i;
    for(i=0; i<num; i++)
    {
        printf("%d %d \n",p[i],*(p+i));
    }
}


void ex5___2()
{
    int a=10;
    int result=0;

    result=func(&a);
    printf("%d \n",result);
    printf("%d \n",a);
}

int func(int* i)
{
    *i=*i+i;
    return *i;
}


void ex5___1()
{
    int a =10;
    int result=0;

    result=func(a);
    printf("%d \n",result);
    printf("%d \n",a);
}

int funx(int i)
{
    i=i+1;
    return i;
}

void ex4_32()
{
    char*p="good morning";
    char*q="C-language";
    char*array[2]={"good morning","C-language"};

    printf("%s \n",p);
    printf("%s \n",q);   
    printf("---------\n");

    printf("%s \n",array[0]);
    printf("%s \n",array[1]);   
    printf("---------\n");

    printf("%s \n",p+5);
    printf("%s \n",q+2);   
    printf("---------\n");

    printf("%s \n",array[0]+5);
    printf("%s \n",array[1]+2);


}


void ex4_31()
{
    char*p=&"ABCD";

    printf("%x \n",p);
    printf("%x \n",p+1);
    printf("%x \n",p+2);
    printf("%x \n",p+3);
    printf("%x \n",p+4);
    printf("--------\n");

    printf("%x %x \n",&"ABCD",p);

}

void ex4_29()
{
    char* p="ABCD";

    printf("%s \n",p);
    printf("%s \n",p+1);
    printf("%s \n",p+2);
    printf("%s \n",p+3);


}

void ex4_28()
{
    char array[]="ABCD";

    array[0]='X';
    printf("%s \n",array);   
}


void ex4_27()
{
    char array1[]={'A','B','C','D','\0'};
    char array2[]={'A','B','C','D'};

    printf("%s \n",array1);
    printf("%s \n",array2);
}


void ex4_26()
{
    char array[]="ABCD";

    printf("%s \n",array);
    printf("%s \n",array+1);
    printf("%s \n",array+2);
    printf("%s \n",array+3);
    
}

void ex4_25()
{
    char array[]={'A','B','C','D','\0'};

    printf("%c %c %c %c \n",array[0],array[1],array[2],array[3],array[4]);
    printf("%d %d %d %d \n",array[0],array[1],array[2],array[3],array[4]);
    
}


void ex4_24()
{
    char array[]="ABCD";

    printf("%c %c %c %c %c \n",array[0],array[1],array[2],array[3],array[4]);
    printf("%d %d %d %d %d \n",array[0],array[1],array[2],array[3],array[4]);

    printf("%d \n",sizeof(array));

}

void ex4_23()
{
    char array1[]={'A','B','C','D'};
    char* p=NULL;

    p=array1;

    printf("%c %c %c %c \n",p[0],p[1],p[2],p[3]);
    printf("%d %d %d %d \n",p[0],p[1],p[2],p[3]);

    printf("%c %c %c %c \n",*(p+0),*(p+1),*(p+2),*(p+3));
    printf("%d %d %d %d \n",*(p+0),*(p+1),*(p+2),*(p+3));

}

void ex4_22()
{
    char array[]={'A','B','C','D'};

    printf("臾몄옄 ?긽?닔 : %c %c %c %c \n",'A','B','C','D');
    printf("臾몄옄 諛곗뿴 蹂?寃? ?쟾 : %c %c %c %c \n",array[0],array[1],array[2],array[3]);

    array[0]='D';
    array[1]='C';
    array[2]='B';   
    array[3]='A';

    printf("臾몄옄 諛곗뿴 蹂?寃? ?썑 : %c %c %c %c \n",array[1],array[2],array[3]);
    
    printf("臾몄옄 諛곗뿴 array?쓽 ?겕湲? : %d \n",sizeof(array));
}

void ex4_21()
{
    int a=10, b=20, c=30;
    int* ap[3]=(NULL,NULL,NULL);

    int array[2][3]={10,20,30,40,50,60};
    int (*p)[3]=NULL;

    ap[0]=&a;
    ap[1]=&b;
    ap[2]=&c;

    printf("%x %x %x \n",&a,&b,&c);
    printf("%x %x %x \n", ap[0],ap[1],ap[2]);
    printf("%x %x %x \n",*(ap+0),*(ap+1),*(ap+2));
    printf("---------------\n");

    printf("%d %d %d \n",&a,&b,&c);
    printf("%d %d %d \n", ap[0],ap[1],ap[2]);
    printf("%d %d %d \n",**(ap+0),**(ap+1),**(ap+2));
    printf("---------------\n");
    p=array;

    printf("%d %d %d \n",*(p[0]+0),*(p[0]+1),*(p[0]+2));
    printf("%d %d %d \n",*(p[1]+0),*(p[1]+1),*(p[1]+2));
    printf("---------------\n");

    printf("%d %d %d \n",*(*(p+0)+0),*(*(p+0)+1),*(*(p+0)+2));
    printf("%d %d %d \n",*(*(p+1)+0),*(*(p+1)+1),*(*(p+1)+2));
    printf("---------------\n");

    return;
}


void ex4_20()
{
    int a=10, b=20, c=30;
    int* ap[3]=(NULL,NULL,NULL);

    ap[0]=&a;
    ap[1]=&b;
    ap[2]=&c;

    printf("%x %x %x \n",&a,&b,&c);
    printf("%x %x %x \n", ap[0],ap[1],ap[2]);
    printf("%x %x %x \n",*(ap+0),*(ap+1),*(ap+2));
    printf("---------------\n");

    printf("%d %d %d \n",&a,&b,&c);
    printf("%d %d %d \n", ap[0],ap[1],ap[2]);
    printf("%d %d %d \n",**(ap+0),**(ap+1),**(ap+2));
 

}

void ex4_19()
{
    int a=10, b=20, c=30;
    int* ap=NULL;
    int* bp=NULL;
    int* cp=NULL;

    ap=&a;
    bp=&b;
    cp=&c;

    printf("%d %d %d \n",a,b,c);
    printf("%d %d %d \n",*ap,*bp,*cp);

    printf("%x %x %x \n",&a,&b,&c);
    printf("%x %x %x \n",ap,bp,cp);
    printf("%x %x %x \n",&ap,&bp,&cp);

}

void ex4_18()
{
    int array[2][3] = { {10, 20, 30}, {40, 50, 60} };
    int (*p)[3] = NULL;

    p=array;

    printf("-----------#1-----------\n");
    printf("%x %x %x \n", &p[0][0], &p[0][1], &p[0][2]);
    printf("%x %x %x \n", &p[1][0], &p[1][1], &p[1][2]);

    printf("-----------#2-----------\n");
    printf("%x %x \n",p,p+1);
    printf("%x %x \n",p[0],p[1]);
    printf("%x %x \n",*(p+0),*(p+1));
    
    printf("-----------#3-----------\n");
    printf("%d %d %d \n",*(p[0]+0),*(p[0]+1),*(p[0]+2));
    printf("%d %d %d \n",*(p[1]+0),*(p[1]+1),*(p[1]+2));

    printf("-----------#4-----------\n");
    printf("%d %d %d \n",*(*(p+0)+0),*(*(p+0)+1),*(*(p+0)+2));
    printf("%d %d %d \n",*(*(p+1)+0),*(*(p+1)+1),*(*(p+1)+2));

}

void ex4_17()
{
    int array[2][3] = { {10, 20, 30}, {40, 50, 60} };
    int (*p)[3] = NULL;
   
    p=array;
    printf("%x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);
    printf("%x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);

    printf("-----------\n");
    printf("%x %x %x \n", &p[0][0], &p[0][1], &p[0][2]);
    printf("%x %x %x \n", &p[1][0], &p[1][1], &p[1][2]);

    printf("-----------\n");
    printf("%d %d %d \n", array[0][0], array[0][1], array[0][2]);
    printf("%d %d %d \n", array[1][0], array[1][1], array[1][2]);

    printf("-----------\n");
    printf("%d %d %d \n", p[0][0], p[0][1], p[0][2]);
    printf("%d %d %d \n", p[1][0], p[1][1], p[1][2]);
}

void ex4__16()
{
    int array[2][3]={10,20,30,40,50,60};
    int(*p)[3]=NULL;   

    p=array;

    printf("%d %d %d \n", p[0][0],p[0][1],p[0][2]);
    printf("%d %d %d \n", p[1][0],p[1][1],p[1][2]);

}


void ex4__15()
{
    int array1[2][3]={10,20,30,40,50,60};
    int(*p1)[3]=NULL;   
    
    double array2[2][4];
    double (*p2)[4]=NULL;

    p1=array1;
    p2=array2;

}
 

void ex4__14()
{
    int array[3][3]={10,20,30,40,50,60};
    int* p=NULL;
   
    p=array;

    printf("-----------\n");
    printf("%x %x %x \n", &p[0],&p[1],&p[2]);
    printf("%x %x %x \n", &p[3],&p[4],&p[5]);


    printf("-----------\n");
    printf("%d %d %d \n", p[0],p[1],p[2]);
    printf("%d %d %d \n", p[3],p[4],p[5]);

}

void ex4__13()
{
    int array[3][3]={10,20,30,40,50,60};

    printf("----------------#1-----------------\n");
    printf("%x %x %x \n",&array[0][0],&array[0][1],&array[0][2]);
    printf("%x %x %x \n",&array[1][0],&array[1][1],&array[1][2]);
    
    printf("----------------#2-----------------\n");
    printf("%x %x \n",array, array+1);
    printf("%x %x \n",array[0], array[1]);
    printf("%x %x \n",*(array+0), *(array+1));

    printf("----------------#3-----------------\n");      
    printf("%x %x \n",*(array[0]+0), (array[0]+1),(array[0]+2));  
    printf("%x %x \n",*(array[1]+0), (array[1]+1),(array[1]+2));  

    printf("----------------#4-----------------\n");      
    printf("%x %x \n",*(*(array+0)+0), *(*(array+0)+1),*(*(array+0)+2));  
    printf("%x %x \n",*(*(array+1)+0), *(*(array+1)+1),*(*(array+1)+2));  

}


void ex4__12()
{
    int array[3][3]={10,20,30,40,50,60,70,80,90};

    printf("%x %x %x \n", &array[0][0],&array[0][1],&array[0][2]);
    printf("%x %x %x \n", &array[1][0],&array[1][1],&array[1][2]);
    printf("%x %x %x \n", &array[2][0],&array[2][1],&array[2][2]);
    printf("-----------\n");

    printf("%d %d %d \n", &array[0][0],&array[0][1],&array[0][2]);
    printf("%d %d %d \n", &array[1][0],&array[1][1],&array[1][2]);
    printf("%d %d %d \n", &array[2][0],&array[2][1],&array[2][2]);
    printf("-----------\n");

    printf("%d %d %d \n", &array[0][0],&array[0][1],&array[0][2]);
    printf("%d %d %d \n", &array[1][0],&array[1][1],&array[1][2]);
    printf("%d %d %d \n", &array[2][0],&array[2][1],&array[2][2]);
}


void ex4__11()
{
    int array[3];
    int* p=NULL;
   
    p=array;
    *p=10;
    printf("&d %d %d \n",p[0],p[1],p[2]);
    printf("-----------\n");

    p=p+1;
    *p=20;
    printf("&d %d %d \n",p[-1],p[0],p[1]);
    printf("-----------\n");

    p=p+1;
    *p=30;
    printf("&d %d %d \n",p[-2],p[-1],p[0]);
    printf("-----------\n");

    printf("&d %d %d \n",p[-2],p[-1],p[0]);   
    printf("&d %d %d \n",*(p-2),*(p-1),*p);
    printf("-----------\n");

}

void ex4__10()
{
    int array[3]={10,20,30};
    int* p=NULL;
   
    p=array;

    *p=10;
    printf("&d %d %d \n",p[0],p[1],p[2]);
    printf("-----------\n");

    *(p+1)=20;
    printf("&d %d %d \n",p[0],p[1],p[2]);
    printf("-----------\n");

    *(p+2)=30;
    printf("&d %d %d \n",p[0],p[1],p[2]);
    printf("-----------\n");

    printf("&d %d %d \n",*(p+0),*(p+1),*(p+2));
    printf("&d %d %d \n",p[0],p[1],p[2]);   
    printf("-----------\n");

}

void ex4__9()
{
    int array[3]={10,20,30};
    int* p=NULL;
   
    p=array;
    printf("&d %d %d \n",p[0],p[1],p[2]);
    printf("&d %d %d \n",*(p+0),*(p+1),*(p+2));
    printf("-----------\n");

    p=array+1;
    printf("&d %d %d \n",p[-1],p[0],p[1]);
    printf("&d %d %d \n",*(p-1),*p,*(p+1));
    printf("-----------\n");   

    p=array+2;
    printf("&d %d %d \n",p[-2],p[-1],p[0]);
    printf("&d %d %d \n",*(p-2),*(p-1),*p);
    printf("-----------\n");


}


void ex4__8()
{
    int array[3]={10,20,30};
    int* p=NULL;

    p=array;
    printf("&d %d %d \n",p[0],p[1],p[2]);
    printf("&d %d %d \n",*(p+0),*(p+1),*(p+2));

    p=array+1;
    printf("&d %d %d \n",p[-1],p[0],p[1]);
    printf("&d %d %d \n",*(p-1),*p,*(p+1));
    
    p=array+2;
    printf("&d %d %d \n",p[-2],p[-1],p[0]);
    printf("&d %d %d \n",*(p-2),*(p-1),*p);

}

void ex4__7()
{
    int array[3]={10,20,30};
    int* p=NULL;
    p=array;

    printf("&d %d %d \n",array[0],array[1],array[2]);
    printf("&d %d %d \n",*(array+0),*(array+1),*(array+2));
    printf("&d %d %d \n",p[0],p[1],p[2]);
    printf("&d %d %d \n",*(p+0),*(p+1),*(p+2));

    printf("諛곗뿴?쓽 ?겕湲? : %d ?룷?씤?꽣?쓽 ?겕湲? : %d \n", sizeof(array),sizeof(p));
}

void ex4__6()
{
    int array[3]={10,20,30};
    int i=0;
    int* p=NULL;

    p=array;

    for(i=0; i<3; i++)
    {
        printf("%d %d %d \n",*(p+i), *&p[i], p[i]);
    }
    printf("-------------\n");
    for(i=0; i<3; i++)
    {
        printf("%d %d %d \n",*(array+i),*&array[i],array[i]);

    }
}

void ex4__5()
{
    int array[3]={10,20,30};
    int* p=NULL;
    p=array;

    printf("%d %d %d \n", *p,*(p+0),*&p[0]);
    printf("%d %d \n",*(p+1),*&p[1]);
    printf("%d %d \n",*(p+2),*&p[2]);

}

void ex4__4()
{
    int array[3]={10,20,30};
    int* p=NULL;

    p=array;

    printf("%x %x %x \n",p,p+0,&p[0]);
    printf("%x %x %x \n",p+1,&p[1]);
    printf("%x %x %x \n",p+1,&p[2]);
}

void ex4__3()
{
    int array[3]={10,20,30};

    printf("%d %d %d \n", *(array+0),*&array[0],array[0]);
    printf("%d %d %d \n", *(array+1),*&array[1],array[1]);
    printf("%d %d %d \n", *(array+2),*&array[2],array[2]);
}


void ex4__2()
{
    int array[3] = {10, 20, 30};

    printf("%d %d %d \n", *array, *(array+0), *&array[0]);
    printf("%d %d \n", *(array+1), *&array[1]);
    printf("%d %d \n", *(array+2), *&array[2]);

    printf("%d %d %d \n", sizeof(*array), sizeof(*(array+0)), sizeof(array));
}

void ex4__1()
{
    int array[3]={10,20,30};

    printf("%x %x %x \n", array,array+0,&array[0]);
    printf("%x %x \n",array+1 ,&array[1]);
    printf("%x %x \n",array+2 ,&array[2]);

    printf("%d %d %d \n", sizeof(array),sizeof(array+0),sizeof(&array[0]));

}


void ex3__15()
{
    double x=3.1, y=5.1;
    void (*pointer)(double, double);

    printf("add ?븿?닔?쓽 二쇱냼 : %p \n", add);
    printf("?븿?닔 ?룷?씤?꽣?쓽 二쇱냼 : %p \n",&pointer);

    pointer=add;
    pointer(x,y);

    return 0;
    
}

void add(double num1, double num2)
{
    double result;
    result=num1 + num2;
    printf("%.1f + %.1f = %.1f?엯?땲?떎. \n ", num1, num2, result);
}


void ex3__14()
{
    printf("%x %x %x \n", main, printf, scanf);

}

void ex3__13()
{
    int array[3]={10,20,30};
    int* ip=NULL;
    int** ipp=NULL;

    ip=&num;
    ipp=&ip;

    printf("%d %d %d \n",array[0],array[1],array[2]);
    printf("%d %d %d \n", *(ip+0),*(ip+1),*(ip+2));
    printf("%d %d %d \n",*(*ipp+0),*(*ipp+1),*(*ipp+2));
    
}


void ex3__12()
{
    char c='A';
    char* cp=NULL;

    char** cpp=NULL;

    cp=&c;
    cpp=&cp;

    printf("%x %x %x \n", &c, &cp, &cpp);
    printf("%x %x %x \n", &c+1, &cp+1, &cpp+1);

    printf("%c %x %x \n", c,cp,cpp);
    printf("%c %x %x \n", c+1,cp+1,cpp+1);

}


void ex3__10()
{
    int num1=10;
    int* ip1=NULL;
    int** ip2=NULL;
    int*** ip3=NULL;

    ip1=&num1;
    ip2=&ip1;
    ip3=&ip2;

    printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);

    *ip1=20;
    printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);

    *ip2=30;
    printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);

    *ip3=40;
    printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);
}

void ex3__9()
{
    int num1=10;
    int* ip1=NULL;
    int** ip2=NULL;
    int*** ip3=NULL;

    ip1=&num1;
    ip2=&ip1;
    ip3=&ip2;
    
    printf("%d %d %d %d \n",num1, *ip1, **ip2, ***ip3);
    printf("%x %x %x %x \n",&num, ip1, *ip2, **ip3);
    printf("%x %x %x \n",&ip1, ip2, *ip3);
    printf("%x %x \n", &ip2, ip3);

    printf("%d %d \n", sizeof(int), sizeof(int*));
    printf("%d %d \n", sizeof(int**), sizeof(int***));

    printf("%d %d \n", sizeof(num1),sizeof(ip1));
    printf("%d %d \n", sizeof(num1), sizeof(ip3));

}

void ex3__8()
{
    int num1=10;
    int * ip=NULL;
    int ** ipp=NULL;

    ip=&num1;
    ipp=&ip;

    printf("%d %x %x \n", num1, ip, ipp);
    printf("%x %x %x \n", &num1, &ip, &ipp);
    printf("%d %x %x \n", *&num1, *&ip, *&ipp);
    printf("%d %d %d \n", num1, *ip,**ipp);
    printf("%d %x %x \n", *&num1, ip, *ipp);

}

void ex3__7()
{
    char c1='A';
    char*cp=NULL;
    char** cpp=NULL;

    cp=&c1;
    cpp=&cp;

    printf("%c %x %x \n", c1, cp, cpp);
    printf("%x %x %x \n", &c1, &cp, &cpp);
    printf("%c %c %c \n", c1, *cp,**cpp);

}

void ex3__6()
{
    int num1=10;
    int num2=0;
    int*ip=NULL;

    ip=&num1;

    num2=*ip+num1;
    printf("%x %x %d \n",*ip,num1,num2);

}

void ex3__5()
{
    int num=10;
    int * ip= NULL;

    ip=&num;

    printf("%x %x %d \n", &*&ip, *&ip, **&ip);
    printf("%x %x %d \n", &ip, ip, *ip);
}


void ex3__4()
{
    int a=0, b=0, c=0;
    int * ip=NULL;

    ip=&a;
    *ip=10;
    printf("%d %d %d %d \n",a,b,c,*ip);

    ip=&b;
    *ip=20;
    printf("%d %d %d %d \n",a,b,c,*ip);

    ip=&c;
    *ip=30;
    printf("%d %d %d %d \n",a,b,c, *ip);

}


void ex3__3()
{
    char c='A';
    char *cp =NULL;

    cp=&c;

    printf("%x %c %c \n",&c,c,&c);
    printf("%x %x %x \n",&cp,cp,&cp);

    printf("%c \n",c);
    printf("%c \n",*cp);
}


void ex3__2()
{
    // ?룷?씤?꽣 蹂??닔 ?꽑?뼵 
    char*cp=NULL;
    int*ip=NULL;

    printf("%x %x %x \n",&cp,cp,*&cp);
    printf("%x %x %x \n",&cp,cp,*&ip);

    printf("%d %d \n",sizeof(char*),sizeof(int*));
    printf("%d %d \n",sizeof(char*),sizeof(int*));
}


void ex3__1()
{
    int num1=3;
    char num2='A';

    printf("二쇱냼 : %x, 媛? : %d, 媛?: %d \n",&num1,num1,*&num1);
    printf("二쇱냼 : %x, 媛? : %d, 媛?: %d \n",&num2,num2,*&num2);

    printf("%d %d \n",sizeof(int), sizeof(char));
    printf("%d %d \n",sizeof(num1), sizeof(num2));

} 

void ex2__12()
{
    int array[2][2]={10,20,30,40};

    printf("%d %d \n",*&array[0][0],*&array[0][1]);
    printf("%d %d \n",*&array[1][0],*&array[1][1]);
    printf("----------------\n");

    printf("%d %d \n",*(array[0]+0),*(array[0]+1));
    printf("%d %d \n",*(array[1]+0),*(array[1]+1));
    printf("----------------\n");

    printf("%d %d \n",*(*(array+0)+0),*(*(array+0)+1));
    printf("%d %d \n",*(*(array+1)+0),*(*(array+1)+1));
 
}


void ex2__11()
{
    int array[2][2]={10,20,30,40};

    printf("%x %x \n",*&array[0][0],*&array[0][1]);
    printf("%x %x \n",*&array[1][0],*&array[1][1]);
    printf("----------------\n");

    printf("%x %x \n",*array[0]+0,*array[0]+1);
    printf("%x %x \n",*array[1]+0,*array[1]+1);
    printf("----------------\n");

    printf("%x %x \n",**(array+0)+0,*(array+0)+1);
    printf("%x %x \n",**(array+1)+0,*(array+1)+1);
  
}

void ex2__10()
{
    int array[2][2]={10,20,30,40};

    printf("%x %x \n",&array[0][0],&array[0][1]);
    printf("%x %x \n",&array[1][0],&array[1][1]);

    printf("----------------\n");
    printf("%x %x \n",array[0]+0,*array[0]+1);
    printf("%x %x \n",array[1]+1,*array[0]+1);

    printf("----------------\n");
    printf("%x %x \n",*(array+0)+0,*(array+0)+1);
    printf("%x %x \n",*(array+1)+0,*(array+1)+1);
 
}

void ex2__9()
{
    int array[2][2]={10,20,30,40};

    printf("%x %x \n",array[0],*(array+0), *array);
    printf("%x %x \n",array[1],*(array+1));
 
}


void ex2__8()
{
    int array[2][2]={10,20,30,40};

    printf("%x %x \n",array[0],&array[0][0]);
    printf("%x %x \n",array[1],&array[1][0]);
 
}

void ex2__7()
{
    int array[2][2]={10,20,30,40};

    printf("%x,%x \n",array,array+0);
    printf("&x \n",array+1);
}

void ex2__6()

{
    int array[2][3]={1,2,3,4,5,6};
    printf("%x %x %x \n",&array[0][0],&array[0][1],&array[0][2]);
    printf("%x %x %x \n",&array[1][0],&array[1][1],&array[1][2]);
 
}


void ex2__5()
{
    int i,j,k;
    int array[3][3][3]={{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18},{19,20,21,22,23,24,25,26,27}};
    for(i=0;i<3;i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                printf("%d",array[i][j][k]);
            }
            printf("\n");
        }
            printf("-----------\n");
    }

 
}

void ex2__4()
{
    int array[2][2];
    int i,j;

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
           printf("?젙?닔瑜? ?엯?젰?븯?꽭?슂 : ");
           scanf("%d, &array[i][j]");
        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%3d",array[i][j]);
        }
        printf("\n");
    }
 
}

void ex2__3()
{
    int array1[4][3]={{1,2},{3},{4},{5}};
    int array2[4][3]={{1,2,3},{4,5,6},{7,8,9},{10}};


    printf("%d %d %d \n",array1[0][0], array1[0][1], array1[0][2]);
    printf("%d %d %d \n",array1[1][0], array1[1][1], array1[1][2]);
    printf("%d %d %d \n",array1[2][0], array1[2][1], array1[2][2]);
    printf("%d %d %d \n",array1[3][0], array1[3][1], array1[3][2]);

    printf("--------------------\n");

    
    printf("%d %d %d \n",array2[0][0], array2[0][1], array2[0][2]);
    printf("%d %d %d \n",array2[1][0], array2[1][1], array2[1][2]);
    printf("%d %d %d \n",array2[2][0], array2[2][1], array2[2][2]);
    printf("%d %d %d \n",array2[3][0], array2[3][1], array2[3][2]);
 
}

void ex2__2()
{
    int array1[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int array2[4][3]={1,2,3,4,5};


    printf("%d %d %d \n",array1[0][0], array1[0][1], array1[0][2]);
    printf("%d %d %d \n",array1[1][0], array1[1][1], array1[1][2]);
    printf("%d %d %d \n",array1[2][0], array1[2][1], array1[2][2]);
    printf("%d %d %d \n",array1[3][0], array1[3][1], array1[3][2]);

    printf("--------------------\n");

    printf("%d %d %d \n",array2[0][0], array2[0][1], array2[0][2]);
    printf("%d %d %d \n",array2[1][0], array2[1][1], array2[1][2]);
    printf("%d %d %d \n",array2[2][0], array2[2][1], array2[2][2]);
    printf("%d %d %d \n",array2[3][0], array2[3][1], array2[3][2]);
 
}




void ex2__1()
{
    //2李⑥썝 諛곗뿴 ?꽑?뼵 
    int array[4][3];

    array[0][0]=1; array[0][1]=2; array[0][2]=3; 
    array[1][0]=4; array[1][1]=5; array[1][2]=6;
    array[2][0]=7; array[2][1]=8; array[2][2]=9;
    array[3][0]=10; array[3][1]=11; array[3][2]=12;

    printf("?닽?옄瑜? ?엯?젰?븯?꽭?슂: ");
    scanf("%d", &num);
    printf("?엯?젰?븳 ?닽?옄?뒗 %d?엯?땲?떎.\n", num);

    printf("%d %d %d \n",array[0][0],array[0][1],array[0][2] );  
    printf("%d %d %d \n",array[1][0],array[1][1],array[1][2] );    
    printf("%d %d %d \n",array[2][0],array[2][1],array[2][2] );    
    printf("%d %d %d \n",array[3][0],array[3][1],array[3][2] );
 
}


void ex1__9()
{
    int array[3]={1,2,3};

    printf("%x %x %x \n", array+0, array+1, array+2);
    printf("%d %d %d \n", *(array+0), *(array+1), *(array+2));
    printf("%d %d \n", *(array+0), *array);
 
}


void ex1__8()
{
    int array[3]={1,2,3};
    printf("%x %x %x \n", &array[0],&array[1],&array[2]);
    printf("%x %x %x \n", *&array[0],*&array[1],*&array[2]);
    printf("%x %x %x \n", array[0],array[1],array[2]);
    printf("%x %x %x \n", *&*&array[0],*&*&array[1],*&*&array[2]);
 
}

void ex1__7()
{
    char array[3]={'A','B','C'};
    printf("%x %x %x \n", array+0,array+1,array+2);
 
}

void ex1__6()
{
    int array[3]={1,2,3};

    printf("%x %x %x \n",array+0, array+1, array+2);
    printf("%x %x %x \n",array[0], array[1], array[2]);
 
}


void ex1__5()
{
    int array1[3]={1,2,3};
    char array2[3]={'A','B','C'};

    printf("%x %x %x \n",array1[0],array1[1],array1[2]);
    printf("%x %x %x \n",array2[0],array2[1],array2[2]);
 
}

void ex1__4()
{
    int array[3]={87,65,78};
    int i, total=0;

    for (i=0; i<3; i++)
    {
        total=total + array[i];
        printf("諛곗뿴?쓽 ?슂?냼 array[%d]?쓽 媛? : %d \n",i,array[i]);
    }

    printf("珥앹젏?씠 %d?씠怨?", total);
    printf("?룊洹좎?? %.21f?엯?땲?떎. \n",(double)total/3);
 
}

void ex1__3()
{
    int array[3]={87,99,80};
    int total=0;

    total=array[0]+array[1]+array[2];
    printf("珥앹젏??? %d?씠怨?", total);
    printf("?룊洹좎?? %.21f?엯?땲?떎. \n",(double)total/3);
 

}

void ex1__2()

{
    int array1[5] = {90, 80, 70, 60, 50};
    int array2[] = {90, 80, 70, 60, 50};
    int array3[5] = {90, 80, 70, 0, 0};

    printf("%d %d %d %d %d\n", array1[0], array1[2], array1[3], array1[4], array1[1]);
    printf("%d %d %d %d %d\n", array2[0], array2[2], array2[3], array2[4], array2[1]);
    printf("%d %d %d %d %d\n", array3[0], array3[2], array3[3], array3[4], array3[1]);
 
}

void ex1__1()

{
    int student[5];
    student[0]=90;
    student[1]=80;
    student[2]=70;

    printf("泥? 踰덉?? ?븰?깮?쓽 ?젏?닔 : %d \n", student[0]);
    printf("?몢 踰덉?? ?븰?깮?쓽 ?젏?닔 : %d \n", student[1]);
    printf("?꽭 踰덉?? ?븰?깮?쓽 ?젏?닔 : %d \n", student[2]);
    printf("?꽕 踰덉?? ?븰?깮?쓽 ?젏?닔 : %d \n", student[3]);
    printf("?떎?꽢 踰덉?? ?븰?깮?쓽 ?젏?닔 : %d \n", student[4]);
 

}

//////// part 2 /////////



void ex9_14()
{
    int a;
    int result;

    printf("?젙?닔 ?엯?젰 : ");
    scanf ("%d",&a);

    result=factorial(a);
    printf("%d ?럺?넗由ъ뼹??? %d ?엯?땲?떎 : \n",a,result);
  
}
int factorial(int n)
{
    if(n<=1)
        return 1;

    else
        return n * factorial(n-1);
}

void ex9_13()
{
    _C();
 
}

void _C(void)
{
    int n = 1;
    while(n <= 5)
    {
        printf("????봽 ?꽌鍮꾩뒪 %d?쉶 \n", n);
        n++;
    }
}

void ex9_12()
{
    _B();
 
}
void _B(void)
{
    static int i=1;
    if (i>5)
    printf("????봽 ?꽌鍮꾩뒪 %d?쉶 \n",i);
    i=i+1;
    _B();
}



void ex9_11()
{
    _A();
 
}

void _A(void)
{
    printf("????봽 ?꽌鍮꾩뒪 \n");
    _A();
}


void ex9_10()
{
    register int i;
    clock_t startTime, endTime, result;
    
    startTime=clock();
    for (i=0; i<=MAX; i++)
    {
        printf("%d \n", i);
    } 
    endTime=clock();

    result=endTime-startTime;
    printf("?젅吏??뒪?꽣?쓽 蹂??닔 ?냽?룄 : %lf珥? \n", (double)result/1000);
 
    
}


void ex9_9()
{
    count();
    count();
    count();
  
}

void count(void)
{
    static int x = 0;
    int y = 0;

    x = x + 1;
    y = y + 1;

    printf("x?쓽 媛?: %d, y?쓽 媛?: %d\n", x, y);
}

void ex9_8()
{
    printf("?븿?닔 ?샇異? ?쟾 num : %d \n", num);
    grow();
    printf("?븿?닔 ?샇異? ?썑 num : %d \n", num);
}

void grow(void)
{
    num=60;
}


void ex9_7()
{ 
    int a = 5, b = 3;
    int result = 0;

    result = subtract(a, b);
    printf("類꾩뀍 寃곌낵 : %d \n", result);
    
    return 0;
}
int subtract(int x, int y)
{
    return x-y;
}


void ex9_5()
{
    int aaa = 10;
    printf("func_A() ?븿?닔?쓽 aaa 媛?: %d \n", aaa);

    func_A();

    return 0;
}
void func_A(void)
{
    int aaa = 20;
    int bbb = 30;

    printf("func_A() ?븿?닔?쓽 aaa 媛?: %d \n", aaa);
    printf("func_A() ?븿?닔?쓽 bbb 媛?: %d \n", bbb); 
}


void ex9_4()
{
    int result;
    printf("---?봽濡쒓렇?옩 ?떆?옉---\n");
    printf("?젙?닔 ?븳 媛쒕?? ?엯?젰?븯?꽭?슂 : ");

    result=sum();
    output(result);

}

int sum(void)
{
    int i=0, total=0, num=0;
    num=input();

    for(i=1; i<=num; i++)
    {
        total=total+i;
    }
    return total;
}

int input(void)
{
    int val;
    scanf("%d",&val);
    return val;
}
void output(int x)
{
    printf("寃곌낵 : %d \n", x);
 
}

void ex9_2()
{
    int i, j;
    int k;
    

    printf("?닽?옄 ?몢媛쒕?? ?엯?젰?븯?꽭?슂 : ");
    scanf("%d %d", &i, &j);

    k = max(i, j);
    printf("%d??? %d 以? ?겙 ?닔?뒗 %d?엯?땲?떎.\n", i, j, k);
}


void ex8_13()
{
    int num;

    for(num=0; num<101; num++)
    {
        if(num%2==1)
            continue;

        printf("%d \n", num);    
    }
}

void ex8_12()
{
    char ch;

    printf("臾몄옄瑜? ?엯?젰?븯?꽭?슂(q瑜? ?엯?젰?븯硫? 醫낅즺) : ");
    for( ;  ; )
    {
        scanf("%c",&ch);
        if(ch=='q')
            break;
    }
    printf("諛섎났臾몄쓣 醫낅즺?빀?땲?떎. \n");

}

void ex8_11() 
{
    char ch;

    printf("(T)hursday,(F)riday,(S)aturday \n");
    printf("臾몄옄 ?엯?젰(T,F,S) : ");

    scanf("%c", &ch);

    switch (ch) {
        case 'T':
        case 't':
            printf("Thursday \n");
            break;

        case 'F':
        case 'f':
            printf("Friday \n");
            break;

        case 'S':
        case 's':
            printf("Saturday \n");
            break;

        default:
            printf("?옒紐? ?엯?젰?릺?뿀?뒿?땲?떎. \n");
    }
}


void ex8_10()
{ 
    
    printf("紐뉖쾲?쓽 ?뒪?쐞移섎?? ?늻瑜댁떆寃좎뒿?땲源??");
    scanf("%d",&num);

    switch (num)
    {
        case 1:
            printf("?쟾?벑?씠 耳쒖쭚 \n");
            break;

        case 2:
            printf("?쟾?벑?씠 爰쇱쭚 \n");
            break;

        case 3:
            printf("怨좎옣 \n");
            break; 

        default:
            printf("?뒪?쐞移? ?삤瑜? : ?슦由ъ쭛 ?뒪?쐞移섎뒗 1踰? ~ 3踰덇퉴吏?留? ?엳?뒿?땲?떎. \n");       
    }
}



void ex8_8()
{
    printf("C ?뼵?뼱 ?꽦?쟻 ?엯?젰 : ");
    scanf("%d,&num");

    if(num>=95)
        printf("A+?엯?땲?떎. \n");
    else if(num>=90)
        printf("A?엯?땲?떎. \n");
    
    else if(num>=85)
        printf("B+?엯?땲?떎. \n");
    else if(num>=80)
        print("B?엯?땲?떎. \n");
    else
        printf("F?엯?땲?떎.\n");
 
} 

void ex8_7()
{
    printf("c?뼵?뼱 ?꽦?쟻 ?엯?젰 : ");
    scanf("%d",&num);

    if(num>=95)
        printf("A+?엯?땲?떎. \n");
    else if(num>=90)
        printf("A?엯?땲?떎. \n");
    else if(num>=85)
        printf("B+?엯?땲?떎. \n");
    else if(num>=80)
        printf("B?엯?땲?떎. \n");
    else
        printf("F?엯?땲?떎.\n");
 
}

void ex8_6()
{
    printf("?닽?옄 ?엯?젰: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("0蹂대떎 ?겙 ?닔媛? num?뿉 ????옣\n");
    } else if (num == 0) {
        printf("0?쓣 num?뿉 ????옣\n");
    } else {
        printf("0蹂대떎 ?옉??? ?닔媛? num?뿉 ????옣\n");
    }
}

void ex8_5()
{
    printf("?닽?옄 ?엯?젰 : ");
    scanf("%d,&num");

    if(num>0)
        printf("0蹂대떎 ?겙 ?닔媛? num?뿉 ????옣 \n");
    else
    {
        if(num==0)
            printf("0?씠 num?뿉 ????옣 \n");
        else
            printf("0蹂대떎 ?옉??? ?닔媛? num?뿉 ????옣 \n");

    }

}

void ex8_4()
{
  
    printf("?닽?옄 ?엯?젰 : ");
    scanf("%d",&num);

    if(num>0)
        printf("0蹂대떎 ?겙 ?닔媛? num?뿉 ????옣 \n");
    
    else
        printf("0 ?삉?뒗 0蹂대떎 ?옉??? ?닔媛? num?뿉 ????옣 \n");

}

void ex8_3()
{
    int age;

    printf("?굹?씠 ?엯?젰 : ");
    scanf("$d",&age);

    if(age>=15 && age<=100)
        printf("?쉶?썝 媛??엯?씠 媛??뒫?빀?땲?떎 \n");

    else 
        printf("?쉶?썝 媛??엯?씠 媛??뒫?빀?땲?떎 \n ");
}


void ex8_2()
{
    printf("5?쓽 諛곗닔 : ");
    for(num=1; num<=100; num++)
    {
        if(num%5==0)
           printf("%3d",num);
    }
}


void ex8_1()
{
    printf("?닽?옄瑜? ?엯?젰?븯?꽭?슂 : *");
    scanf("%d",&num);

    if(num>=0)
        printf("?뼇?닔?엯?땲?떎. \n");
    
    if(num<0)
        printf("?쓬?닔?엯?땲?떎. \n");

}


void ex7_16()
{
    int num=10;
    do
    { 
        printf("%d",num);
        num++;
        
    } while (num<10);

    printf("\n **while 臾몄쓣 醫낅즺?빀?땲?떎.** \n");
        
}
    
    
void ex7_15()
{
    int i,factorial=1;
    for(i=1; i<=10;)
    {
        factorial=factorial+i;
        i++;

    }
    printf("1遺??꽣 10源뚯???쓽 怨? :  %d \n", factorial);

}


void ex7_14()
{
    int i, factorial = 1;
    for(i = 1; i <= 10; i++)
    {
        factorial *= i;
    }
    printf("1遺??꽣 10源뚯???쓽 怨? : %d\n", factorial);
}

void ex7_13()
{
    int i=1, factorial=1;
    for(; i<=10; i++)
    {
        factorial=factorial+i;
    }
    printf("1遺??꽣 10源뚯???쓽 怨? : %d \n",factorial);
 
}

void ex7_12()
{
    int i;
    int factorial=1;

    for(i=1; i<=10; i++)

    {
        factorial=factorial+i;
    }
    printf("1遺??꽣 10源뚯???쓽 怨?: %d \n",factorial);
 
}



void ex7_11()
{
    int num,j=9,result=0;
    printf("?닽?옄瑜? ?엯?젰?븯?꽭?슂 : ");
    scanf("%d",&num);

    for (; num>0; num--)

    {
        for(j=9; j>0; j--)
        {
            result=num*j;
            printf("%d*%d=%d \n",num,j, result);

        }
        printf("-------\n");
    }
}


void ex7_10()
{
    int i, j;
    int result=0;

    for (i=2; i<10; j++)
    {
        for(j=1; j<10; j++);
        {
            result=i*j;
            printf("%d*%d=%d \n",i,j,result);
            
        }
        printf("-------\n");
    }
   
}


void ex7_9()
{
    int i;
    for(i=0; 1; i++)
    {
        printf("諛섎났 ?슏?닔 : %d \n",i);

    }
   
}


void ex7_8()
{
    int num=0, i, result=0;

    printf("?닽?옄瑜? ?엯?젰?븯?꽭?슂 :");
    scanf("%d",&num);

    for(i=1; i<10; i=i+2)
    {
        result=num*1;
        printf("%d*%d=%d?엯?땲?떎. \n",num,i,result);

    }

}

void ex7_7()
{
    int i, sum=0;
    for (i=0; i<=10; i++)
    {
        sum+sum+i;
        printf("i=%d,sum=%d \n", i, sum);

    }
    printf("-------諛섎났臾? 醫낅즺------\n");

}



void ex7_6()
{
    for(num=0; num<5; num++)
    {
        printf("諛섎났 ?궡?슜 : %d \n",num);

    }
    printf("諛섎났臾몄쓣 醫낅즺?븳 ?썑 : %d \n",num);

 
}

void ex7_5()
{
    int num=0, j=9, result=0;
    printf("?닽?옄瑜? ?엯?젰?븯?꽭?슂 : ");
    scanf("%d", &num);

    while (num>0)
    {
        while (j>0)
        {
            result=num*j;
            printf("%d*%d=%d \n", num,j,result);
            j--;           
        }
        num--;
        j=9;
        printf("--------\n");
    }
    

}

void ex7_4()
{
    int i=2;
    int j=1;
    int result=0;
  {
    while(i<10)
    {
        result=i*j;
        printf("%d*%d \n",i,j,result);
        
    }
    i++;
    j=1;
    printf("--------------\n");
  }

}

void ex7_3()
{
    int i=0;
    while(1)
    {
        printf("諛섎났 ?슏?닔 : %d \n", i);
        i++;

        //if 
        //break;

    }

}



void ex7_2()
{
    int i=0, sum=0;
    while (i<=10)
    {
        sum=sum+i;
        printf("i=%d,sum=%d \n",i,sum);

    }
    primtf("-----諛섎났臾? 醫낅즺-----\n");

}


void ex7_1()
{
    int num=0;
    while(num<5)
    {
        printf("諛섎났 ?궡?슜: %d \n",num);
        num++;
    }

    printf("諛섎났臾? 醫낅쪟?븳 ?썑 : %d \n",num);

}


void ex6_14()
{
    money num1=3000;
    money num2=10000;
    money num3=2000;
    money num4=0;

    num4=num1+num2+num3+num4;
    printf("total money : %dwon \n", num4);

    return 0;

}



void ex6_13()
{
    int num1=10;
    int num2=3;

    double result;

    result=num1/num2;
    printf("寃곌낵 : %lf \n",result);
    
    result=(double)num1/num2;
    printf("寃곌낵 : %lf \n",result);

    result=num1/(double)num2;
    printf("寃곌낵 : %lf \n",result);

    result=(double)num1/(double)num2;
    printf("寃곌낵 : %lf \n",result);

}


void ex6_12()
{
    char num1=130;
    int num2=3.14;
    double num3=3;

    primtf("%d,%d,%lf \n", num1,num2,num3);

}

void ex6_11()
{
    int num1=100;
    double num2=3.14;

    printf("%lf \n",num1+num2);


}


void ex6_10()
{
    char val1;
    int val2;

    printf("臾몄옄 ?엯?젰 : ");
    printf("%c",&val1);
    printf("ASCII 肄붾뱶 媛? %d?엯?땲?떎. \n",val1);
    
    printf("ASCII 肄붾뱶 媛? ?엯?젰 : ");
    scanf("%d",&val2);
    printf("臾몄옄濡? %c?엯?땲?떎. \n", val2);

}


void ex6_9()
{
    char vall;

    vall='A';
    printf("%d %c \n,vall,vall");

    vall='B';
    printf("%d %c \n,vall,vall");

    vall='C';
    printf("%d %c \n,vall,vall");

}


void ex6_8()
{
    float num1=0.123456;
    printf("float?삎: %f \n",num1);
    printf("float?삎: %.2f",num1);

}



void ex6_7()
{
    float num1=0.123456789012345;
    float num2=0.123456789012345;

    printf ("float?삎 : %f \n", num1);
    printf ("double?삎 : %f \n", num2);

    printf ("float?삎 : %.15f \n", num1);
    printf ("double?삎 : %.15lf \n", num2);

}


void ex6_6()
{
    float num1=3.4e+30;
    double num2=3.4e+30;

    printf("%f,%e \n", num1,num1);
    printf("%if,%le \n",num2,num2);

}


void ex6_5()
{
    printf("float?쓽 理쒖넖媛? %e, 理쒕뙎媛? %e \n", FLT_MIN, FLT_MAX);
    printf("double?삎?쓽 理쒖넖媛? %e, 理쒕뙎媛? %e \n", DBL_MIN, DBL_MAX);
    printf("long doublee?삎?쓽 理쒖넖媛? %e, 理쒕뙎媛? %e \n", LDBL_MIN, LDBL_MAX);

}

void ex6_4()
{
    char num1=-129;
    char num2=128;

    printf("%d \n", num1);
    printf("%d \n", num2);

    num1=-130;
    num2=129;

    printf("%d \n",num1);
    printf("%d \n", num2);


}



void ex6_3()
{
    signed char num1=130;
    unsigned char num2=130;

    printf("%d \n",num1);
    printf("%d \n",num2);

}



void ex6_2()
{
     printf("char?삎?쓽 ?겕湲? %d 諛붿씠?듃, %d諛붿씠?듃 \n", CHAR_MIN, CHAR_MAX);
     printf("short?쓽 ?겕湲? %d 諛붿씠?듃, %d諛붿씠?듃 \n", SHRT_MIN, SHRT_MAX);
     printf("int?삎?쓽 ?겕湲? %d 諛붿씠?듃, %d諛붿씠?듃 \n", INT_MIN, INT_MAX);
     printf("long?삎?쓽 ?겕湲? %d 諛붿씠?듃, %d諛붿씠?듃 \n", LONG_MIN, LONG_MAX);

} 



void ex6_1() 
{
    //?젙?닔?삎
    char num1=10;
    short num2=20;
    int num3=30;
    long num4=40;

    //?떎?닔?삎 
    float num5=3.14;
    double num6=3.15;
    long double num7=3.17;

    printf("\n------?젙?닔?삎 ?옄猷뚰삎怨? 蹂??닔?쓽 硫붾え由? ?겕湲?------\n");
    printf("char?삎?쓽 ?겕湲? %d 諛붿씠?듃, %d諛붿씠?듃 \n", sizeof(char), sizeof(num1));
    printf("short?쓽 ?겕湲? %d 諛붿씠?듃, %d諛붿씠?듃 \n", sizeof(short), sizeof(num1));
    printf("int?삎?쓽 ?겕湲? %d 諛붿씠?듃, %d諛붿씠?듃 \n", sizeof(int), sizeof(num1));
    printf("long?삎?쓽 ?겕湲? %d 諛붿씠?듃, %d諛붿씠?듃 \n", sizeof(long), sizeof(num1));

    printf("\n------?떎?닔?삎 ?옄猷뚰삎怨? 蹂??닔?쓽 硫붾え由? ?겕湲?------\n");
    printf("float?쓽 ?겕湲? %d 諛붿씠?듃, %d諛붿씠?듃 \n", sizeof(float), sizeof(num1));
    printf("double?삎?쓽 ?겕湲? %d 諛붿씠?듃, %d諛붿씠?듃 \n", sizeof(double), sizeof(num1));
    printf("long double?삎?쓽 ?겕湲? %d 諛붿씠?듃, %d諛붿씠?듃 \n", sizeof(long double), sizeof(num1));
}




void ex5_18()
{
    int num1=10;
    int num2=-10;

    int result1;
    int result2;

    result1= num1 >> 1;
    result2= num1 >> 1;

    printf("鍮꾪듃 ?떒?쐞>> ?뿰?궛?쓽 寃곌낵 %d \n",result1);
    printf("鍮꾪듃 ?떒?쐞>> ?뿰?궛?쓽 寃곌낵 %d \n",result2);
}



void ex5_17()
{
    int num1=10;
    int result1;
    
    result1 = num1 << 2;
    printf("鍮꾪듃 ?떒?쐞 << ?뿰?궛?쓽 寃곌낵 %d \n",result1);
}


void ex5_16()
{
    int num1=20;
    int result1;

    result1 =~num1;
    printf("鍮꾪듃 ?떒?쐞 ~ ?뿰?궛?쓽 寃곌낵 %d \n", result1);

}

void ex5_15()
{
    int num1=20, num2=16;
    int result1;

    result1=num1^num2;
    printf("鍮꾪듃?떒?쐞 ^ ?뿰?궛?쓽 寃곌낵 %d \n", result1);
}


void ex5_14()
{
    int num1=20, num2=16;
    int result1;

    result1=num1 | num2;
    printf("鍮꾪듃 ?떒?쐞 | ?뿰?궛?쓽 寃곌낵 %d \n", result1);

}

void ex5_13()
{
    int num1=20, num2=16;
    int result1;

    result1=num1 & num2;
    printf("鍮꾪듃?떒?쐞 & ?뿰?궛?쓽 寃곌낵 %d \n", result1);
}

void ex5_12()
{
    int num1=2, num2=3;
    int result1;

    result1=(num1>num2) ? num1:num2;
    printf("result1?뿉 ????옣?맂 媛? %d \n", result1);
 
}

void ex5_11()
{
    int num1=2,num2=3,num3=5;
    int result1, result2, result3;

    result1=(num1>0)&&(num2<10);
    result2=(num2<=2) || (num3>5);
    result3=!num3;

    printf("result1?뿉 ????옣?맂 媛? %d \n", result1);
    printf("result2?뿉 ????옣?맂 媛? %d \n", result2);
    printf("result3?뿉 ????옣?맂 媛? %d \n", result3);
 
}

 
void ex5_10()
{
    int num1=2, num2=4;
    int result1, result2, result3, result4;

    result1=(num1>num2);
    result2=(num1<=num2);
    result3=(num1==num2);
    result4=(num1!=num2);

    printf("result1?뿉 ????옣?맂 媛? %d \n", result1);
    printf("result2?뿉 ????옣?맂 媛? %d \n", result2);
    printf("result3?뿉 ????옣?맂 媛? %d \n", result3);
    printf("result4?뿉 ????옣?맂 媛? %d \n", result4);
 
}

void ex5_9()
{
    int num1=10,num2=10;

    printf("%d \n",++num1);
    printf("%d \n", num1);
    
    printf("%d \n",num2++);
    printf("%d \n",num2);
 
}

void ex5_8()
{
    int num1=10,num2=10;
    int a,b;

    num1=num1+1;
    a=num1;
    printf("%d,%d \n",a,num1);

    b=num2;
    num2=num2+1;
    printf("%d,%d \n",b,num2);
 
}

void ex5_7()
{
    int num1=10,num2=10;
    int a,b;

    a=++num1;
    printf("%d,%d \n",a,num1);
    
    b=num2++;
    printf("%d,%d \n", b, num2);
 
}

void ex5_6()
{
    int num1=10;
    printf("%d \n", num1);

    num1++;
    printf("%d \n", num1);

    ++num1;
    printf("%d \n", num1);

    --num1;
    printf("%d \n", num1);

    num1--;
    printf("%d \n", num1);
 

}

void ex5_5()
{
    int num1=1, num2=2, num3=3, num4=4, num5=5;

    num1=num1 + num2;
    printf("蹂듯빀 ?뜤?뀍 ?뿰?궛 寃곌낵 : num1?쓽 理쒖쥌媛? : %d \n", num1);

    num2=num2-2;
    printf("蹂듯빀 類꾩뀍 ?뿰?궛 寃곌낵 : num2?쓽 理쒖쥌媛? : %d \n", num2);

    num3=num3*2;
    printf("蹂듯빀 怨깆뀍 ?뿰?궛 寃곌낵 : num3?쓽 理쒖쥌媛? : %d \n", num3);

    num4=num4/2;
    printf("蹂듯빀 ?굹?닓?뀍 ?뿰?궛 寃곌낵 : num4?쓽 理쒖쥌媛? : %d \n", num4);

    num5=num5%2;
    printf("蹂듯빀 ?굹癒몄?? ?뿰?궛 寃곌낵 : num5?쓽 理쒖쥌媛? : %d \n", num5);

    printf("%d, %d, %d, %d, %d \n", num1, num2, num3, num4, num5);

}

void ex5_4()
{
    int num1, num2;

    num1=10/3;
    num2=10%3;

    printf("紐? : %d \n",num1);
    printf("?굹癒몄?? : %d \n",num2);
 
}

void ex5_3()
{
    int a,b;
    a=6;
    b=2;

    printf("?뜤?뀍 ?뿰?궛 寃곌낵 : %d \n", a+b);
    printf("類꾩뀍 ?뿰?궛 寃곌낵 : %d \n", a-b);
    printf("怨깆뀍 ?뿰?궛 寃곌낵 : %d \n", a*b);
    printf("?굹?늻湲? ?뿰?궛 寃곌낵 : %d \n", a/b);
    printf("?굹癒몄?? ?뿰?궛 寃곌낵 : %d \n", a%b);

  
}


void ex5_2()
{
    int i=0, j=0, k=0;
    printf("i=%d, j=%d,k=%d \n",i,j,k);

    i=1;
    j=5;
    k=7;

    printf("i=%d,j=%d,k=%d \n",i,j,k);

 
}

void ex5_1()
{
    int a;
    int b;

    a=3;
    b=a+5;

    printf("a?쓽 媛? : %d \n",a);
    printf("b?쓽 媛? : %d \n",b);

    printf("蹂??닔 a?쓽 二쇱냼 : %x \n", &a);
    printf("蹂??닔 b?쓽 二쇱냼 : %x \n", &b);


}


#define PI 3.14
#define NUM 100
#define BUFFER_SIZE 200

void ex4_8()
{
    printf("%lf \n",PI);
    printf("%d \n",NUM);
    printf("%d \n", BUFFER_SIZE);
 
}

void ex4_7()
{
    
    //const int NUM;
    //NUM=100;

 
}

void ex4_6()
{
    //                                                                          
    //const int NUM=100;
    //const double PI=3.14;

    //NUM=200;
    //PI=4.14;

}


void ex4_5()
{
    printf("臾몄옄?뿴 ?긽?닔?뒗 %s?엯?땲?떎. \n","A");
    printf("臾몄옄?뿴 ?긽?닔?뒗 %s?엯?땲?떎. \n","10+10");
    printf("臾몄옄?뿴 ?긽?닔?뒗 %s?엯?땲?떎. \n","Hi, everyone");
    
}

void ex4_4()
{
    printf("臾몄옄 ?긽?닔 %c %c %c?뒗 \n",'a','b','c');
    printf("ASCII 肄붾뱶 10吏꾩닔濡? %d %d %d \n",'a','b','c');
    printf("ASCII 肄붾뱶 16吏꾩닔濡? %x %x %x \n",'a','b','c');

    printf("\n--------------------\n");

    printf("臾몄옄 ?긽?닔 %c %c %c?뒗 \n",'!','@','#');
    printf("ASCII 肄붾뱶 10吏꾩닔濡? %d %d %d \n",'!','@','#');
    printf("ASCII 肄붾뱶 16吏꾩닔濡? %x %x %x \n",'!','@','#');
 

}

void ex4_3()
{
    printf("臾몄옄 ?긽?닔 %c %c %c?엯?땲?떎. \n",'a','b','c');
    printf("臾몄옄 ?긽?닔 %c %c %c?엯?땲?떎. \n", '!','@','#');
 
}


void ex4_2()
{
    printf("?떎?닔?삎 ?긽?닔 %1f + %1f = %1f =?엯?땲?떎. \n", 3.1, 4.1, 3.1+4.1);

  
}


void ex4_1()
{
    printf("10吏꾩닔 ?젙?닔?삎 ?긽?닔 %d+%d=%d?엯?땲?떎. \n",10,20,10+20);
    printf("16吏꾩닔 ?젙?닔?삎 ?긽?닔 %x+%x=%x?엯?땲?떎. \n",0x10,0x20,0x10+0x20);
    printf("8吏꾩닔 ?젙?닔?삎 ?긽?닔 %o+%o=%o?엯?땲?떎. \n", 010,020, 010+020);

    
}

void ex3_9()
{
    int a=3;
    int b=4;

    printf("a?쓽 媛? : %d \n",a);
    printf("b?쓽 媛? : %d \n",b);

    printf("蹂??닔 a?쓽 ?떆?옉 二쇱냼 : %x \n", &a);
    printf("蹂??닔 b?쓽 ?떆?옉 二쇱냼 : %x \n", &b);
 
}

void ex3_8()

{
    int appleBox=30;
    int grapeBox=20;
    int total;

    total=appleBox + grapeBox;
    printf("珥? %d諛뺤뒪媛? ?엳?뒿?땲?떎. \n", total);

     
}  


void ex3_7()
{
    int a;
    int b;

    a=1;
    b=2;

    int c;
    c=3; 
    
    printf("a?쓽 媛? : %d \n", a);
    printf("b?쓽 媛? : %d \n", b);
    printf("c?쓽 媛? : %d \n", c);
 
}


void ex3_6()
{
    int a=0;
    int b=1;

    printf("a?쓽 媛믪?? %d?엯?땲?떎.\n",a);
    printf("b?쓽 媛믪?? %d?엯?땲?떎.\n",b);

    a=a+10;
    b=b+10;

    printf("蹂?寃쎈맂 a?쓽 媛믪?? %d?엯?땲?떎. \n",a);
    printf("蹂?寃쎈맂 b?쓽 媛믪?? %d?엯?땲?떎.\n",b);
 
}

void ex3_5()
{
    int a=0;
    int b=1;

    printf("a?쓽 媛믪?? %d?엯?땲?떎. \n",a);
    printf("b?쓽 媛믪?? %d?엯?땲?떎. \n",b);
 
}

void ex3_4()

{
    int a;
    int b;

    printf("%d \n",a);
    printf("%d \n",b);
 
}

void ex3_3()
{
    int a,b;
    float c,d;

}

void ex3_2()
{
    int a;
    float b;
 
}

void ex3_1()
{
    int a;
    int b;
   
}

void ex2_13(){

    float f1,f2;
    double d1,d2;

    printf("float?삎 ?떎?닔 ?몢 媛? ?엯?젰: ");
    scanf("%f %e", &f1, &f2);
    printf("float?삎 ?떎?닔 ?몢 媛? ?엯?젰 : f1=%f, f2=%e \n", f1,f2);

    printf("double?삎 ?떎?닔 ?몢 媛? ?엯?젰 : ");
    scanf("%1f %1e", &d1, &d2);
    printf("double?삎 ?떎?닔 異쒕젰 : d1=%1f, d2=%1e \n", d1, d2);
 
}

void ex2_12()
{
    int a,b,c;

    printf("10吏꾩닔 ?젙?닔 1媛? ?엯?젰: ");
    scanf("&d",&a);
    printf("10吏꾩닔 : %d,16吏꾩닔 : %x,8吏꾩닔 : %o \n",a,a,a);

    printf("16吏꾩닔 ?젙?닔 1媛? ?엯?젰 : ");
    scanf("&x",&b);
    printf("10吏꾩닔 : %d,16吏꾩닔 : %x,8吏꾩닔 : %o \n",b,b,b);

    printf("8吏꾩닔 ?젙?닔  1媛? ?엯?젰 : ");
    scanf("&o",&c);
    printf("10吏꾩닔 : %d,16吏꾩닔 : %x,8吏꾩닔 : %o \n",c,c,c);

  
}

 
void ex2_11()
 {
    int age;
    printf("What is your age?:");
    scanf("%d",&age);
    printf("Wow! really? Are you %d years old? \n", age);
 }


void ex2_10()
{
    printf("%03d,%03d,%03d \n", 1,20,300);
    printf("%-3d,%-3d,%-3d \n", 1,20,300);
    printf("%+3d,%+3d,%+3d \n", 1,20,300);

    printf("%+3d, %+3d, %+3d \n",1,20,-300);

   
} 


void ex2_9()
{
    printf("%f \n", 0.000123);
    printf("%F \n", 0.0001236);
    
    printf("%e \n", 0.000123);
    printf("%E \n", 0.0001236);

    printf("%g \n", 0.000123);
    printf("%G \n", 0.0000123456);

    printf("?삱?빐 ?슦由щ굹?씪 寃쎌젣 ?꽦?옣瑜좎쓣 5%% ?엯?땲?떎.\n");
 
}

void ex2_8()
{
    printf("%d \n", 2147483647);
    printf("%lld \n", 2147483650LL);
    printf("%u \n", 4294967295);

 
}

void ex2_7()
{
    printf("a瑜? ???臾몄옄濡? ?몴?쁽?븯硫? %c?엯?땲?떎.\n",'A');
    printf("%s %c?엯?땲?떎. \n", "a瑜? ???臾몄옄濡? ?몴?쁽?븯硫?", 'A');
    printf("%s %d \n","2怨깊븯湲? 3????",2*3);
 
}



void ex2_6()
{  
   printf("10吏꾩닔 ?젙?닔: %d \n",0.5);
   printf("10吏꾩닔 ?떎?닔: %f \n",0.5);
   printf("10吏꾩닔 ?떎?닔: %1f \n",0.5);

   printf("?냼?닔?젏 ?씠?븯 6?옄由? ?씠?긽 : %f \n, 0.5655678");
   printf("?냼?닔?젏 ?씠?븯 6?옄由? ?씠?긽 : %lf \n, 0.5667784");

}

  

void ex2_5()
{
   printf("10吏꾩닔 : %d?뒗 16吏꾩닔 : %x, 8吏꾩닔 : %o?엯?땲?떎. /n" , 50,50,50);
   printf("10吏꾩닔 : %d?뒗 16吏꾩닔 : %x, 8吏꾩닔 : %o?엯?땲?떎. /n" , -50,-50,-50);    
    // 16吏꾩닔??? 8吏꾩닔?뒗 ?쓬?닔 ?몴?쁽 遺덇??
   
}

void ex2_4()
{
    printf("%d ?뜑?븯湲? %d?뒗 %d?엯?땲?떎.\n",3,5,3+5);
    printf("%i ?뜑?븯湲? %i?뒗 %i?엯?땲?떎.\n",3,5,3+5);
    printf("%d-%d = %d?엯?땲?떎.\n",3,5,3-5);
    printf("%i-%i = %i?엯?땲?떎.\n",3,5,3-5);
   
}

void ex2_3()
{  
    printf("\t Hello C! \n Hello world! \n");
    printf("?겙?뵲?샂?몴 : \" \" \n");
    printf("?옉????뵲?샂?몴 : \' \' \n");
    printf("?뿭?뒳?옒?떆 : \\ \n");
 
}

void ex2_2()
{
    printf("heollo C world \n!");
 
}


void ex2_1()
{
    printf("Hello World!");
 
}
