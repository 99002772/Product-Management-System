void delete_item(void)
{
	char target[40];
	int found=0;
	FILE *sfile, *tfile;
	sfile=fopen("NextFile.dat","r");
	tfile=fopen("TempFile.dat","w+");
	printf("\n Enter name to Delete: ");
	fflush(stdin);
	scanf("%s",target);
	target[0]=toupper(target[0]);
	while (fscanf(sfile,"%s %s %i %i %i\n",st.productname,st.productcomp, &st.price,&st.productid,&st.Qnt)!=EOF)
	{
		if(strcmp(target,st.productname)==0)
		{
			found=1;
		}
		else
		{
			fprintf(tfile,"%s %s %i %i %i\n", st.productname,st.productcomp, st.price,st.productid,st.Qnt);
		}
	}
			if(!found)
			{
				printf("\n Record not Found");
				getch();
				menu();
			}
			else
			{
				printf("\n Record deleted");
			}
			fclose(sfile);
			fclose(tfile);
			remove("NextFile.dat");
			rename("TempFile.dat","NextFile.dat");

			printf("\nPress any key to go to Main Menu!");
		while((st.c = getch()) =='\r');
		menu();
}
