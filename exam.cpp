#include<stdio.h>
#include<time.h>

void check1(int a,int b,int e){
    if(a>=b){e==1;}
    else{e==0;}}
void check2(int c,int d,int f){
    if(c>=d){f==1;}
    else{f==0;}}
void check3(int a,int b,int c,int d,int e,int f){
    if(e=1){if(f=1){if(a>=c){printf("Largest=(%d,%d,%d,%d)=%d",a,b,c,d,a);}
                    else{printf("Largest=(%d,%d,%d,%d)=%d",a,b,c,d,c);}
                    }
            else{   if(a>=d){printf("Largest=(%d,%d,%d,%d)=%d",a,b,c,d,a);}
                    else{printf("Largest=(%d,%d,%d,%d)=%d",a,b,c,d,d);}
                    }
            }
    else{   if(f=1){if(b>=c){printf("Largest=(%d,%d,%d,%d)=%d",a,b,c,d,b);}
                    else{printf("Largest=(%d,%d,%d,%d)=%d",a,b,c,d,c);}
                    }
            else{   if(b>=d){printf("Largest=(%d,%d,%d,%d)=%d",a,b,c,d,b);}
                    else{printf("Largest=(%d,%d,%d,%d)=%d",a,b,c,d,d);}
                    }
            }
            }
int main(void)
{ int a,b,c,d,e,f;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Enter the third number:\n");
    scanf("%d",&c);
    printf("Enter the fourth number:\n");
    scanf("%d",&d);
    check1;
    check2;
    check3;
    
    return 0;
}