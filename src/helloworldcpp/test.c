#include <stdio.h>
#include <string.h>
#include <float.h>
#include <limits.h>
#include <time.h>
#include "test.h"
#define MAX 1000000
#define CODE 
int num;

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

    printf("ë¬¸ì ?ƒ?ˆ˜ : %c %c %c %c \n",'A','B','C','D');
    printf("ë¬¸ì ë°°ì—´ ë³?ê²? ? „ : %c %c %c %c \n",array[0],array[1],array[2],array[3]);

    array[0]='D';
    array[1]='C';
    array[2]='B';   
    array[3]='A';

    printf("ë¬¸ì ë°°ì—´ ë³?ê²? ?›„ : %c %c %c %c \n",array[1],array[2],array[3]);
    
    printf("ë¬¸ì ë°°ì—´ array?˜ ?¬ê¸? : %d \n",sizeof(array));
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

    printf("ë°°ì—´?˜ ?¬ê¸? : %d ?¬?¸?„°?˜ ?¬ê¸? : %d \n", sizeof(array),sizeof(p));
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

    printf("add ?•¨?ˆ˜?˜ ì£¼ì†Œ : %p \n", add);
    printf("?•¨?ˆ˜ ?¬?¸?„°?˜ ì£¼ì†Œ : %p \n",&pointer);

    pointer=add;
    pointer(x,y);

    return 0;
    
}

void add(double num1, double num2)
{
    double result;
    result=num1 + num2;
    printf("%.1f + %.1f = %.1f?…?‹ˆ?‹¤. \n ", num1, num2, result);
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
    // ?¬?¸?„° ë³??ˆ˜ ?„ ?–¸ 
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

    printf("ì£¼ì†Œ : %x, ê°? : %d, ê°?: %d \n",&num1,num1,*&num1);
    printf("ì£¼ì†Œ : %x, ê°? : %d, ê°?: %d \n",&num2,num2,*&num2);

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
           printf("? •?ˆ˜ë¥? ?…? ¥?•˜?„¸?š” : ");
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
    //2ì°¨ì› ë°°ì—´ ?„ ?–¸ 
    int array[4][3];

    array[0][0]=1; array[0][1]=2; array[0][2]=3; 
    array[1][0]=4; array[1][1]=5; array[1][2]=6;
    array[2][0]=7; array[2][1]=8; array[2][2]=9;
    array[3][0]=10; array[3][1]=11; array[3][2]=12;

    printf("?ˆ«?ë¥? ?…? ¥?•˜?„¸?š”: ");
    scanf("%d", &num);
    printf("?…? ¥?•œ ?ˆ«??Š” %d?…?‹ˆ?‹¤.\n", num);

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
        printf("ë°°ì—´?˜ ?š”?†Œ array[%d]?˜ ê°? : %d \n",i,array[i]);
    }

    printf("ì´ì ?´ %d?´ê³?", total);
    printf("?‰ê· ì?? %.21f?…?‹ˆ?‹¤. \n",(double)total/3);
 
}

void ex1__3()
{
    int array[3]={87,99,80};
    int total=0;

    total=array[0]+array[1]+array[2];
    printf("ì´ì ??? %d?´ê³?", total);
    printf("?‰ê· ì?? %.21f?…?‹ˆ?‹¤. \n",(double)total/3);
 

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

    printf("ì²? ë²ˆì?? ?•™?ƒ?˜ ? ?ˆ˜ : %d \n", student[0]);
    printf("?‘ ë²ˆì?? ?•™?ƒ?˜ ? ?ˆ˜ : %d \n", student[1]);
    printf("?„¸ ë²ˆì?? ?•™?ƒ?˜ ? ?ˆ˜ : %d \n", student[2]);
    printf("?„¤ ë²ˆì?? ?•™?ƒ?˜ ? ?ˆ˜ : %d \n", student[3]);
    printf("?‹¤?„¯ ë²ˆì?? ?•™?ƒ?˜ ? ?ˆ˜ : %d \n", student[4]);
 

}

//////// part 2 /////////



