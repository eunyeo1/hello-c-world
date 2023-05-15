#include <stdio.h>
#include <string.h>
#include <float.h>
#include <limits.h>
#include <time.h>
#include "test.h"
#define MAX 1000000
#define CODE 
int num;

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

    printf("Î¨∏Ïûê ?ÉÅ?àò : %c %c %c %c \n",'A','B','C','D');
    printf("Î¨∏Ïûê Î∞∞Ïó¥ Î≥?Í≤? ?†Ñ : %c %c %c %c \n",array[0],array[1],array[2],array[3]);

    array[0]='D';
    array[1]='C';
    array[2]='B';   
    array[3]='A';

    printf("Î¨∏Ïûê Î∞∞Ïó¥ Î≥?Í≤? ?õÑ : %c %c %c %c \n",array[1],array[2],array[3]);
    
    printf("Î¨∏Ïûê Î∞∞Ïó¥ array?ùò ?Å¨Í∏? : %d \n",sizeof(array));
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

    printf("Î∞∞Ïó¥?ùò ?Å¨Í∏? : %d ?è¨?ù∏?Ñ∞?ùò ?Å¨Í∏? : %d \n", sizeof(array),sizeof(p));
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

    printf("add ?ï®?àò?ùò Ï£ºÏÜå : %p \n", add);
    printf("?ï®?àò ?è¨?ù∏?Ñ∞?ùò Ï£ºÏÜå : %p \n",&pointer);

    pointer=add;
    pointer(x,y);

    return 0;
    
}

void add(double num1, double num2)
{
    double result;
    result=num1 + num2;
    printf("%.1f + %.1f = %.1f?ûÖ?ãà?ã§. \n ", num1, num2, result);
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
    // ?è¨?ù∏?Ñ∞ Î≥??àò ?Ñ†?ñ∏ 
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

    printf("Ï£ºÏÜå : %x, Í∞? : %d, Í∞?: %d \n",&num1,num1,*&num1);
    printf("Ï£ºÏÜå : %x, Í∞? : %d, Í∞?: %d \n",&num2,num2,*&num2);

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
           printf("?†ï?àòÎ•? ?ûÖ?†•?ïò?Ñ∏?öî : ");
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
    //2Ï∞®Ïõê Î∞∞Ïó¥ ?Ñ†?ñ∏ 
    int array[4][3];

    array[0][0]=1; array[0][1]=2; array[0][2]=3; 
    array[1][0]=4; array[1][1]=5; array[1][2]=6;
    array[2][0]=7; array[2][1]=8; array[2][2]=9;
    array[3][0]=10; array[3][1]=11; array[3][2]=12;

    printf("?à´?ûêÎ•? ?ûÖ?†•?ïò?Ñ∏?öî: ");
    scanf("%d", &num);
    printf("?ûÖ?†•?ïú ?à´?ûê?äî %d?ûÖ?ãà?ã§.\n", num);

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
        printf("Î∞∞Ïó¥?ùò ?öî?Üå array[%d]?ùò Í∞? : %d \n",i,array[i]);
    }

    printf("Ï¥ùÏ†ê?ù¥ %d?ù¥Í≥?", total);
    printf("?èâÍ∑†Ï?? %.21f?ûÖ?ãà?ã§. \n",(double)total/3);
 
}

void ex1__3()
{
    int array[3]={87,99,80};
    int total=0;

    total=array[0]+array[1]+array[2];
    printf("Ï¥ùÏ†ê??? %d?ù¥Í≥?", total);
    printf("?èâÍ∑†Ï?? %.21f?ûÖ?ãà?ã§. \n",(double)total/3);
 

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

    printf("Ï≤? Î≤àÏ?? ?ïô?Éù?ùò ?†ê?àò : %d \n", student[0]);
    printf("?ëê Î≤àÏ?? ?ïô?Éù?ùò ?†ê?àò : %d \n", student[1]);
    printf("?Ñ∏ Î≤àÏ?? ?ïô?Éù?ùò ?†ê?àò : %d \n", student[2]);
    printf("?Ñ§ Î≤àÏ?? ?ïô?Éù?ùò ?†ê?àò : %d \n", student[3]);
    printf("?ã§?ÑØ Î≤àÏ?? ?ïô?Éù?ùò ?†ê?àò : %d \n", student[4]);
 

}

