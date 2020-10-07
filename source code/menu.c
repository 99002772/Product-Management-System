void menu(void)
{
	int choice;
	system("cls");
	main:
	printf("\nProduct Management System");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\nPress 1 Add Products");
	printf("\nPress 2 Delete Products");
	printf("\nPress 3 Search Products");
	printf("\nPress 4 Read Items");
	printf("\nPress 5 Edit Items");
	printf("\nPress 6 Exit!");

	printf("\nEnter your choice");
	scanf("%i", &choice);

	system("cls");

	switch(choice)
	{
		case 1:
			add_item();
			break;
		case 2:
			delete_item();
			break;
		case 3:
		search_item();
			break;
		case 4:
		read_item();
			break;
		case 5:
			edit_item();
			break;
		case 6:
		printf("System Exit");
		exit(0);
		break;


		default:
		printf("Invalid Choice\n");
			getch();
	}

}