void ex9_14()
{
    int a;
    int result;

    printf("? •?ˆ˜ ?…? ¥ : ");
    scanf ("%d",&a);

    result=factorial(a);
    printf("%d ?™?† ë¦¬ì–¼??? %d ?…?‹ˆ?‹¤ : \n",a,result);
  
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
        printf("????”„ ?„œë¹„ìŠ¤ %d?šŒ \n", n);
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
    printf("????”„ ?„œë¹„ìŠ¤ %d?šŒ \n",i);
    i=i+1;
    _B();
}



void ex9_11()
{
    _A();
 
}

void _A(void)
{
    printf("????”„ ?„œë¹„ìŠ¤ \n");
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
    printf("? ˆì§??Š¤?„°?˜ ë³??ˆ˜ ?†?„ : %lfì´? \n", (double)result/1000);
 
    
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

    printf("x?˜ ê°?: %d, y?˜ ê°?: %d\n", x, y);
}

void ex9_8()
{
    printf("?•¨?ˆ˜ ?˜¸ì¶? ? „ num : %d \n", num);
    grow();
    printf("?•¨?ˆ˜ ?˜¸ì¶? ?›„ num : %d \n", num);
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
    printf("ëº„ì…ˆ ê²°ê³¼ : %d \n", result);
    
    return 0;
}
int subtract(int x, int y)
{
    return x-y;
}


void ex9_5()
{
    int aaa = 10;
    printf("func_A() ?•¨?ˆ˜?˜ aaa ê°?: %d \n", aaa);

    func_A();

    return 0;
}
void func_A(void)
{
    int aaa = 20;
    int bbb = 30;

    printf("func_A() ?•¨?ˆ˜?˜ aaa ê°?: %d \n", aaa);
    printf("func_A() ?•¨?ˆ˜?˜ bbb ê°?: %d \n", bbb); 
}


void ex9_4()
{
    int result;
    printf("---?”„ë¡œê·¸?¨ ?‹œ?‘---\n");
    printf("? •?ˆ˜ ?•œ ê°œë?? ?…? ¥?•˜?„¸?š” : ");

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
    printf("ê²°ê³¼ : %d \n", x);
 
}

void ex9_2()
{
    int i, j;
    int k;
    

    printf("?ˆ«? ?‘ê°œë?? ?…? ¥?•˜?„¸?š” : ");
    scanf("%d %d", &i, &j);

    k = max(i, j);
    printf("%d??? %d ì¤? ?° ?ˆ˜?Š” %d?…?‹ˆ?‹¤.\n", i, j, k);
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

    printf("ë¬¸ìë¥? ?…? ¥?•˜?„¸?š”(që¥? ?…? ¥?•˜ë©? ì¢…ë£Œ) : ");
    for( ;  ; )
    {
        scanf("%c",&ch);
        if(ch=='q')
            break;
    }
    printf("ë°˜ë³µë¬¸ì„ ì¢…ë£Œ?•©?‹ˆ?‹¤. \n");

}

void ex8_11() 
{
    char ch;

    printf("(T)hursday,(F)riday,(S)aturday \n");
    printf("ë¬¸ì ?…? ¥(T,F,S) : ");

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
            printf("?˜ëª? ?…? ¥?˜?—ˆ?Šµ?‹ˆ?‹¤. \n");
    }
}


void ex8_10()
{ 
    
    printf("ëª‡ë²ˆ?˜ ?Š¤?œ„ì¹˜ë?? ?ˆ„ë¥´ì‹œê² ìŠµ?‹ˆê¹??");
    scanf("%d",&num);

    switch (num)
    {
        case 1:
            printf("? „?“±?´ ì¼œì§ \n");
            break;

        case 2:
            printf("? „?“±?´ êº¼ì§ \n");
            break;

        case 3:
            printf("ê³ ì¥ \n");
            break; 

        default:
            printf("?Š¤?œ„ì¹? ?˜¤ë¥? : ?š°ë¦¬ì§‘ ?Š¤?œ„ì¹˜ëŠ” 1ë²? ~ 3ë²ˆê¹Œì§?ë§? ?ˆ?Šµ?‹ˆ?‹¤. \n");       
    }
}