//////// part 2 /////////



void ex9_14()
{
    int a;
    int result;

    printf("?†ï?àò ?ûÖ?†• : ");
    scanf ("%d",&a);

    result=factorial(a);
    printf("%d ?éô?Ü†Î¶¨Ïñº??? %d ?ûÖ?ãà?ã§ : \n",a,result);
  
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
        printf("????îÑ ?ÑúÎπÑÏä§ %d?öå \n", n);
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
    printf("????îÑ ?ÑúÎπÑÏä§ %d?öå \n",i);
    i=i+1;
    _B();
}



void ex9_11()
{
    _A();
 
}

void _A(void)
{
    printf("????îÑ ?ÑúÎπÑÏä§ \n");
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
    printf("?†àÏß??ä§?Ñ∞?ùò Î≥??àò ?Üç?èÑ : %lfÏ¥? \n", (double)result/1000);
 
    
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

    printf("x?ùò Í∞?: %d, y?ùò Í∞?: %d\n", x, y);
}

void ex9_8()
{
    printf("?ï®?àò ?ò∏Ï∂? ?†Ñ num : %d \n", num);
    grow();
    printf("?ï®?àò ?ò∏Ï∂? ?õÑ num : %d \n", num);
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
    printf("Î∫ÑÏÖà Í≤∞Í≥º : %d \n", result);
    
    return 0;
}
int subtract(int x, int y)
{
    return x-y;
}


void ex9_5()
{
    int aaa = 10;
    printf("func_A() ?ï®?àò?ùò aaa Í∞?: %d \n", aaa);

    func_A();

    return 0;
}
void func_A(void)
{
    int aaa = 20;
    int bbb = 30;

    printf("func_A() ?ï®?àò?ùò aaa Í∞?: %d \n", aaa);
    printf("func_A() ?ï®?àò?ùò bbb Í∞?: %d \n", bbb); 
}


void ex9_4()
{
    int result;
    printf("---?îÑÎ°úÍ∑∏?û® ?ãú?ûë---\n");
    printf("?†ï?àò ?ïú Í∞úÎ?? ?ûÖ?†•?ïò?Ñ∏?öî : ");

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
    printf("Í≤∞Í≥º : %d \n", x);
 
}

void ex9_2()
{
    int i, j;
    int k;
    

    printf("?à´?ûê ?ëêÍ∞úÎ?? ?ûÖ?†•?ïò?Ñ∏?öî : ");
    scanf("%d %d", &i, &j);

    k = max(i, j);
    printf("%d??? %d Ï§? ?Å∞ ?àò?äî %d?ûÖ?ãà?ã§.\n", i, j, k);
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

    printf("Î¨∏ÏûêÎ•? ?ûÖ?†•?ïò?Ñ∏?öî(qÎ•? ?ûÖ?†•?ïòÎ©? Ï¢ÖÎ£å) : ");
    for( ;  ; )
    {
        scanf("%c",&ch);
        if(ch=='q')
            break;
    }
    printf("Î∞òÎ≥µÎ¨∏ÏùÑ Ï¢ÖÎ£å?ï©?ãà?ã§. \n");

}

void ex8_11() 
{
    char ch;

    printf("(T)hursday,(F)riday,(S)aturday \n");
    printf("Î¨∏Ïûê ?ûÖ?†•(T,F,S) : ");

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
            printf("?ûòÎ™? ?ûÖ?†•?êò?óà?äµ?ãà?ã§. \n");
    }
}


void ex8_10()
{ 
    
    printf("Î™áÎ≤à?ùò ?ä§?úÑÏπòÎ?? ?àÑÎ•¥ÏãúÍ≤†Ïäµ?ãàÍπ??");
    scanf("%d",&num);

    switch (num)
    {
        case 1:
            printf("?†Ñ?ì±?ù¥ ÏºúÏßê \n");
            break;

        case 2:
            printf("?†Ñ?ì±?ù¥ Í∫ºÏßê \n");
            break;

        case 3:
            printf("Í≥†Ïû• \n");
            break; 

        default:
            printf("?ä§?úÑÏπ? ?ò§Î•? : ?ö∞Î¶¨Ïßë ?ä§?úÑÏπòÎäî 1Î≤? ~ 3Î≤àÍπåÏß?Îß? ?ûà?äµ?ãà?ã§. \n");       
    }
}



