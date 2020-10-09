 #include<stdio.h>
int main () {
 int a,b;
 for(a=0 , b=1 ; a<500 && b<500 ; a = a+b , b = a+b){
     printf ("%d\n%d\n",a,b);
 }
    return 0;
}