void ex8_8()
{
    printf("C ?–¸?–´ ?„±?  ?…? ¥ : ");
    scanf("%d,&num");

    if(num>=95)
        printf("A+?…?‹ˆ?‹¤. \n");
    else if(num>=90)
        printf("A?…?‹ˆ?‹¤. \n");
    
    else if(num>=85)
        printf("B+?…?‹ˆ?‹¤. \n");
    else if(num>=80)
        print("B?…?‹ˆ?‹¤. \n");
    else
        printf("F?…?‹ˆ?‹¤.\n");
 
} 

void ex8_7()
{
    printf("c?–¸?–´ ?„±?  ?…? ¥ : ");
    scanf("%d",&num);

    if(num>=95)
        printf("A+?…?‹ˆ?‹¤. \n");
    else if(num>=90)
        printf("A?…?‹ˆ?‹¤. \n");
    else if(num>=85)
        printf("B+?…?‹ˆ?‹¤. \n");
    else if(num>=80)
        printf("B?…?‹ˆ?‹¤. \n");
    else
        printf("F?…?‹ˆ?‹¤.\n");
 
}

void ex8_6()
{
    printf("?ˆ«? ?…? ¥: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("0ë³´ë‹¤ ?° ?ˆ˜ê°? num?— ????¥\n");
    } else if (num == 0) {
        printf("0?„ num?— ????¥\n");
    } else {
        printf("0ë³´ë‹¤ ?‘??? ?ˆ˜ê°? num?— ????¥\n");
    }
}

void ex8_5()
{
    printf("?ˆ«? ?…? ¥ : ");
    scanf("%d,&num");

    if(num>0)
        printf("0ë³´ë‹¤ ?° ?ˆ˜ê°? num?— ????¥ \n");
    else
    {
        if(num==0)
            printf("0?´ num?— ????¥ \n");
        else
            printf("0ë³´ë‹¤ ?‘??? ?ˆ˜ê°? num?— ????¥ \n");

    }

}

void ex8_4()
{
  
    printf("?ˆ«? ?…? ¥ : ");
    scanf("%d",&num);

    if(num>0)
        printf("0ë³´ë‹¤ ?° ?ˆ˜ê°? num?— ????¥ \n");
    
    else
        printf("0 ?˜?Š” 0ë³´ë‹¤ ?‘??? ?ˆ˜ê°? num?— ????¥ \n");

}

void ex8_3()
{
    int age;

    printf("?‚˜?´ ?…? ¥ : ");
    scanf("$d",&age);

    if(age>=15 && age<=100)
        printf("?šŒ?› ê°??…?´ ê°??Š¥?•©?‹ˆ?‹¤ \n");

    else 
        printf("?šŒ?› ê°??…?´ ê°??Š¥?•©?‹ˆ?‹¤ \n ");
}


void ex8_2()
{
    printf("5?˜ ë°°ìˆ˜ : ");
    for(num=1; num<=100; num++)
    {
        if(num%5==0)
           printf("%3d",num);
    }
}


void ex8_1()
{
    printf("?ˆ«?ë¥? ?…? ¥?•˜?„¸?š” : *");
    scanf("%d",&num);

    if(num>=0)
        printf("?–‘?ˆ˜?…?‹ˆ?‹¤. \n");
    
    if(num<0)
        printf("?Œ?ˆ˜?…?‹ˆ?‹¤. \n");

}


void ex7_16()
{
    int num=10;
    do
    { 
        printf("%d",num);
        num++;
        
    } while (num<10);

    printf("\n **while ë¬¸ì„ ì¢…ë£Œ?•©?‹ˆ?‹¤.** \n");
        
}
    
    
void ex7_15()
{
    int i,factorial=1;
    for(i=1; i<=10;)
    {
        factorial=factorial+i;
        i++;

    }
    printf("1ë¶??„° 10ê¹Œì???˜ ê³? :  %d \n", factorial);

}


void ex7_14()
{
    int i, factorial = 1;
    for(i = 1; i <= 10; i++)
    {
        factorial *= i;
    }
    printf("1ë¶??„° 10ê¹Œì???˜ ê³? : %d\n", factorial);
}

