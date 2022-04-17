//ITITWE21039 - HUYNH PHUONG DAI

//a Read the 20 elements of double array sales from the keyboard
    double sales[20];//array declaration
    int i;
    printf("Enter sales data: \n");// use input
    for(i=0;i<20;i++) //assigning number in the array
    {
        scanf("%lf",&sales[i]);
    }

    printf("The contentes of sales are: \n");

// bAdd 1000 to each of the 75 elements of double array allowance.
    for (i=0; i<75;++i)
    Allowance[i]=Allowance[i]+1000; 

//c Initialize the 50 elements of integer array numbers to zero.
    for (i=0; i<50;++i)
    numbers[i]=0;

//d  Print the 10 values of integer array GPA in column format.
    double GPA[10]={3.5,2,3.0,1,2.4,4,4.87,4.5,4,4.8};
    int i;
    printf("GPA\n");
    for (i=0; i<10;++i)
    printf("%f\n",GPA[i]);


