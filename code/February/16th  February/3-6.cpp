char *pstr; 
char str[8];
scanf("%s",pstr);       //野指针操作，pstr没有指向有效内存; 
strcpy(pstr,"hello");   //野指针操作； 
pstr=str;          //pstr指向数组str所对应内存单元的首地址； 
strcpy(pstr,"0123456789");   //不是野指针，但会越界；
 