void ex7_13()
{
    int i=1, factorial=1;
    for(; i<=10; i++)
    {
        factorial=factorial+i;
    }
    printf("1ë¶??„° 10ê¹Œì???˜ ê³? : %d \n",factorial);
 
}

void ex7_12()
{
    int i;
    int factorial=1;

    for(i=1; i<=10; i++)

    {
        factorial=factorial+i;
    }
    printf("1ë¶??„° 10ê¹Œì???˜ ê³?: %d \n",factorial);
 
}



void ex7_11()
{
    int num,j=9,result=0;
    printf("?ˆ«?ë¥? ?…? ¥?•˜?„¸?š” : ");
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
        printf("ë°˜ë³µ ?šŸ?ˆ˜ : %d \n",i);

    }
   
}


void ex7_8()
{
    int num=0, i, result=0;

    printf("?ˆ«?ë¥? ?…? ¥?•˜?„¸?š” :");
    scanf("%d",&num);

    for(i=1; i<10; i=i+2)
    {
        result=num*1;
        printf("%d*%d=%d?…?‹ˆ?‹¤. \n",num,i,result);

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
    printf("-------ë°˜ë³µë¬? ì¢…ë£Œ------\n");

}



void ex7_6()
{
    for(num=0; num<5; num++)
    {
        printf("ë°˜ë³µ ?‚´?š© : %d \n",num);

    }
    printf("ë°˜ë³µë¬¸ì„ ì¢…ë£Œ?•œ ?›„ : %d \n",num);

 
}

void ex7_5()
{
    int num=0, j=9, result=0;
    printf("?ˆ«?ë¥? ?…? ¥?•˜?„¸?š” : ");
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
        printf("ë°˜ë³µ ?šŸ?ˆ˜ : %d \n", i);
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
    primtf("-----ë°˜ë³µë¬? ì¢…ë£Œ-----\n");

}


void ex7_1()
{
    int num=0;
    while(num<5)
    {
        printf("ë°˜ë³µ ?‚´?š©: %d \n",num);
        num++;
    }

    printf("ë°˜ë³µë¬? ì¢…ë¥˜?•œ ?›„ : %d \n",num);

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
    printf("ê²°ê³¼ : %lf \n",result);
    
    result=(double)num1/num2;
    printf("ê²°ê³¼ : %lf \n",result);

    result=num1/(double)num2;
    printf("ê²°ê³¼ : %lf \n",result);

    result=(double)num1/(double)num2;
    printf("ê²°ê³¼ : %lf \n",result);

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

    printf("ë¬¸ì ?…? ¥ : ");
    printf("%c",&val1);
    printf("ASCII ì½”ë“œ ê°? %d?…?‹ˆ?‹¤. \n",val1);
    
    printf("ASCII ì½”ë“œ ê°? ?…? ¥ : ");
    scanf("%d",&val2);
    printf("ë¬¸ìë¡? %c?…?‹ˆ?‹¤. \n", val2);

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
    printf("float?˜•: %f \n",num1);
    printf("float?˜•: %.2f",num1);

}



void ex6_7()
{
    float num1=0.123456789012345;
    float num2=0.123456789012345;

    printf ("float?˜• : %f \n", num1);
    printf ("double?˜• : %f \n", num2);

    printf ("float?˜• : %.15f \n", num1);
    printf ("double?˜• : %.15lf \n", num2);

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
    printf("float?˜ ìµœì†Ÿê°? %e, ìµœëŒ“ê°? %e \n", FLT_MIN, FLT_MAX);
    printf("double?˜•?˜ ìµœì†Ÿê°? %e, ìµœëŒ“ê°? %e \n", DBL_MIN, DBL_MAX);
    printf("long doublee?˜•?˜ ìµœì†Ÿê°? %e, ìµœëŒ“ê°? %e \n", LDBL_MIN, LDBL_MAX);

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
     printf("char?˜•?˜ ?¬ê¸? %d ë°”ì´?Š¸, %dë°”ì´?Š¸ \n", CHAR_MIN, CHAR_MAX);
     printf("short?˜ ?¬ê¸? %d ë°”ì´?Š¸, %dë°”ì´?Š¸ \n", SHRT_MIN, SHRT_MAX);
     printf("int?˜•?˜ ?¬ê¸? %d ë°”ì´?Š¸, %dë°”ì´?Š¸ \n", INT_MIN, INT_MAX);
     printf("long?˜•?˜ ?¬ê¸? %d ë°”ì´?Š¸, %dë°”ì´?Š¸ \n", LONG_MIN, LONG_MAX);

} 



void ex6_1() 
{
    //? •?ˆ˜?˜•
    char num1=10;
    short num2=20;
    int num3=30;
    long num4=40;

    //?‹¤?ˆ˜?˜• 
    float num5=3.14;
    double num6=3.15;
    long double num7=3.17;

    printf("\n------? •?ˆ˜?˜• ?ë£Œí˜•ê³? ë³??ˆ˜?˜ ë©”ëª¨ë¦? ?¬ê¸?------\n");
    printf("char?˜•?˜ ?¬ê¸? %d ë°”ì´?Š¸, %dë°”ì´?Š¸ \n", sizeof(char), sizeof(num1));
    printf("short?˜ ?¬ê¸? %d ë°”ì´?Š¸, %dë°”ì´?Š¸ \n", sizeof(short), sizeof(num1));
    printf("int?˜•?˜ ?¬ê¸? %d ë°”ì´?Š¸, %dë°”ì´?Š¸ \n", sizeof(int), sizeof(num1));
    printf("long?˜•?˜ ?¬ê¸? %d ë°”ì´?Š¸, %dë°”ì´?Š¸ \n", sizeof(long), sizeof(num1));

    printf("\n------?‹¤?ˆ˜?˜• ?ë£Œí˜•ê³? ë³??ˆ˜?˜ ë©”ëª¨ë¦? ?¬ê¸?------\n");
    printf("float?˜ ?¬ê¸? %d ë°”ì´?Š¸, %dë°”ì´?Š¸ \n", sizeof(float), sizeof(num1));
    printf("double?˜•?˜ ?¬ê¸? %d ë°”ì´?Š¸, %dë°”ì´?Š¸ \n", sizeof(double), sizeof(num1));
    printf("long double?˜•?˜ ?¬ê¸? %d ë°”ì´?Š¸, %dë°”ì´?Š¸ \n", sizeof(long double), sizeof(num1));
}




void ex5_18()
{
    int num1=10;
    int num2=-10;

    int result1;
    int result2;

    result1= num1 >> 1;
    result2= num1 >> 1;

    printf("ë¹„íŠ¸ ?‹¨?œ„>> ?—°?‚°?˜ ê²°ê³¼ %d \n",result1);
    printf("ë¹„íŠ¸ ?‹¨?œ„>> ?—°?‚°?˜ ê²°ê³¼ %d \n",result2);
}



void ex5_17()
{
    int num1=10;
    int result1;
    
    result1 = num1 << 2;
    printf("ë¹„íŠ¸ ?‹¨?œ„ << ?—°?‚°?˜ ê²°ê³¼ %d \n",result1);
}


void ex5_16()
{
    int num1=20;
    int result1;

    result1 =~num1;
    printf("ë¹„íŠ¸ ?‹¨?œ„ ~ ?—°?‚°?˜ ê²°ê³¼ %d \n", result1);

}

void ex5_15()
{
    int num1=20, num2=16;
    int result1;

    result1=num1^num2;
    printf("ë¹„íŠ¸?‹¨?œ„ ^ ?—°?‚°?˜ ê²°ê³¼ %d \n", result1);
}


void ex5_14()
{
    int num1=20, num2=16;
    int result1;

    result1=num1 | num2;
    printf("ë¹„íŠ¸ ?‹¨?œ„ | ?—°?‚°?˜ ê²°ê³¼ %d \n", result1);

}

void ex5_13()
{
    int num1=20, num2=16;
    int result1;

    result1=num1 & num2;
    printf("ë¹„íŠ¸?‹¨?œ„ & ?—°?‚°?˜ ê²°ê³¼ %d \n", result1);
}

void ex5_12()
{
    int num1=2, num2=3;
    int result1;

    result1=(num1>num2) ? num1:num2;
    printf("result1?— ????¥?œ ê°? %d \n", result1);
 
}

void ex5_11()
{
    int num1=2,num2=3,num3=5;
    int result1, result2, result3;

    result1=(num1>0)&&(num2<10);
    result2=(num2<=2) || (num3>5);
    result3=!num3;

    printf("result1?— ????¥?œ ê°? %d \n", result1);
    printf("result2?— ????¥?œ ê°? %d \n", result2);
    printf("result3?— ????¥?œ ê°? %d \n", result3);
 
}

 
void ex5_10()
{
    int num1=2, num2=4;
    int result1, result2, result3, result4;

    result1=(num1>num2);
    result2=(num1<=num2);
    result3=(num1==num2);
    result4=(num1!=num2);

    printf("result1?— ????¥?œ ê°? %d \n", result1);
    printf("result2?— ????¥?œ ê°? %d \n", result2);
    printf("result3?— ????¥?œ ê°? %d \n", result3);
    printf("result4?— ????¥?œ ê°? %d \n", result4);
 
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
    printf("ë³µí•© ?§?…ˆ ?—°?‚° ê²°ê³¼ : num1?˜ ìµœì¢…ê°? : %d \n", num1);

    num2=num2-2;
    printf("ë³µí•© ëº„ì…ˆ ?—°?‚° ê²°ê³¼ : num2?˜ ìµœì¢…ê°? : %d \n", num2);

    num3=num3*2;
    printf("ë³µí•© ê³±ì…ˆ ?—°?‚° ê²°ê³¼ : num3?˜ ìµœì¢…ê°? : %d \n", num3);

    num4=num4/2;
    printf("ë³µí•© ?‚˜?ˆ—?…ˆ ?—°?‚° ê²°ê³¼ : num4?˜ ìµœì¢…ê°? : %d \n", num4);

    num5=num5%2;
    printf("ë³µí•© ?‚˜ë¨¸ì?? ?—°?‚° ê²°ê³¼ : num5?˜ ìµœì¢…ê°? : %d \n", num5);

    printf("%d, %d, %d, %d, %d \n", num1, num2, num3, num4, num5);

}

void ex5_4()
{
    int num1, num2;

    num1=10/3;
    num2=10%3;

    printf("ëª? : %d \n",num1);
    printf("?‚˜ë¨¸ì?? : %d \n",num2);
 
}

void ex5_3()
{
    int a,b;
    a=6;
    b=2;

    printf("?§?…ˆ ?—°?‚° ê²°ê³¼ : %d \n", a+b);
    printf("ëº„ì…ˆ ?—°?‚° ê²°ê³¼ : %d \n", a-b);
    printf("ê³±ì…ˆ ?—°?‚° ê²°ê³¼ : %d \n", a*b);
    printf("?‚˜?ˆ„ê¸? ?—°?‚° ê²°ê³¼ : %d \n", a/b);
    printf("?‚˜ë¨¸ì?? ?—°?‚° ê²°ê³¼ : %d \n", a%b);

  
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

    printf("a?˜ ê°? : %d \n",a);
    printf("b?˜ ê°? : %d \n",b);

    printf("ë³??ˆ˜ a?˜ ì£¼ì†Œ : %x \n", &a);
    printf("ë³??ˆ˜ b?˜ ì£¼ì†Œ : %x \n", &b);


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
    printf("ë¬¸ì?—´ ?ƒ?ˆ˜?Š” %s?…?‹ˆ?‹¤. \n","A");
    printf("ë¬¸ì?—´ ?ƒ?ˆ˜?Š” %s?…?‹ˆ?‹¤. \n","10+10");
    printf("ë¬¸ì?—´ ?ƒ?ˆ˜?Š” %s?…?‹ˆ?‹¤. \n","Hi, everyone");
    
}

void ex4_4()
{
    printf("ë¬¸ì ?ƒ?ˆ˜ %c %c %c?Š” \n",'a','b','c');
    printf("ASCII ì½”ë“œ 10ì§„ìˆ˜ë¡? %d %d %d \n",'a','b','c');
    printf("ASCII ì½”ë“œ 16ì§„ìˆ˜ë¡? %x %x %x \n",'a','b','c');

    printf("\n--------------------\n");

    printf("ë¬¸ì ?ƒ?ˆ˜ %c %c %c?Š” \n",'!','@','#');
    printf("ASCII ì½”ë“œ 10ì§„ìˆ˜ë¡? %d %d %d \n",'!','@','#');
    printf("ASCII ì½”ë“œ 16ì§„ìˆ˜ë¡? %x %x %x \n",'!','@','#');
 

}

void ex4_3()
{
    printf("ë¬¸ì ?ƒ?ˆ˜ %c %c %c?…?‹ˆ?‹¤. \n",'a','b','c');
    printf("ë¬¸ì ?ƒ?ˆ˜ %c %c %c?…?‹ˆ?‹¤. \n", '!','@','#');
 
}


void ex4_2()
{
    printf("?‹¤?ˆ˜?˜• ?ƒ?ˆ˜ %1f + %1f = %1f =?…?‹ˆ?‹¤. \n", 3.1, 4.1, 3.1+4.1);

  
}


void ex4_1()
{
    printf("10ì§„ìˆ˜ ? •?ˆ˜?˜• ?ƒ?ˆ˜ %d+%d=%d?…?‹ˆ?‹¤. \n",10,20,10+20);
    printf("16ì§„ìˆ˜ ? •?ˆ˜?˜• ?ƒ?ˆ˜ %x+%x=%x?…?‹ˆ?‹¤. \n",0x10,0x20,0x10+0x20);
    printf("8ì§„ìˆ˜ ? •?ˆ˜?˜• ?ƒ?ˆ˜ %o+%o=%o?…?‹ˆ?‹¤. \n", 010,020, 010+020);

    
}

void ex3_9()
{
    int a=3;
    int b=4;

    printf("a?˜ ê°? : %d \n",a);
    printf("b?˜ ê°? : %d \n",b);

    printf("ë³??ˆ˜ a?˜ ?‹œ?‘ ì£¼ì†Œ : %x \n", &a);
    printf("ë³??ˆ˜ b?˜ ?‹œ?‘ ì£¼ì†Œ : %x \n", &b);
 
}

void ex3_8()

{
    int appleBox=30;
    int grapeBox=20;
    int total;

    total=appleBox + grapeBox;
    printf("ì´? %dë°•ìŠ¤ê°? ?ˆ?Šµ?‹ˆ?‹¤. \n", total);

     
}  


void ex3_7()
{
    int a;
    int b;

    a=1;
    b=2;

    int c;
    c=3; 
    
    printf("a?˜ ê°? : %d \n", a);
    printf("b?˜ ê°? : %d \n", b);
    printf("c?˜ ê°? : %d \n", c);
 
}


void ex3_6()
{
    int a=0;
    int b=1;

    printf("a?˜ ê°’ì?? %d?…?‹ˆ?‹¤.\n",a);
    printf("b?˜ ê°’ì?? %d?…?‹ˆ?‹¤.\n",b);

    a=a+10;
    b=b+10;

    printf("ë³?ê²½ëœ a?˜ ê°’ì?? %d?…?‹ˆ?‹¤. \n",a);
    printf("ë³?ê²½ëœ b?˜ ê°’ì?? %d?…?‹ˆ?‹¤.\n",b);
 
}

void ex3_5()
{
    int a=0;
    int b=1;

    printf("a?˜ ê°’ì?? %d?…?‹ˆ?‹¤. \n",a);
    printf("b?˜ ê°’ì?? %d?…?‹ˆ?‹¤. \n",b);
 
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

    printf("float?˜• ?‹¤?ˆ˜ ?‘ ê°? ?…? ¥: ");
    scanf("%f %e", &f1, &f2);
    printf("float?˜• ?‹¤?ˆ˜ ?‘ ê°? ?…? ¥ : f1=%f, f2=%e \n", f1,f2);

    printf("double?˜• ?‹¤?ˆ˜ ?‘ ê°? ?…? ¥ : ");
    scanf("%1f %1e", &d1, &d2);
    printf("double?˜• ?‹¤?ˆ˜ ì¶œë ¥ : d1=%1f, d2=%1e \n", d1, d2);
 
}

void ex2_12()
{
    int a,b,c;

    printf("10ì§„ìˆ˜ ? •?ˆ˜ 1ê°? ?…? ¥: ");
    scanf("&d",&a);
    printf("10ì§„ìˆ˜ : %d,16ì§„ìˆ˜ : %x,8ì§„ìˆ˜ : %o \n",a,a,a);

    printf("16ì§„ìˆ˜ ? •?ˆ˜ 1ê°? ?…? ¥ : ");
    scanf("&x",&b);
    printf("10ì§„ìˆ˜ : %d,16ì§„ìˆ˜ : %x,8ì§„ìˆ˜ : %o \n",b,b,b);

    printf("8ì§„ìˆ˜ ? •?ˆ˜  1ê°? ?…? ¥ : ");
    scanf("&o",&c);
    printf("10ì§„ìˆ˜ : %d,16ì§„ìˆ˜ : %x,8ì§„ìˆ˜ : %o \n",c,c,c);

  
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

    printf("?˜¬?•´ ?š°ë¦¬ë‚˜?¼ ê²½ì œ ?„±?¥ë¥ ì„ 5%% ?…?‹ˆ?‹¤.\n");
 
}

void ex2_8()
{
    printf("%d \n", 2147483647);
    printf("%lld \n", 2147483650LL);
    printf("%u \n", 4294967295);

 
}

void ex2_7()
{
    printf("aë¥? ???ë¬¸ìë¡? ?‘œ?˜„?•˜ë©? %c?…?‹ˆ?‹¤.\n",'A');
    printf("%s %c?…?‹ˆ?‹¤. \n", "aë¥? ???ë¬¸ìë¡? ?‘œ?˜„?•˜ë©?", 'A');
    printf("%s %d \n","2ê³±í•˜ê¸? 3????",2*3);
 
}



void ex2_6()
{  
   printf("10ì§„ìˆ˜ ? •?ˆ˜: %d \n",0.5);
   printf("10ì§„ìˆ˜ ?‹¤?ˆ˜: %f \n",0.5);
   printf("10ì§„ìˆ˜ ?‹¤?ˆ˜: %1f \n",0.5);

   printf("?†Œ?ˆ˜?  ?´?•˜ 6?ë¦? ?´?ƒ : %f \n, 0.5655678");
   printf("?†Œ?ˆ˜?  ?´?•˜ 6?ë¦? ?´?ƒ : %lf \n, 0.5667784");

}

  

void ex2_5()
{
   printf("10ì§„ìˆ˜ : %d?Š” 16ì§„ìˆ˜ : %x, 8ì§„ìˆ˜ : %o?…?‹ˆ?‹¤. /n" , 50,50,50);
   printf("10ì§„ìˆ˜ : %d?Š” 16ì§„ìˆ˜ : %x, 8ì§„ìˆ˜ : %o?…?‹ˆ?‹¤. /n" , -50,-50,-50);    
    // 16ì§„ìˆ˜??? 8ì§„ìˆ˜?Š” ?Œ?ˆ˜ ?‘œ?˜„ ë¶ˆê??
   
}

void ex2_4()
{
    printf("%d ?”?•˜ê¸? %d?Š” %d?…?‹ˆ?‹¤.\n",3,5,3+5);
    printf("%i ?”?•˜ê¸? %i?Š” %i?…?‹ˆ?‹¤.\n",3,5,3+5);
    printf("%d-%d = %d?…?‹ˆ?‹¤.\n",3,5,3-5);
    printf("%i-%i = %i?…?‹ˆ?‹¤.\n",3,5,3-5);
   
}

void ex2_3()
{  
    printf("\t Hello C! \n Hello world! \n");
    printf("?°?”°?˜´?‘œ : \" \" \n");
    printf("?‘????”°?˜´?‘œ : \' \' \n");
    printf("?—­?Š¬?˜?‹œ : \\ \n");
 
}

void ex2_2()
{
    printf("heollo C world \n!");
 
}


void ex2_1()
{
    printf("Hello World!");
 
}
