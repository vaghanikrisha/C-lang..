#include<stdio.h>
main(){
	//input variables
	int Choice , yourchoice;
	
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujarati\n");
	printf("Enter your choice:");
	scanf("%d",&Choice);
	
	switch (Choice){
        case 1:
            printf("Press 1 for Internet Recharge \n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter your choice:");
            scanf("%d",&yourchoice);
            
            printf("You have successfully done Recharge.");
            break;
            
        case 2:
            printf("Internet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your choice:");
            scanf("%d",&yourchoice);
            
            printf("Aapne safaltapurvak  Recharge kar liya he.");
            break;
        case 3:
            printf("Internet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo	\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your choice:");
            scanf("%d",&yourchoice);
            
            printf("Tame safaltapurvak Recharge karyu chhe.");
            break;
        default:
            printf("Enter Valid Number");
    }
}
