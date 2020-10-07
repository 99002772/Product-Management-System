void login()
{

int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="Pree";
    char pass[10]="2809";
    do
{

    printf("\n LOGIN ");
    printf("\n USERNAME:-");
	scanf("%s", &uname);
	printf("\n PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	
	i=0;
	
		if(strcmp(uname,"pree")==0 && strcmp(pword,"2809")==0)
	{
	printf("\nLOGIN IS SUCCESSFUL");
    printf("\nWELCOME TO PRODUCT MANAGEMENT SYSTEM");

	printf("\nPress any key to continue");
	getch();
	break;
	}
	else
	{
		printf("\nLOGIN IS UNSUCESSFUL");
		a++;

		getch();

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\n you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");
		menu();
}
