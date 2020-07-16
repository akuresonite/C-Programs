 #include <stdio.h>
int main(void){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    switch(age){
    	case 13:case 14:case 15:
    	case 16:case 17:
		case 18:
		case 19:printf("you are a teenager\n");
		  break;
		default: printf("you are not a teenager"); 	
	}
    return 0;
}