void ex8_8()
{
    printf("C ?ñ∏?ñ¥ ?Ñ±?†Å ?ûÖ?†• : ");
    scanf("%d,&num");

    if(num>=95)
        printf("A+?ûÖ?ãà?ã§. \n");
    else if(num>=90)
        printf("A?ûÖ?ãà?ã§. \n");
    
    else if(num>=85)
        printf("B+?ûÖ?ãà?ã§. \n");
    else if(num>=80)
        print("B?ûÖ?ãà?ã§. \n");
    else
        printf("F?ûÖ?ãà?ã§.\n");
 
} 

void ex8_7()
{
    printf("c?ñ∏?ñ¥ ?Ñ±?†Å ?ûÖ?†• : ");
    scanf("%d",&num);

    if(num>=95)
        printf("A+?ûÖ?ãà?ã§. \n");
    else if(num>=90)
        printf("A?ûÖ?ãà?ã§. \n");
    else if(num>=85)
        printf("B+?ûÖ?ãà?ã§. \n");
    else if(num>=80)
        printf("B?ûÖ?ãà?ã§. \n");
    else
        printf("F?ûÖ?ãà?ã§.\n");
 
}

void ex8_6()
{
    printf("?à´?ûê ?ûÖ?†•: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("0Î≥¥Îã§ ?Å∞ ?àòÍ∞? num?óê ????û•\n");
    } else if (num == 0) {
        printf("0?ùÑ num?óê ????û•\n");
    } else {
        printf("0Î≥¥Îã§ ?ûë??? ?àòÍ∞? num?óê ????û•\n");
    }
}

void ex8_5()
{
    printf("?à´?ûê ?ûÖ?†• : ");
    scanf("%d,&num");

    if(num>0)
        printf("0Î≥¥Îã§ ?Å∞ ?àòÍ∞? num?óê ????û• \n");
    else
    {
        if(num==0)
            printf("0?ù¥ num?óê ????û• \n");
        else
            printf("0Î≥¥Îã§ ?ûë??? ?àòÍ∞? num?óê ????û• \n");

    }

}

void ex8_4()
{
  
    printf("?à´?ûê ?ûÖ?†• : ");
    scanf("%d",&num);

    if(num>0)
        printf("0Î≥¥Îã§ ?Å∞ ?àòÍ∞? num?óê ????û• \n");
    
    else
        printf("0 ?òê?äî 0Î≥¥Îã§ ?ûë??? ?àòÍ∞? num?óê ????û• \n");

}

void ex8_3()
{
    int age;

    printf("?Çò?ù¥ ?ûÖ?†• : ");
    scanf("$d",&age);

    if(age>=15 && age<=100)
        printf("?öå?õê Í∞??ûÖ?ù¥ Í∞??ä•?ï©?ãà?ã§ \n");

    else 
        printf("?öå?õê Í∞??ûÖ?ù¥ Í∞??ä•?ï©?ãà?ã§ \n ");
}


void ex8_2()
{
    printf("5?ùò Î∞∞Ïàò : ");
    for(num=1; num<=100; num++)
    {
        if(num%5==0)
           printf("%3d",num);
    }
}


void ex8_1()
{
    printf("?à´?ûêÎ•? ?ûÖ?†•?ïò?Ñ∏?öî : *");
    scanf("%d",&num);

    if(num>=0)
        printf("?ñë?àò?ûÖ?ãà?ã§. \n");
    
    if(num<0)
        printf("?ùå?àò?ûÖ?ãà?ã§. \n");

}


void ex7_16()
{
    int num=10;
    do
    { 
        printf("%d",num);
        num++;
        
    } while (num<10);

    printf("\n **while Î¨∏ÏùÑ Ï¢ÖÎ£å?ï©?ãà?ã§.** \n");
        
}
    
    
void ex7_15()
{
    int i,factorial=1;
    for(i=1; i<=10;)
    {
        factorial=factorial+i;
        i++;

    }
    printf("1Î∂??Ñ∞ 10ÍπåÏ???ùò Í≥? :  %d \n", factorial);

}


void ex7_14()
{
    int i, factorial = 1;
    for(i = 1; i <= 10; i++)
    {
        factorial *= i;
    }
    printf("1Î∂??Ñ∞ 10ÍπåÏ???ùò Í≥? : %d\n", factorial);
}

