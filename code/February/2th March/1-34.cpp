
NODE *create_linklist()
{
  NODE *head,*tail,*pnew;
  int score;
  head=(NODE*)malloc(sizeof(NODE));
  if(head==NULL)
  {
    printf("no enough  momory");
	return(NULL);	
  }
  head->next=NULL;
  tail=head;
  printf("input the score of the students:\n");
  while(1)
  {
    scanf("%d",&score);
	if(score<0)
	break;
	pnew=(NODE*)malloc(sizeof(NODE));
	if(pnew==NULL)
	{
	  printf("no enough memory");
	  return(NULL);	
	}
	pnew->score=score;
	pnew->next=NULL;
	
	tail->next=pnew;
	tail=pnew;	
	return(head);
  } 	
}

