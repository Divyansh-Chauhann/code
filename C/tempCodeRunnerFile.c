 int a,b,c;
    printf("Enter three sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    float s=(a+b+c)/2.0;
    float ar=sqrt(s*(s-a)+(s-b)*(s-c));
    printf("The area of triangle is:%f",ar);