void ex7_13()
{
    int i=1, factorial=1;
    for(; i<=10; i++)
    {
        factorial=factorial+i;
    }
    printf("1Î∂??Ñ∞ 10ÍπåÏ???ùò Í≥? : %d \n",factorial);
 
}

void ex7_12()
{
    int i;
    int factorial=1;

    for(i=1; i<=10; i++)

    {
        factorial=factorial+i;
    }
    printf("1Î∂??Ñ∞ 10ÍπåÏ???ùò Í≥?: %d \n",factorial);
 
}



void ex7_11()
{
    int num,j=9,result=0;
    printf("?à´?ûêÎ•? ?ûÖ?†•?ïò?Ñ∏?öî : ");
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
        printf("Î∞òÎ≥µ ?öü?àò : %d \n",i);

    }
   
}


void ex7_8()
{
    int num=0, i, result=0;

    printf("?à´?ûêÎ•? ?ûÖ?†•?ïò?Ñ∏?öî :");
    scanf("%d",&num);

    for(i=1; i<10; i=i+2)
    {
        result=num*1;
        printf("%d*%d=%d?ûÖ?ãà?ã§. \n",num,i,result);

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
    printf("-------Î∞òÎ≥µÎ¨? Ï¢ÖÎ£å------\n");

}



void ex7_6()
{
    for(num=0; num<5; num++)
    {
        printf("Î∞òÎ≥µ ?Ç¥?ö© : %d \n",num);

    }
    printf("Î∞òÎ≥µÎ¨∏ÏùÑ Ï¢ÖÎ£å?ïú ?õÑ : %d \n",num);

 
}

void ex7_5()
{
    int num=0, j=9, result=0;
    printf("?à´?ûêÎ•? ?ûÖ?†•?ïò?Ñ∏?öî : ");
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
        printf("Î∞òÎ≥µ ?öü?àò : %d \n", i);
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
    primtf("-----Î∞òÎ≥µÎ¨? Ï¢ÖÎ£å-----\n");

}


void ex7_1()
{
    int num=0;
    while(num<5)
    {
        printf("Î∞òÎ≥µ ?Ç¥?ö©: %d \n",num);
        num++;
    }

    printf("Î∞òÎ≥µÎ¨? Ï¢ÖÎ•ò?ïú ?õÑ : %d \n",num);

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
    printf("Í≤∞Í≥º : %lf \n",result);
    
    result=(double)num1/num2;
    printf("Í≤∞Í≥º : %lf \n",result);

    result=num1/(double)num2;
    printf("Í≤∞Í≥º : %lf \n",result);

    result=(double)num1/(double)num2;
    printf("Í≤∞Í≥º : %lf \n",result);

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

    printf("Î¨∏Ïûê ?ûÖ?†• : ");
    printf("%c",&val1);
    printf("ASCII ÏΩîÎìú Í∞? %d?ûÖ?ãà?ã§. \n",val1);
    
    printf("ASCII ÏΩîÎìú Í∞? ?ûÖ?†• : ");
    scanf("%d",&val2);
    printf("Î¨∏ÏûêÎ°? %c?ûÖ?ãà?ã§. \n", val2);

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
    printf("float?òï: %f \n",num1);
    printf("float?òï: %.2f",num1);

}



void ex6_7()
{
    float num1=0.123456789012345;
    float num2=0.123456789012345;

    printf ("float?òï : %f \n", num1);
    printf ("double?òï : %f \n", num2);

    printf ("float?òï : %.15f \n", num1);
    printf ("double?òï : %.15lf \n", num2);

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
    printf("float?ùò ÏµúÏÜüÍ∞? %e, ÏµúÎåìÍ∞? %e \n", FLT_MIN, FLT_MAX);
    printf("double?òï?ùò ÏµúÏÜüÍ∞? %e, ÏµúÎåìÍ∞? %e \n", DBL_MIN, DBL_MAX);
    printf("long doublee?òï?ùò ÏµúÏÜüÍ∞? %e, ÏµúÎåìÍ∞? %e \n", LDBL_MIN, LDBL_MAX);

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
     printf("char?òï?ùò ?Å¨Í∏? %d Î∞îÏù¥?ä∏, %dÎ∞îÏù¥?ä∏ \n", CHAR_MIN, CHAR_MAX);
     printf("short?ùò ?Å¨Í∏? %d Î∞îÏù¥?ä∏, %dÎ∞îÏù¥?ä∏ \n", SHRT_MIN, SHRT_MAX);
     printf("int?òï?ùò ?Å¨Í∏? %d Î∞îÏù¥?ä∏, %dÎ∞îÏù¥?ä∏ \n", INT_MIN, INT_MAX);
     printf("long?òï?ùò ?Å¨Í∏? %d Î∞îÏù¥?ä∏, %dÎ∞îÏù¥?ä∏ \n", LONG_MIN, LONG_MAX);

} 



void ex6_1() 
{
    //?†ï?àò?òï
    char num1=10;
    short num2=20;
    int num3=30;
    long num4=40;

    //?ã§?àò?òï 
    float num5=3.14;
    double num6=3.15;
    long double num7=3.17;

    printf("\n------?†ï?àò?òï ?ûêÎ£åÌòïÍ≥? Î≥??àò?ùò Î©îÎ™®Î¶? ?Å¨Í∏?------\n");
    printf("char?òï?ùò ?Å¨Í∏? %d Î∞îÏù¥?ä∏, %dÎ∞îÏù¥?ä∏ \n", sizeof(char), sizeof(num1));
    printf("short?ùò ?Å¨Í∏? %d Î∞îÏù¥?ä∏, %dÎ∞îÏù¥?ä∏ \n", sizeof(short), sizeof(num1));
    printf("int?òï?ùò ?Å¨Í∏? %d Î∞îÏù¥?ä∏, %dÎ∞îÏù¥?ä∏ \n", sizeof(int), sizeof(num1));
    printf("long?òï?ùò ?Å¨Í∏? %d Î∞îÏù¥?ä∏, %dÎ∞îÏù¥?ä∏ \n", sizeof(long), sizeof(num1));

    printf("\n------?ã§?àò?òï ?ûêÎ£åÌòïÍ≥? Î≥??àò?ùò Î©îÎ™®Î¶? ?Å¨Í∏?------\n");
    printf("float?ùò ?Å¨Í∏? %d Î∞îÏù¥?ä∏, %dÎ∞îÏù¥?ä∏ \n", sizeof(float), sizeof(num1));
    printf("double?òï?ùò ?Å¨Í∏? %d Î∞îÏù¥?ä∏, %dÎ∞îÏù¥?ä∏ \n", sizeof(double), sizeof(num1));
    printf("long double?òï?ùò ?Å¨Í∏? %d Î∞îÏù¥?ä∏, %dÎ∞îÏù¥?ä∏ \n", sizeof(long double), sizeof(num1));
}




void ex5_18()
{
    int num1=10;
    int num2=-10;

    int result1;
    int result2;

    result1= num1 >> 1;
    result2= num1 >> 1;

    printf("ÎπÑÌä∏ ?ã®?úÑ>> ?ó∞?Ç∞?ùò Í≤∞Í≥º %d \n",result1);
    printf("ÎπÑÌä∏ ?ã®?úÑ>> ?ó∞?Ç∞?ùò Í≤∞Í≥º %d \n",result2);
}



void ex5_17()
{
    int num1=10;
    int result1;
    
    result1 = num1 << 2;
    printf("ÎπÑÌä∏ ?ã®?úÑ << ?ó∞?Ç∞?ùò Í≤∞Í≥º %d \n",result1);
}


void ex5_16()
{
    int num1=20;
    int result1;

    result1 =~num1;
    printf("ÎπÑÌä∏ ?ã®?úÑ ~ ?ó∞?Ç∞?ùò Í≤∞Í≥º %d \n", result1);

}

void ex5_15()
{
    int num1=20, num2=16;
    int result1;

    result1=num1^num2;
    printf("ÎπÑÌä∏?ã®?úÑ ^ ?ó∞?Ç∞?ùò Í≤∞Í≥º %d \n", result1);
}


void ex5_14()
{
    int num1=20, num2=16;
    int result1;

    result1=num1 | num2;
    printf("ÎπÑÌä∏ ?ã®?úÑ | ?ó∞?Ç∞?ùò Í≤∞Í≥º %d \n", result1);

}

void ex5_13()
{
    int num1=20, num2=16;
    int result1;

    result1=num1 & num2;
    printf("ÎπÑÌä∏?ã®?úÑ & ?ó∞?Ç∞?ùò Í≤∞Í≥º %d \n", result1);
}

void ex5_12()
{
    int num1=2, num2=3;
    int result1;

    result1=(num1>num2) ? num1:num2;
    printf("result1?óê ????û•?êú Í∞? %d \n", result1);
 
}

void ex5_11()
{
    int num1=2,num2=3,num3=5;
    int result1, result2, result3;

    result1=(num1>0)&&(num2<10);
    result2=(num2<=2) || (num3>5);
    result3=!num3;

    printf("result1?óê ????û•?êú Í∞? %d \n", result1);
    printf("result2?óê ????û•?êú Í∞? %d \n", result2);
    printf("result3?óê ????û•?êú Í∞? %d \n", result3);
 
}

 
void ex5_10()
{
    int num1=2, num2=4;
    int result1, result2, result3, result4;

    result1=(num1>num2);
    result2=(num1<=num2);
    result3=(num1==num2);
    result4=(num1!=num2);

    printf("result1?óê ????û•?êú Í∞? %d \n", result1);
    printf("result2?óê ????û•?êú Í∞? %d \n", result2);
    printf("result3?óê ????û•?êú Í∞? %d \n", result3);
    printf("result4?óê ????û•?êú Í∞? %d \n", result4);
 
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
    printf("Î≥µÌï© ?çß?Öà ?ó∞?Ç∞ Í≤∞Í≥º : num1?ùò ÏµúÏ¢ÖÍ∞? : %d \n", num1);

    num2=num2-2;
    printf("Î≥µÌï© Î∫ÑÏÖà ?ó∞?Ç∞ Í≤∞Í≥º : num2?ùò ÏµúÏ¢ÖÍ∞? : %d \n", num2);

    num3=num3*2;
    printf("Î≥µÌï© Í≥±ÏÖà ?ó∞?Ç∞ Í≤∞Í≥º : num3?ùò ÏµúÏ¢ÖÍ∞? : %d \n", num3);

    num4=num4/2;
    printf("Î≥µÌï© ?Çò?àó?Öà ?ó∞?Ç∞ Í≤∞Í≥º : num4?ùò ÏµúÏ¢ÖÍ∞? : %d \n", num4);

    num5=num5%2;
    printf("Î≥µÌï© ?ÇòÎ®∏Ï?? ?ó∞?Ç∞ Í≤∞Í≥º : num5?ùò ÏµúÏ¢ÖÍ∞? : %d \n", num5);

    printf("%d, %d, %d, %d, %d \n", num1, num2, num3, num4, num5);

}

void ex5_4()
{
    int num1, num2;

    num1=10/3;
    num2=10%3;

    printf("Î™? : %d \n",num1);
    printf("?ÇòÎ®∏Ï?? : %d \n",num2);
 
}

void ex5_3()
{
    int a,b;
    a=6;
    b=2;

    printf("?çß?Öà ?ó∞?Ç∞ Í≤∞Í≥º : %d \n", a+b);
    printf("Î∫ÑÏÖà ?ó∞?Ç∞ Í≤∞Í≥º : %d \n", a-b);
    printf("Í≥±ÏÖà ?ó∞?Ç∞ Í≤∞Í≥º : %d \n", a*b);
    printf("?Çò?àÑÍ∏? ?ó∞?Ç∞ Í≤∞Í≥º : %d \n", a/b);
    printf("?ÇòÎ®∏Ï?? ?ó∞?Ç∞ Í≤∞Í≥º : %d \n", a%b);

  
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

    printf("a?ùò Í∞? : %d \n",a);
    printf("b?ùò Í∞? : %d \n",b);

    printf("Î≥??àò a?ùò Ï£ºÏÜå : %x \n", &a);
    printf("Î≥??àò b?ùò Ï£ºÏÜå : %x \n", &b);


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
    printf("Î¨∏Ïûê?ó¥ ?ÉÅ?àò?äî %s?ûÖ?ãà?ã§. \n","A");
    printf("Î¨∏Ïûê?ó¥ ?ÉÅ?àò?äî %s?ûÖ?ãà?ã§. \n","10+10");
    printf("Î¨∏Ïûê?ó¥ ?ÉÅ?àò?äî %s?ûÖ?ãà?ã§. \n","Hi, everyone");
    
}

void ex4_4()
{
    printf("Î¨∏Ïûê ?ÉÅ?àò %c %c %c?äî \n",'a','b','c');
    printf("ASCII ÏΩîÎìú 10ÏßÑÏàòÎ°? %d %d %d \n",'a','b','c');
    printf("ASCII ÏΩîÎìú 16ÏßÑÏàòÎ°? %x %x %x \n",'a','b','c');

    printf("\n--------------------\n");

    printf("Î¨∏Ïûê ?ÉÅ?àò %c %c %c?äî \n",'!','@','#');
    printf("ASCII ÏΩîÎìú 10ÏßÑÏàòÎ°? %d %d %d \n",'!','@','#');
    printf("ASCII ÏΩîÎìú 16ÏßÑÏàòÎ°? %x %x %x \n",'!','@','#');
 

}

void ex4_3()
{
    printf("Î¨∏Ïûê ?ÉÅ?àò %c %c %c?ûÖ?ãà?ã§. \n",'a','b','c');
    printf("Î¨∏Ïûê ?ÉÅ?àò %c %c %c?ûÖ?ãà?ã§. \n", '!','@','#');
 
}


void ex4_2()
{
    printf("?ã§?àò?òï ?ÉÅ?àò %1f + %1f = %1f =?ûÖ?ãà?ã§. \n", 3.1, 4.1, 3.1+4.1);

  
}


void ex4_1()
{
    printf("10ÏßÑÏàò ?†ï?àò?òï ?ÉÅ?àò %d+%d=%d?ûÖ?ãà?ã§. \n",10,20,10+20);
    printf("16ÏßÑÏàò ?†ï?àò?òï ?ÉÅ?àò %x+%x=%x?ûÖ?ãà?ã§. \n",0x10,0x20,0x10+0x20);
    printf("8ÏßÑÏàò ?†ï?àò?òï ?ÉÅ?àò %o+%o=%o?ûÖ?ãà?ã§. \n", 010,020, 010+020);

    
}

void ex3_9()
{
    int a=3;
    int b=4;

    printf("a?ùò Í∞? : %d \n",a);
    printf("b?ùò Í∞? : %d \n",b);

    printf("Î≥??àò a?ùò ?ãú?ûë Ï£ºÏÜå : %x \n", &a);
    printf("Î≥??àò b?ùò ?ãú?ûë Ï£ºÏÜå : %x \n", &b);
 
}

void ex3_8()

{
    int appleBox=30;
    int grapeBox=20;
    int total;

    total=appleBox + grapeBox;
    printf("Ï¥? %dÎ∞ïÏä§Í∞? ?ûà?äµ?ãà?ã§. \n", total);

     
}  


void ex3_7()
{
    int a;
    int b;

    a=1;
    b=2;

    int c;
    c=3; 
    
    printf("a?ùò Í∞? : %d \n", a);
    printf("b?ùò Í∞? : %d \n", b);
    printf("c?ùò Í∞? : %d \n", c);
 
}


void ex3_6()
{
    int a=0;
    int b=1;

    printf("a?ùò Í∞íÏ?? %d?ûÖ?ãà?ã§.\n",a);
    printf("b?ùò Í∞íÏ?? %d?ûÖ?ãà?ã§.\n",b);

    a=a+10;
    b=b+10;

    printf("Î≥?Í≤ΩÎêú a?ùò Í∞íÏ?? %d?ûÖ?ãà?ã§. \n",a);
    printf("Î≥?Í≤ΩÎêú b?ùò Í∞íÏ?? %d?ûÖ?ãà?ã§.\n",b);
 
}

void ex3_5()
{
    int a=0;
    int b=1;

    printf("a?ùò Í∞íÏ?? %d?ûÖ?ãà?ã§. \n",a);
    printf("b?ùò Í∞íÏ?? %d?ûÖ?ãà?ã§. \n",b);
 
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

    printf("float?òï ?ã§?àò ?ëê Í∞? ?ûÖ?†•: ");
    scanf("%f %e", &f1, &f2);
    printf("float?òï ?ã§?àò ?ëê Í∞? ?ûÖ?†• : f1=%f, f2=%e \n", f1,f2);

    printf("double?òï ?ã§?àò ?ëê Í∞? ?ûÖ?†• : ");
    scanf("%1f %1e", &d1, &d2);
    printf("double?òï ?ã§?àò Ï∂úÎ†• : d1=%1f, d2=%1e \n", d1, d2);
 
}

void ex2_12()
{
    int a,b,c;

    printf("10ÏßÑÏàò ?†ï?àò 1Í∞? ?ûÖ?†•: ");
    scanf("&d",&a);
    printf("10ÏßÑÏàò : %d,16ÏßÑÏàò : %x,8ÏßÑÏàò : %o \n",a,a,a);

    printf("16ÏßÑÏàò ?†ï?àò 1Í∞? ?ûÖ?†• : ");
    scanf("&x",&b);
    printf("10ÏßÑÏàò : %d,16ÏßÑÏàò : %x,8ÏßÑÏàò : %o \n",b,b,b);

    printf("8ÏßÑÏàò ?†ï?àò  1Í∞? ?ûÖ?†• : ");
    scanf("&o",&c);
    printf("10ÏßÑÏàò : %d,16ÏßÑÏàò : %x,8ÏßÑÏàò : %o \n",c,c,c);

  
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

    printf("?ò¨?ï¥ ?ö∞Î¶¨ÎÇò?ùº Í≤ΩÏ†ú ?Ñ±?û•Î•†ÏùÑ 5%% ?ûÖ?ãà?ã§.\n");
 
}

void ex2_8()
{
    printf("%d \n", 2147483647);
    printf("%lld \n", 2147483650LL);
    printf("%u \n", 4294967295);

 
}

void ex2_7()
{
    printf("aÎ•? ???Î¨∏ÏûêÎ°? ?ëú?òÑ?ïòÎ©? %c?ûÖ?ãà?ã§.\n",'A');
    printf("%s %c?ûÖ?ãà?ã§. \n", "aÎ•? ???Î¨∏ÏûêÎ°? ?ëú?òÑ?ïòÎ©?", 'A');
    printf("%s %d \n","2Í≥±ÌïòÍ∏? 3????",2*3);
 
}



void ex2_6()
{  
   printf("10ÏßÑÏàò ?†ï?àò: %d \n",0.5);
   printf("10ÏßÑÏàò ?ã§?àò: %f \n",0.5);
   printf("10ÏßÑÏàò ?ã§?àò: %1f \n",0.5);

   printf("?Üå?àò?†ê ?ù¥?ïò 6?ûêÎ¶? ?ù¥?ÉÅ : %f \n, 0.5655678");
   printf("?Üå?àò?†ê ?ù¥?ïò 6?ûêÎ¶? ?ù¥?ÉÅ : %lf \n, 0.5667784");

}

  

void ex2_5()
{
   printf("10ÏßÑÏàò : %d?äî 16ÏßÑÏàò : %x, 8ÏßÑÏàò : %o?ûÖ?ãà?ã§. /n" , 50,50,50);
   printf("10ÏßÑÏàò : %d?äî 16ÏßÑÏàò : %x, 8ÏßÑÏàò : %o?ûÖ?ãà?ã§. /n" , -50,-50,-50);    
    // 16ÏßÑÏàò??? 8ÏßÑÏàò?äî ?ùå?àò ?ëú?òÑ Î∂àÍ??
   
}

void ex2_4()
{
    printf("%d ?çî?ïòÍ∏? %d?äî %d?ûÖ?ãà?ã§.\n",3,5,3+5);
    printf("%i ?çî?ïòÍ∏? %i?äî %i?ûÖ?ãà?ã§.\n",3,5,3+5);
    printf("%d-%d = %d?ûÖ?ãà?ã§.\n",3,5,3-5);
    printf("%i-%i = %i?ûÖ?ãà?ã§.\n",3,5,3-5);
   
}

void ex2_3()
{  
    printf("\t Hello C! \n Hello world! \n");
    printf("?Å∞?î∞?ò¥?ëú : \" \" \n");
    printf("?ûë????î∞?ò¥?ëú : \' \' \n");
    printf("?ó≠?ä¨?ûò?ãú : \\ \n");
 
}

void ex2_2()
{
    printf("heollo C world \n!");
 
}


void ex2_1()
{
    printf("Hello World!");
 
}
