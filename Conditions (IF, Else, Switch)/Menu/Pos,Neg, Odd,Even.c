main()
 {
 int n,x;
printf("Enter a number:");
 scanf("%d",&n);
 printf("1. Positive, Negative or Zero \n2.even or odd \n ");
 scanf("%d",&x);
switch(x)
 {
 case 1:
 if(n>0)
 printf("positive\n");
 if(n<0)
 printf("negative\n");
 if(n==0)
 printf("zero\n");
 break;
case 2:
 if(n%2==0)
 printf("even number\n");
 else
 printf("odd number\n");
 break;
}
system("pause");
}
