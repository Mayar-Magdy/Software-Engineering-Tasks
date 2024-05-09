#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void CheckPrime(){
    printf("Check whether a number is a prime number!\n");
    int n;
    printf("Enter Number:");
    scanf(" %d",&n);
    int flag=(n>=2);
    for(int i=2;i<=n/2;++i)
        if(n%i==0) {
            flag=0;
            break;
        }

    if(flag) printf("%d is Prime",n);
    else printf("%d not Prime",n);
}

void square (){
    printf("Find the square root of any number!\n");
    int n;
    printf("Enter Number:");
    scanf(" %d",&n);
    printf("The square root of %d is %f",n,sqrt(n));
}
int isPrime(int n){
    for(int i=2;i<=n/2;++i)
        if(n%i==0)
            return 0;
    return (n>=2) && 1;
}
void PrimeNumber(){
    printf("Display Prime Numbers Between Intervals!\n");
    int start , end;
    printf("Enter the Start and End :");
    scanf(" %d%d",&start,&end);

    if(start>end) {
        int temp = start;
        start=end;
        end=temp;
    }
    printf("Prime numbers between %d to %d are:",start,end);
    int flag=0;
    for(int i=start;i<=end; ++i){
        if(isPrime(i)) { flag=1; printf("%d ",i);}
    }
    if(!flag) printf(" NO Prime numbers between %d to %d are ):");

}
int sum(int n){
    if(n) return n+sum(n-1);
    else return 0;
}
void SumNumbers ()
{
    printf("Sum of Natural Numbers!\n");
    int n;
    printf("Enter Number: ");
    scanf(" %d",&n);
    printf("Sum is %d", sum(n));sum(n);

}
long int fac(long int n){
    if(n>1) return n*fac(n-1);
    else return 1;

}
void Factorial (){
    printf("Find Factorial of a Number Using Recursion!\n");
    long int n;
    printf("Enter Number: ");
    scanf(" %ld",&n);
    printf("The Factorial of %ld is %ld" ,n,fac(n));
}
long int calcPow(long int n,long int p ){
    if(p>=1) return n*calcPow(n,p-1);
    else return 1;
}
void power (){
    printf("calculate power!\n");
    long int n, p;
    printf("Enter Number: ");
    scanf(" %ld",&n);
    printf("Enter Power: ");
    scanf(" %ld",&p);

    printf("%ld ^ %ld = %ld " ,n,p,calcPow(n,p));
}

int main()
{      
     int x;
    printf("Press 1 to CheckPrime\nPress 2 to get square\nPress 3 to print Prime Numbers\nPress 4 to Sum Numbers\nPress 5 to get Factorial\nPress 6 to calculate power\nPress 0 to Exist\n");
    printf("Your Number : ");

    while (1){
        scanf("%d",&x);
        if(!x) return 0;
        if(x==1)CheckPrime();
        else if(x==2) square();
        else if(x==3) PrimeNumber();
        else if(x==4) SumNumbers();
        else if(x==5) Factorial();
        else if(x==6)  power();
        printf("\nAnother Number? ");

    }
    //CheckPrime();
    //square();
    //PrimeNumber();
    // SumNumbers();
    // Factorial();
    // power();

    return 0;
}
